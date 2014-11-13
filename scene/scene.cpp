#include <string.h>

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include <GL/glew.h>

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
	tinyobj::LoadObj(_shapes, _materials, file, NULL);
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

			if (shape->mesh.normals.size() < 3*j+2)
			{
				for (int k = 0; k < 3; k++)
				{
					geometry.push_back(1.0f);
				}

				continue;
			}

			for (int k = 0; k < 3; k++)
			{
				geometry.push_back(shape->mesh.normals[3*j+k]);
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
}

void SceneObject::render()
{
	glColor3f(0.0f, 0.5f, 1.0f);

	glBindBufferARB(GL_ARRAY_BUFFER_ARB, _geo_vboid);
	glBindBufferARB(GL_ELEMENT_ARRAY_BUFFER_ARB, _idx_vboid);

	glEnableClientState(GL_NORMAL_ARRAY);
	glEnableClientState(GL_VERTEX_ARRAY);

	glNormalPointer(GL_FLOAT, sizeof(GLfloat) * 6, (float*)(sizeof(GLfloat) * 3));
	glVertexPointer(3, GL_FLOAT, sizeof(GLfloat) * 6, 0);

	glPushMatrix();

	glTranslatef(_translate[0], _translate[1], _translate[2]);
	glRotatef(_angle, _rotate[0], _rotate[1], _rotate[2]);
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
