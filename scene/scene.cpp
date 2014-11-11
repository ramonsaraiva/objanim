#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "scene.h"

//	SceneObject

SceneObject::SceneObject(std::string ident)
{
	_ident = ident;
}

std::string SceneObject::ident()
{
	return _ident;
}

std::vector<tinyobj::shape_t>& SceneObject::shapes()
{
	return _shapes;
}

std::vector<tinyobj::material_t>& SceneObject::materials()
{
	return _materials;
}

//	Scene

void Scene::add_camera(std::string ident, Camera* camera)
{
	_cameras[ident] = camera;
}

void Scene::set_default_camera(std::string ident)
{
	_default_camera = _cameras[ident];
}

void Scene::add_object(std::string ident, SceneObject* object)
{
	_objects[ident] = object;
}


Camera* Scene::default_camera()
{
	return _default_camera;
}

std::map<std::string, SceneObject*>& Scene::objects()
{
	return _objects;
}

void Scene::dump()
{
	//dump cameras and sceneobjects
}
