#include <iostream>

#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <thread>
#include <array>
#include <math.h>

#include <SDL/SDL.h>

#include "animation.h"
#include "scene/scene.h"

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

	_actions.push_back(action);
}

void Interpolation::set_time(float time)
{
	_time = time;
}

void Interpolation::interpolate()
{
	int start = SDL_GetTicks();
	int stop = start + (_time * 1000);
	int now = start;

	float x, y, z;

	std::map<std::string, std::array<float, 3>> s_translates;
	std::map<std::string, std::array<float, 3>> s_rotates;
	std::map<std::string, std::array<float, 3>> s_scales;

	for (int i = 0; i < _actions.size(); i++)
	{
		action_t& action = _actions[i];
		SceneObject* obj = Scene::instance().objects()[action.obj];

		switch (action.type)
		{
			case ANIM_TRANSLATE:
				s_translates[obj->ident()][0] = obj->translate()[0];
				s_translates[obj->ident()][1] = obj->translate()[1];
				s_translates[obj->ident()][2] = obj->translate()[2];
				break;
			case ANIM_ROTATE:
				s_rotates[obj->ident()][0] = fmod(obj->rotate()[0], 360);
				s_rotates[obj->ident()][1] = fmod(obj->rotate()[1], 360);
				s_rotates[obj->ident()][2] = fmod(obj->rotate()[2], 360);
				break;
			case ANIM_SCALE:
				s_scales[obj->ident()][0] = obj->scale()[0];
				s_scales[obj->ident()][1] = obj->scale()[1];
				s_scales[obj->ident()][2] = obj->scale()[2];
		}
	}

	while (now < stop)
	{
		for (int i = 0; i < _actions.size(); i++)
		{
			action_t& action = _actions[i];
			SceneObject* obj = Scene::instance().objects()[action.obj];

			switch (action.type)
			{
				case ANIM_TRANSLATE:
					x = ((action.x - s_translates[obj->ident()][0]) * (now - start)) / (stop - start);
					y = ((action.y - s_translates[obj->ident()][1]) * (now - start)) / (stop - start);
					z = ((action.z - s_translates[obj->ident()][2]) * (now - start)) / (stop - start);


					obj->set_translate(x + s_translates[obj->ident()][0],
									   y + s_translates[obj->ident()][1],
									   z + s_translates[obj->ident()][2]);
					break;
				case ANIM_ROTATE:
					x = ((action.x - s_rotates[obj->ident()][0]) * (now - start)) / (stop - start);
					y = ((action.y - s_rotates[obj->ident()][1]) * (now - start)) / (stop - start);
					z = ((action.z - s_rotates[obj->ident()][2]) * (now - start)) / (stop - start);


					obj->set_rotate(x + s_rotates[obj->ident()][0],
								   y + s_rotates[obj->ident()][1],
								   z + s_rotates[obj->ident()][2]);
					break;
				case ANIM_SCALE:
					x = ((action.x - s_scales[obj->ident()][0]) * (now - start)) / (stop - start);
					y = ((action.y - s_scales[obj->ident()][1]) * (now - start)) / (stop - start);
					z = ((action.z - s_scales[obj->ident()][2]) * (now - start)) / (stop - start);


					obj->set_scale(x + s_scales[obj->ident()][0],
								   y + s_scales[obj->ident()][1],
								   z + s_scales[obj->ident()][2]);
					break;
			}
		}

		now = SDL_GetTicks();
	}
}

std::vector<action_t>& Interpolation::actions()
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

void Animation::animate()
{
	std::queue<int> temp_tasks;
	std::queue<action_t> temp_actions;
	std::queue<Interpolation> temp_interps;
	
	//will need threads?!
	while (!_controller.empty())
	{
		int task = _controller.front();

		if (task == ANIM_CTR_ACTION)
		{
			action_t action = _actions.front();
			SceneObject* obj = Scene::instance().objects()[action.obj];

			switch (action.type)
			{
				case ANIM_TRANSLATE:
					obj->set_translate(action.x, action.y, action.z);
					break;
				case ANIM_ROTATE:
					obj->set_rotate(action.x, action.y, action.z);
					break;
				case ANIM_SCALE:
					obj->set_scale(action.x, action.y, action.z);
					break;
			}

			temp_actions.push(action);
			_actions.pop();
		}
		else
		{
			Interpolation interp = _interps.front();

			interp.interpolate();
			
			temp_interps.push(interp);
			_interps.pop();
		}

		temp_tasks.push(task);
		_controller.pop();
	}

	while (!temp_tasks.empty())
	{
		_controller.push(temp_tasks.front());
		temp_tasks.pop();
	}

	while (!temp_actions.empty())
	{
		_actions.push(temp_actions.front());
		temp_actions.pop();
	}

	while (!temp_interps.empty())
	{
		_interps.push(temp_interps.front());
		temp_interps.pop();
	}
}

void Animation::animate_thread(void* args)
{
	static_cast<Animation*>(args)->animate();
}

std::string Animation::ident()
{
	return _ident;
}

void Animation::dump()
{
	int controller_size;
	int actions_size;

	int controller_task;
	action_t action;
	Interpolation interp;

	controller_size = _controller.size();

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

			continue;
		}

		interp = _interps.front();
		_interps.pop();
		_interps.push(interp);

		actions_size = interp.actions().size();

		for (int j = 0; j < actions_size; j++)
		{
			action = interp.actions()[j];
		}
	}
}

//	Timeline

void Timeline::add_animation(Animation* anim, float start)
{
	_animations[start].push_back(anim);
}

void Timeline::add_camera(Camera* cam, float start)
{
	_cameras[start] = cam;
}

void Timeline::start()
{
	_started = 1;
	_start_tick = SDL_GetTicks();

	typedef std::map<float, std::vector<Animation*>>::iterator it_type_a;
	typedef std::map<float, Camera*>::iterator it_type_c;

	for (it_type_a i = _animations.begin(); i != _animations.end(); i++)
	{
		if (!(std::find(_times.begin(), _times.end(), i->first) != _times.end()))
			_times.push_back(i->first);
	}


	for (it_type_c i = _cameras.begin(); i != _cameras.end(); i++)
	{
		if (!(std::find(_times.begin(), _times.end(), i->first) != _times.end()))
			_times.push_back(i->first);
	}
}

void Timeline::update()
{
	if (!_started)
		return;

	if (!_times.size())
		return;

	int tick = SDL_GetTicks();

	for (int i = 0; i < _times.size(); i++)
	{
		int delta = tick - _start_tick;
		if (delta / 1000 < _times[i])
			continue;

//		check if key is in _animations

		std::map<float, std::vector<Animation*>>::iterator it_a = _animations.find(_times[i]);
		if (it_a != _animations.end())
		{
//			key is an animation

			for (int j = 0; j < _animations[_times[i]].size(); j++)
			{
				Animation* anim = _animations[_times[i]][j];

				std::thread anim_thr(Animation::animate_thread, anim);
				anim_thr.detach();
			}
		}

		std::map<float, Camera*>::iterator it_c = _cameras.find(_times[i]);
		if (it_c != _cameras.end())
		{
//			key is a camera

			Scene::instance().set_default_camera(_cameras[_times[i]]);
		}

		
		_times.erase(_times.begin() + i);
	}
}

std::map<float, std::vector<Animation*>>& Timeline::animations()
{
	return _animations;
}
