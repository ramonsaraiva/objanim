#ifndef CAMERA_H
#define CAMERA_H	1

class Camera
{
	public:
		Camera(float angle, int width, int height);

		void set_position(float x, float y, float z);
		void set_angle(float angle);
		void set_direction_y(float y);
		void move(int direction);
		void strafe(int direction);
		void set_speed(float speed);
		void reset_view(int width, int height);
		void refresh_lookat(void);

	private:
		float _angle;
		float _speed;
		float _position[3];
		float _direction[3];

		void refresh_direction();
};

#endif
