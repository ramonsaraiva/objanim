#include <string.h>
#include <math.h>

#include <GL/glew.h>

#include "camera.h"

Camera::Camera(float angle, int width, int height)
{
	memset(_position, 0, 3 * sizeof(float));
	memset(_direction, 0, 3 * sizeof(float));

	_speed = 0.05;
	_angle = angle;

	refresh_direction();
}

void Camera::set_position(float x, float y, float z)
{
	_position[0] = x;
	_position[1] = y;
	_position[2] = z;
}

void Camera::reset_view(int width, int height)
{
	glViewport(0, 0, width, height);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluPerspective(45.0, width/(double)height, 0.2, 1000.0);

	refresh_lookat();
}

void Camera::set_angle(float angle)
{
	_angle += angle;

	if (_angle > 360)
		_angle -= 360;
	else if(_angle < 0)
		_angle += 360;

	refresh_direction();
	refresh_lookat();
}

void Camera::set_direction_y(float y)
{
	_direction[1] += y;
	refresh_lookat();
}

void Camera::move(int direction)
{
	_position[0] += _speed * direction * cos(_angle * M_PI / 180);
	_position[1] += _speed * direction * _direction[1];
	_position[2] += _speed * direction * sin(_angle * M_PI / 180);

	refresh_direction();
	refresh_lookat();
}

void Camera::strafe(int direction)
{
	float angle = _angle * M_PI / 180 - (M_PI / 2);
	_position[0] += _speed * cos(angle) * direction;
	_position[2] += _speed * sin(angle) * direction;

	refresh_direction();
	refresh_lookat();
}

void Camera::set_speed(float speed)
{
	_speed = speed;
}

void Camera::refresh_lookat(void)
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt(_position[0],
			  _position[1],
			  _position[2],
			  _direction[0],
			  _position[1] + _direction[1],
			  _direction[2],
			  0.0, 1.0, 0.0);
}

void Camera::refresh_direction(void)
{
	_direction[0] = cos(_angle * M_PI / 180) + _position[0];
	_direction[2] = sin(_angle * M_PI / 180) + _position[2];
}
