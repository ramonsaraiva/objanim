import random

from objanim import *

primitives = ['cube', 'torus', 'sphere', 'monkey', 'cone', 'monkey']
primitive = 'cube'

prefix = 'obj'

objects = 200
time = 10
rr = 10

random_prim = False

def rv(x, y):
	return random.uniform(x, y)

if __name__ == '__main__':
	lib = ObjAnim('random_anim')

	for i in range(objects):
		p = primitive
		if random_prim:
			p = random.choice(primitives)
		lib.load_primitive(p, '{0}{1}'.format(prefix, i))

	cam1 = lib.add_camera('cam1')
	cam1.position(0, 0, -10)
	cam1.direction(0, 0, 1)
	cam1.depth(1000)

	setup = lib.add_animation('setup')
	for i in range(objects):
		setup.add_action('translate', '{0}{1}'.format(prefix, i), rv(-rr, rr), rv(-rr, rr), rv(0, rr))

	mess = lib.add_animation('mess')
	mess_i = mess.add_interp(time)
	for i in range(objects):
		mess_i.add_action('translate', '{0}{1}'.format(prefix, i), 0, 0, 0)
		mess_i.add_action('rotate', '{0}{1}'.format(prefix, i), rv(-100*rr, 100*rr), rv(-100*rr, 100*rr), rv(-100*rr, 100*rr))

	lib.add_to_timeline('setup', 0)
	lib.add_to_timeline('mess', 0)
	lib.set_default_camera('cam1')

	lib.generate()
