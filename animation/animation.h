#ifndef ANIMATION_H
#define ANIMATION_H	1

#define ANIM_TRANSLATE	0
#define ANIM_ROTATE		1
#define ANIM_SCALE		2

#define ANIM_CTR_ACTION	0
#define ANIM_CTR_INTERP	1

#include <string>
#include <vector>
#include <queue>
#include <map>

#include "camera/camera.h"

typedef struct action_s
{
	std::string obj;
	int type;
	float x;
	float y;
	float z;
} action_t;

//	 Interpolation

class Interpolation
{
	public:
		Interpolation();
		void add_action(const int type, std::string ident, const float x, const float y, const float z);
		void set_time(float time);
		void interpolate();

	public:
		std::vector<action_t>& actions();
		float time();
	
	private:
		std::vector<action_t> _actions;
		float _time;
};

//	 Animation

class Animation
{
	public:
		Animation(std::string ident);
		
		Interpolation* add_interp();
		void add_action(const int type, std::string ident, const float x, const float y, const float z);
		void animate();
		static void animate_thread(void* args);

	public:
		std::string ident();
		void dump();

	private:
		std::string _ident;
		std::queue<Interpolation> _interps;
		std::queue<action_t> _actions;
		std::queue<int> _controller;

};

//	Timeline

class Timeline
{
	public:
		static Timeline& instance()
		{
			static Timeline instance;
			return instance;
		}

		void add_animation(Animation* anim, float start);
		void add_camera(Camera* cam, float start);
		void start();
		void update();

	public:
		std::map<float, std::vector<Animation*>>& animations();

	private:
		Timeline() {}
		Timeline(Timeline const&);
		void operator=(Timeline const&);

		std::map<float, std::vector<Animation*>> _animations;
		std::map<float, Camera*> _cameras;

		std::vector<float> _times;
		int _started;
		int _start_tick;
};

#endif
