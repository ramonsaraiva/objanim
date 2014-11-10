#include <SDL/SDL.h>

#include "input/input.h"

InputController::InputController()
{
}

void InputController::events()
{
	SDL_Event event;

	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
			case SDL_KEYDOWN:
				keyboard_down(event.key);
				break;
			case SDL_KEYUP:
				keyboard_up(event.key);
				break;
			case SDL_MOUSEBUTTONDOWN:
				mouse_down(event.button);
				break;
			case SDL_MOUSEBUTTONUP:
				mouse_up(event.button);
				break;
			case SDL_MOUSEMOTION:
				mousemotion(event.motion);
				break;
		}
	}

	if (_moving_ws > 0)
		//cam_move(controller.direction_ws);
		return;
	if (_moving_da > 0)
		//cam_strafe(controller.direction_da);
		return;
}

void InputController::keyboard_down(SDL_KeyboardEvent event)
{
	switch (event.keysym.sym)
	{
		case SDLK_q:
			exit(0);
			break;
		case SDLK_w:
			_moving_ws = 1;
			_direction_ws = 1;
			break;
		case SDLK_s:
			_moving_ws = 1;
			_direction_ws = -1;
			break;
		case SDLK_d:
			_moving_da = 1;
			_direction_da = -1;
			break;
		case SDLK_a:
			_moving_da = 1;
			_direction_da = 1;
			break;
	}
}

void InputController::keyboard_up(SDL_KeyboardEvent event)
{
	switch (event.keysym.sym)
	{
		case SDLK_w:
		case SDLK_s:
			_moving_ws = 0;
			break;
		case SDLK_d:
		case SDLK_a:
			_moving_da = 0;
			break;
	}
}

void InputController::mouse_down(SDL_MouseButtonEvent event)
{
	switch (event.button)
	{
		case SDL_BUTTON_RIGHT:
			_looking = 1;
			break;

		case SDL_BUTTON_WHEELUP:
			//cam_move(1);
			break;

		case SDL_BUTTON_WHEELDOWN:
			//cam_move(-1);
			break;
	}
}

void InputController::mouse_up(SDL_MouseButtonEvent event)
{
	if (event.button == SDL_BUTTON_RIGHT)
		_looking = 0;
}

void InputController::mousemotion(SDL_MouseMotionEvent event)
{
	if (_looking)
	{
		/*
		cam_set_direction_y(-0.01 * event.yrel);
		cam_change_angle(0.35 * event.xrel);
		*/
	}
}
