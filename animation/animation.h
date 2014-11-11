#ifndef ANIMATION_H
#define ANIMATION_H	1

#define ANIM_TRANSLATE	0
#define ANIM_ROTATE		1
#define ANIM_SCALE		2

#include <string>
#include <vector>

typedef struct action_s
{
	std::string ident;
	int type;
	float x;
	float y;
	float z;
} action_t;

class Animation
{
	public:
		Animation(std::string ident);
		
		void add_action(const int type, std::string ident, const float x, const float y, const float z);

	private:
		std::string _ident;
		std::vector<action_t> _actions;
};

#endif
