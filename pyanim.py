import random

from objanim import *

primitives = ['cube', 'torus', 'sphere', 'monkey']
primitive = 'sphere'

prefix = 'obj'

objects = 100
time = 20
rr = 10

random_prim = True
translate = True
rotate = True
scale = True

def rv():
	return random.uniform(-rr, rr)

def rvz():
	return random.uniform(0, rr)

if __name__ == '__main__':
	lib = ObjAnim('random_anim')

	for i in range(objects):
		p = primitive
		if random_prim:
			p = random.choice(primitives)
		lib.load_primitive(p, '{0}{1}'.format(prefix, i))

	cam1 = lib.add_camera('cam1')
	cam1.position(0, 0, -7)
	cam1.direction(15, 0, 1)
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
		setup.add_action('translate', '{0}{1}'.format(prefix, i), rv(), rv(), rvz())

	mess = lib.add_animation('mess')
	mess_i = mess.add_interp(time)
	for i in range(objects):
		if translate:
			mess_i.add_action('translate', '{0}{1}'.format(prefix, i), rv(), rv(), rvz())
		if rotate:
			mess_i.add_action('rotate', '{0}{1}'.format(prefix, i), rv(), rv(), rvz())

		if scale:
			mess_i.add_action('rotate', '{0}{1}'.format(prefix, i), rv(), rv(), rvz())

	lib.add_to_timeline('setup', 0)
	lib.add_to_timeline('mess', 0)
	lib.add_to_timeline('cam2', time * 0.33)
	lib.add_to_timeline('cam3', time * 0.66)
	lib.set_default_camera('cam1')

	lib.generate()
