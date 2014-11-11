#ifndef SCENE_H
#define SCENE_H	1

#include <vector>

#include "camera/camera.h"

class Scene
{
	public:
		static Scene& instance()
		{
			static Scene instance;
			return instance;
		}

		void add_camera(Camera* camera);
		void set_default_camera(Camera* camera);

	public:
		Camera* default_camera();

	private:
		Scene() {}
		Scene(Scene const&);
		void operator=(Scene const&);
		std::vector<Camera*> _cameras;
		Camera* _default_camera;
};

#endif
