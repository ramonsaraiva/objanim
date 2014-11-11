#ifndef ANIMATION_H
#define ANIMATION_H	1

#define ANIM_TRANSLATE	0
#define ANIM_ROTATE		1
#define ANIM_SCALE		2

#include <vector>

typedef struct action_s
{

	int type;
	float x;
	float y;
	float z;
} action_t;

class Animation
{
	public:
		Animation();
		
		public add_action(const int type, const float x, const float y, const float z);

	private:
		vector<action_t> _actions;
};

#endif
