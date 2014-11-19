#usr/bin/python

import random

cubes = 100;

t_val = 10;

x_min = -t_val;
x_max = t_val;
y_min = -t_val;
y_max = t_val;
z_min = 0;
z_max = t_val / 2;

time = 10;

rotate = True

r_val = 1000;

rx_min = -r_val;
rx_max = r_val;
ry_min = -r_val;
ry_max = r_val;
rz_min = -r_val;
rz_max = r_val;

scale = False

s_val = 3;

sx_min = -s_val;
sx_max = s_val;
sy_min = -s_val;
sy_max = s_val;
sz_min = -s_val;
sz_max = s_val;

f = open('parser/random_anim', 'w')

# load cubes
for i in range(cubes):
	f.write('load_primitive cube cube_{0};\n'.format(i))
f.write('\n');

# camera
f.write('camera cam { position: 0 0 -5; direction: 0 0 1; depth: 1000; }\n');

# setup
f.write('animation setup {\n');

for i in range(cubes):
	f.write('\ttranslate cube_{0} {1} {2} {3};\n'.format(i,
													 random.uniform(x_min, x_max),
													 random.uniform(y_min, y_max),
													 random.uniform(z_min, z_max)));

f.write('}\n');
# end setup

# mess
f.write('animation mess {\n');
f.write('\tinterpolate {0} {1}\n'.format(time, '{'));

for i in range(cubes):
	f.write('\t\ttranslate cube_{0} {1} {2} {3};\n'.format(i, 
														   random.uniform(x_min, x_max),
														   random.uniform(y_min, y_max),
														   random.uniform(z_min, z_max)));
	if rotate:
		f.write('\t\trotate cube_{0} {1} {2} {3};\n'.format(i,
														    random.uniform(rx_min, rx_max),
														    random.uniform(ry_min, ry_max),
														    random.uniform(rz_min, rz_max)));
	if scale:
		f.write('\t\tscale cube_{0} {1} {2} {3};\n'.format(i,
														    random.uniform(sx_min, sx_max),
														    random.uniform(sy_min, sy_max),
														    random.uniform(sz_min, sz_max)));

f.write('\t}\n}\n');
# end mess

f.write('add_to_timeline setup 0;\n');
f.write('add_to_timeline mess 0;\n');
f.write('set_default_camera cam;\n');

f.close();
