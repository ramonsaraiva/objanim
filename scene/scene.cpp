#include <vector>

#include "scene.h"

void Scene::add_camera(Camera* camera)
{
	_cameras.push_back(camera);
}

void Scene::set_default_camera(Camera* camera)
{
	_default_camera = camera;
}

Camera* Scene::default_camera()
{
	return _default_camera;
}
