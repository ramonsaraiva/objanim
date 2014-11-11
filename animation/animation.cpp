#include <vector>

#include "animation.h"

Animation::Animation()
{
}

Animation::add_action(const int type, const float x, const float y, const float z)
{
	action_t action;

	action.type = type;
	action.x = x;
	action.y = y;
	aciton.z = z;

	_actions.push_back(action);
}
