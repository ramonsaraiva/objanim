import random

from objanim import *

primitives = ['cube', 'torus', 'sphere', 'monkey', 'cone', 'monkey']
primitive = 'monkey'

prefix = 'obj'

objects = 100
time = 30
rr = 10

random_prim = False
translate = True
rotate = True
scale = False

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
	cam1.position(0, 0, -7)
	cam1.direction(0, 0, 1)
	cam1.depth(1000)

	cam2 = lib.add_camera('cam2')
	cam2.position(15, 0, 1)
	cam2.direction(-8, 0, 1)
	cam2.depth(1000)

	cam3 = lib.add_camera('cam3')
	cam3.position(-15, 0, 1)
	cam3.direction(8, 0, 1)
	cam3.depth(1000)

	setup = lib.add_animation('setup')
	for i in range(objects):
		setup.add_action('translate', '{0}{1}'.format(prefix, i), rv(-rr, rr), rv(-rr, rr), rv(0, rr))

	mess = lib.add_animation('mess')
	mess_i = mess.add_interp(time)
	for i in range(objects):
		if translate:
			mess_i.add_action('translate', '{0}{1}'.format(prefix, i), rv(-rr, rr), rv(-rr, rr), rv(0, rr))
		if rotate:
			mess_i.add_action('rotate', '{0}{1}'.format(prefix, i), rv(-100*rr, 100*rr), rv(-100*rr, 100*rr), rv(-100*rr, 100*rr))
		if scale:
			mess_i.add_action('scale', '{0}{1}'.format(prefix, i), rv(-rr/2, rr/2), rv(-rr/2, rr/2), rv(-rr/2, rr/2))

	lib.add_to_timeline('setup', 0)
	lib.add_to_timeline('mess', 0)
	lib.add_to_timeline('cam2', time * 0.33)
	lib.add_to_timeline('cam3', time * 0.66)
	lib.set_default_camera('cam1')

	lib.generate()
