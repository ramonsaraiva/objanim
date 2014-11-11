#ifndef SCENE_H
#define SCENE_H	1

#include <string>
#include <vector>
#include <map>

#include "tinyobjloader/tiny_obj_loader.h"

#include "camera/camera.h"

//	SceneObject

class SceneObject
{
	public:
		SceneObject(std::string ident);
		std::string ident();
		std::vector<tinyobj::shape_t>& shapes();
		std::vector<tinyobj::material_t>& materials();
	
	private:
		std::string _ident;
		std::vector<tinyobj::shape_t> _shapes;
		std::vector<tinyobj::material_t> _materials;
};

//	Scene

class Scene
{
	public:
		static Scene& instance()
		{
			static Scene instance;
			return instance;
		}

		void add_camera(std::string ident, Camera* camera);
		void set_default_camera(Camera* camera);

		void add_object(std::string ident, SceneObject* object);

	public:
		Camera* default_camera();
		std::map<std::string, SceneObject*>& objects();

		void dump();

	private:
		Scene() {}
		Scene(Scene const&);
		void operator=(Scene const&);

		std::map<std::string, Camera*> _cameras;
		Camera* _default_camera;

		std::map<std::string, SceneObject*> _objects;
};

#endif
