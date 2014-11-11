#include <string>
#include <vector>

#include "animation.h"

Animation::Animation(std::string ident)
{
	_ident = ident;
}

void Animation::add_action(const int type, std::string ident, const float x, const float y, const float z)
{
	action_t action;

	action.type = type;
	action.ident = ident;
	action.x = x;
	action.y = y;
	action.z = z;

	_actions.push_back(action);
}
