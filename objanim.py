class Camera:
	def __init__(self, name):
		self._name = name
		self._position = []
		self._direction = []
		self._depth = None

	def position(self, x, y, z):
		self._position = [x, y, z]

	def direction(self, x, y, z):
		self._direction = [x, y, z]
	
	def depth(self, d):
		self._depth = d

	def output(self):
		return 'camera {0} {1}\n\tposition: {2} {3} {4};\n\tdirection: {5} {6} {7};\n\tdepth: {8};\n{9}\n'.format(self._name, '{', self._position[0], self._position[1], self._position[2], self._direction[0], self._direction[1], self._direction[2], self._depth, '}')


class Action:
	def __init__(self, action, obj, x, y, z):
		self._action = action
		self._obj = obj
		self._x = x
		self._y = y
		self._z = z

	def output(self):
		return '{0} {1} {2} {3} {4};\n'.format(self._action, self._obj, self._x, self._y, self._z)

class Interpolation:
	def __init__(self, time):
		self._time = time
		self._actions = []
	
	def add_action(self, action, obj, x, y, z):
		a = Action(action, obj, x, y, z)
		self._actions.append(a)

	def output(self):
		return '\tinterpolate {0} {1}\n{2}{3}\n'.format(self._time, '{', ''.join(['\t\t{0}'.format(a.output()) for a in self._actions]), '\t}')

class Animation:
	def __init__(self, name):
		self._name = name
		self._actions = []

	def add_action(self, action, obj, x, y, z):
		a = Action(action, obj, x, y, z)
		self._actions.append(a)
		return a

	def add_interp(self, time):
		i = Interpolation(time)
		self._actions.append(i)
		return i

	def output(self):
		return 'animation {0} {1}\n{2}{3}\n'.format(self._name, '{', ''.join([a.output() for a in self._actions]), '}')

class ObjAnim:
	def __init__(self, f):
		self._fname = f
		self._objects = []
		self._cameras = []
		self._animations = []
		self._timeline = []
		self._default_cam = None

	def load_model(self, f, name):
		self._objects.append('load_model \"{0}\" {1};\n'.format(f, name))

	def load_primitive(self, prim, name):
		self._objects.append('load_primitive {0} {1};\n'.format(prim, name))

	def add_camera(self, name):
		c = Camera(name)
		self._cameras.append(c)
		return c

	def add_animation(self, name):
		a = Animation(name)
		self._animations.append(a)
		return a

	def add_to_timeline(self, name, time):
		self._timeline.append('add_to_timeline {0} {1};\n'.format(name, time))

	def set_default_camera(self, cam):
		self._default_cam = 'set_default_camera {0};\n'.format(cam)

	def generate(self):
		f = open('{0}/{1}'.format('parser', self._fname), 'wb')

		for o in self._objects:
			f.write(o)

		f.write('\n')

		for c in self._cameras:
			f.write(c.output())

		f.write('\n')

		for a in self._animations:
			f.write(a.output())

		f.write('\n')

		for t in self._timeline:
			f.write(t)

		f.write('\n')

		f.write(self._default_cam)

		f.write('\n')

		f.close()
