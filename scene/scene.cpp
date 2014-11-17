#include <string.h>

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include <GL/glew.h>
#include <SOIL/SOIL.h>

#include "tinyobjloader/tiny_obj_loader.h"

#include "scene.h"

//	SceneObject

SceneObject::SceneObject(std::string ident)
{
	_ident = ident;

	memset(_translate, 0, 3 * sizeof(float));
	memset(_rotate, 0, 3 * sizeof(float));

	_scale[0] = _scale[1] = _scale[2] = 1.0f;
	_angle = 0;
}

void SceneObject::set_translate(const float x, const float y, const float z)
{
	_translate[0] = x;
	_translate[1] = y;
	_translate[2] = z;
}

void SceneObject::set_rotate(const float x, const float y, const float z)
{
	_rotate[0] = x;
	_rotate[1] = y;
	_rotate[2] = z;
}

void SceneObject::set_scale(const float x, const float y, const float z)
{
	_scale[0] = x;
	_scale[1] = y;
	_scale[2] = z;
}

void SceneObject::set_angle(const float a)
{
	_angle = a;
}

void SceneObject::load_obj(const char* file)
{
	std::string f = std::string(file);
	unsigned found = f.find_last_of("\\/");

	if (found != std::string::npos)
	{
		f = f.substr(0, found);
		f = f.append("/");
		tinyobj::LoadObj(_shapes, _materials, file, f.c_str());
		_matdir = f;
	}
	else
	{
		tinyobj::LoadObj(_shapes, _materials, file, NULL);
	}
}

void SceneObject::build_vbo()
{
	std::vector<GLfloat> geometry;
	std::vector<GLfloat> normals;
	std::vector<GLuint> indices;


	for (int i = 0; i < _shapes.size(); i++)
	{
		tinyobj::shape_t* shape = &_shapes[i];

		for (int j = 0; j < shape->mesh.positions.size() / 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				geometry.push_back(shape->mesh.positions[3*j+k]);
			}

			if (shape->mesh.normals.size() < 3*j+3)
			{
				for (int k = 0; k < 3; k++)
					geometry.push_back(1.0f);
			}
			else
			{
				for (int k = 0; k < 3; k++)
					geometry.push_back(shape->mesh.normals[3*j+k]);
			}

			if (shape->mesh.texcoords.size() < 2*j+2)
			{
				for (int k = 0; k < 2; k++)
					geometry.push_back(0.0f);
			}
			else
			{
				for (int k = 0; k < 2; k++)
				{
					geometry.push_back(shape->mesh.texcoords[(2*j)+k]);
				}
			}
		}

		for (int i = 0; i < shape->mesh.indices.size(); i++)
			indices.push_back(shape->mesh.indices[i]);
	}

	_idx_size = indices.size();

	glGenBuffersARB(1, &_geo_vboid);
	glBindBufferARB(GL_ARRAY_BUFFER_ARB, _geo_vboid);
	glBufferDataARB(GL_ARRAY_BUFFER_ARB, sizeof(GLfloat) * geometry.size(), &geometry.front(), GL_STATIC_DRAW_ARB);

	glGenBuffersARB(1, &_idx_vboid);
	glBindBufferARB(GL_ARRAY_BUFFER_ARB, _idx_vboid);
	glBufferDataARB(GL_ARRAY_BUFFER_ARB, sizeof(GLfloat) * indices.size(), &indices.front(), GL_STATIC_DRAW_ARB);

	if (_materials.size() > 0)
	{
		std::string f = _matdir + _materials[0].diffuse_texname;
		GLuint tex2d = SOIL_load_OGL_texture(f.c_str(), SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT);
	}
}

void SceneObject::render()
{
	glColor3f(0.0f, 0.5f, 1.0f);

	glBindBufferARB(GL_ARRAY_BUFFER_ARB, _geo_vboid);
	glBindBufferARB(GL_ELEMENT_ARRAY_BUFFER_ARB, _idx_vboid);


	glEnableClientState(GL_TEXTURE_COORD_ARRAY);
	glEnableClientState(GL_NORMAL_ARRAY);
	glEnableClientState(GL_VERTEX_ARRAY);

	glTexCoordPointer(3, GL_FLOAT, sizeof(GLfloat) * 8, (float*)(sizeof(GLfloat) * 5));
	glNormalPointer(GL_FLOAT, sizeof(GLfloat) * 8, (float*)(sizeof(GLfloat) * 3));
	glVertexPointer(3, GL_FLOAT, sizeof(GLfloat) * 8, 0);

	glPushMatrix();

	glTranslatef(_translate[0], _translate[1], _translate[2]);
	glRotatef(_rotate[0], 1, 0, 0);
	glRotatef(_rotate[1], 0, 1, 0);
	glRotatef(_rotate[2], 0, 0, 1);
	glScalef(_scale[0], _scale[1], _scale[2]);

	glDrawElements(GL_TRIANGLES, _idx_size, GL_UNSIGNED_INT, 0);

	glPopMatrix();

	glDisableClientState(GL_NORMAL_ARRAY);
	glDisableClientState(GL_VERTEX_ARRAY);

	glBindBufferARB(GL_ARRAY_BUFFER_ARB, 0);
	glBindBufferARB(GL_ELEMENT_ARRAY_BUFFER_ARB, 0);
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

float* SceneObject::translate()
{
	return _translate;
}

float* SceneObject::rotate()
{
	return _rotate;
}

float* SceneObject::scale()
{
	return _scale;
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

void Scene::set_default_camera(Camera* cam)
{
	_default_camera = cam;
}

void Scene::add_object(std::string ident, SceneObject* object)
{
	_objects[ident] = object;
}


void Scene::render()
{
	typedef std::map<std::string, SceneObject*>::iterator it_type;
	for (it_type i = _objects.begin(); i != _objects.end(); i++)
	{
		i->second->render();
	}
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
