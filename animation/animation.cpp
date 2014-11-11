#include <iostream>

#include <string>
#include <vector>

#include "animation.h"

//	Interpolation

Interpolation::Interpolation()
{
}

void Interpolation::add_action(const int type, std::string obj, const float x, const float y, const float z)
{
	action_t action;

	action.type = type;
	action.obj = obj;
	action.x = x;
	action.y = y;
	action.z = z;

	_actions.push(action);
}

void Interpolation::set_time(float time)
{
	_time = time;
}

std::queue<action_t>& Interpolation::actions()
{
	return _actions;
}

float Interpolation::time()
{
	return _time;
}

//	Animation

Animation::Animation(std::string ident)
{
	_ident = ident;
}

Interpolation* Animation::add_interp()
{
	Interpolation interp = Interpolation();

	_interps.push(interp);
	_controller.push(ANIM_CTR_INTERP);

	return &_interps.back();
}

void Animation::add_action(const int type, std::string obj, const float x, const float y, const float z)
{
	action_t action;

	action.type = type;
	action.obj = obj;
	action.x = x;
	action.y = y;
	action.z = z;

	_actions.push(action);
	_controller.push(ANIM_CTR_ACTION);
}

void Animation::dump()
{
	int controller_size;
	int actions_size;

	int controller_task;
	action_t action;
	Interpolation interp;

	controller_size = _controller.size();
	std::cout << std::endl << "Dumping ANIMATION '" << _ident << "'" << std::endl << std::endl;
	std::cout << "Controller size: " << controller_size << std::endl;

	for (int i = 0; i < controller_size; i++)
	{
		controller_task = _controller.front();
		_controller.pop();
		_controller.push(controller_task);

		if (controller_task == ANIM_CTR_ACTION)
		{
			action = _actions.front();
			_actions.pop();
			_actions.push(action);
			std::cout << "Action => " << action.type << " (SceneObject: " << action.obj << ") (Values: " << action.x << ", " << action.y << ", " << action.z << ")" << std::endl;

			continue;
		}

		interp = _interps.front();
		_interps.pop();
		_interps.push(interp);

		actions_size = interp.actions().size();
		std::cout << "Interpolation => (Actions: " << actions_size << ") (Time: " << interp.time() << ")" << std::endl;

		for (int j = 0; j < actions_size; j++)
		{
			action = interp.actions().front();
			interp.actions().pop();
			interp.actions().push(action);
			std::cout << "..... Action => " << action.type << " (SceneObject: " << action.obj << ") (Values: " << action.x << ", " << action.y << ", " << action.z << ")" << std::endl;
		}
	}
}
