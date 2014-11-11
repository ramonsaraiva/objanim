#ifndef ANIMATION_H
#define ANIMATION_H	1

#define ANIM_TRANSLATE	0
#define ANIM_ROTATE		1
#define ANIM_SCALE		2

#define ANIM_CTR_ACTION	0
#define ANIM_CTR_INTERP	1

#include <string>
#include <queue>
#include <map>

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

	public:
		std::queue<action_t>& actions();
		float time();
	
	private:
		std::queue<action_t> _actions;
		float _time;
};

//	 Animation

class Animation
{
	public:
		Animation(std::string ident);
		
		Interpolation* add_interp();
		void add_action(const int type, std::string ident, const float x, const float y, const float z);

	public:
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

		void add_animation(Animation* anim, int order);

	public:
		std::map<int, Animation*>& animations();

	private:
		Timeline() {}
		Timeline(Timeline const&);
		void operator=(Timeline const&);

		std::map<int, Animation*> _animations;
};

#endif
