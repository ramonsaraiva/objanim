#include <iostream>

#include <SDL/SDL.h>
#include <GL/glew.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include "tinyobjloader/tiny_obj_loader.h"

#include "camera/camera.h"
#include "scene/scene.h"
#include "animation/animation.h"
#include "input/input.h"

#define WIDTH 900
#define HEIGHT 700

using namespace std;

InputController input_ctr;

Camera* main_camera;
Camera* other_camera;

Animation* trans;
Animation* rot;

void* setup_sdl();
void setup_gl();
void render();

int main(int argc, char** argv)
{
	setup_sdl();
	glewInit();
	setup_gl();
	glutInit(&argc, argv);

	// load obj/primitive
	SceneObject obj = SceneObject("obj");
	tinyobj::LoadObj(obj.shapes(), obj.materials(), "tinyobjloader/cube.obj", NULL);

	Scene::instance().add_object(obj.ident(), &obj);

	// camera

	main_camera = new Camera(90, WIDTH, HEIGHT);
	Scene::instance().add_camera("main", main_camera);

	other_camera = new Camera(90, WIDTH, HEIGHT);
	Scene::instance().add_camera("other", other_camera);

	Scene::instance().set_default_camera("main");
	Scene::instance().default_camera()->reset_view(WIDTH, HEIGHT);

	// animation

	trans = new Animation("trans");
	rot = new Animation("rot");

	Interpolation* interp = trans->add_interp();
	interp->add_action(ANIM_TRANSLATE, "obj", 0, 0, 5);
	interp->add_action(ANIM_SCALE, "obj", 2, 2, 2);
	interp->set_time(5);
	trans->add_action(ANIM_ROTATE, "obj", 90, 90, 90);

	trans->dump();

	rot->add_action(ANIM_ROTATE, "obj", 45, 45, 45);
	rot->add_action(ANIM_SCALE, "obj", 3, 3, 3);

	rot->dump();

	//TODO: TIMELINE STUFF

	input_ctr = InputController();
	while (1)
	{
		input_ctr.events();
		render();
	}

	return 0;
}

void setup_gl()
{
	/*
	   glCullFace(GL_BACK);
	   glFrontFace(GL_CCW);
	   glEnable(GL_CULL_FACE);
	*/

	glClearColor(0.95, 0.95, 0.95, 0);
	glClearDepth(1.0);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	//glEnable(GL_TEXTURE_2D);
	glEnable(GL_COLOR_MATERIAL);

	glDepthFunc(GL_LESS);
	glEnable(GL_DEPTH_TEST);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glViewport(0, 0, WIDTH, HEIGHT);

	GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
	GLfloat light_specular[] = {1.0, 1.0, 1.0,1.0};
	GLfloat light_diffuse[] = {1.0, 1.0, 1.0,1.0};

	glShadeModel(GL_SMOOTH);

	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluPerspective(60.0, WIDTH / HEIGHT, 1.0, 1024.0);
}

void* setup_sdl()
{
	const SDL_VideoInfo* vinfo = NULL;
	SDL_Surface* screen;

	int bpp = 0;
	int flags = 0;

	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
		exit(1);

	vinfo = SDL_GetVideoInfo();

	if (!vinfo)
		exit(1);

	SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 5);
	SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 5);
	SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 5);
	SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 16);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

	bpp = vinfo->vfmt->BitsPerPixel;
	flags = SDL_OPENGL;

	if ((screen = SDL_SetVideoMode(WIDTH, HEIGHT, bpp, flags)) == 0)
		exit(1);

	SDL_WM_SetCaption("ObjAnim", NULL);

	return screen;
}

void render()
{
	glClearDepth(1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	Scene::instance().default_camera()->refresh_lookat();

	// draw test
	int max = 10;
	for (int i = -max; i < max; i++)
	{
		for (int j = -max; j < max; j++)
		{
			for (int k = -max; k < max; k++)
			{
				glPushMatrix();
					glTranslatef(i, j, k);
					glutSolidCube(0.2f);
				glPopMatrix();
			}
		}
	}

	SDL_GL_SwapBuffers( );
}
