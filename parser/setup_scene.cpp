/*
* ObjAnim - Code Generator
*/

#include "camera/camera.h"
#include "scene/scene.h"
#include "animation/animation.h"

void setup_scene()
{
SceneObject *object_wall = new SceneObject("object_wall");
object_wall->load_obj("primitives/wall/cube.obj");
object_wall->build_vbo();
Scene::instance().add_object(object_wall->ident(), object_wall);

SceneObject *object_floor = new SceneObject("object_floor");
object_floor->load_obj("primitives/floor/cube.obj");
object_floor->build_vbo();
Scene::instance().add_object(object_floor->ident(), object_floor);

SceneObject *object_box = new SceneObject("object_box");
object_box->load_obj("primitives/cube/cube.obj");
object_box->build_vbo();
Scene::instance().add_object(object_box->ident(), object_box);

Camera *object_cam1 = new Camera();
object_cam1->set_depth(1000);
object_cam1->set_direction(0, 0, 1);
object_cam1->set_position(0, 0, -2);
Scene::instance().add_camera("object_cam1", object_cam1);
Animation *object_setup = new Animation("object_setup");

object_setup->add_action(ANIM_TRANSLATE, "object_wall", 0, 1.6, 7.2);

object_setup->add_action(ANIM_SCALE, "object_wall", 12, 8, 0.2);

object_setup->add_action(ANIM_TRANSLATE, "object_floor", 0, -2, 2);

object_setup->add_action(ANIM_SCALE, "object_floor", 12, 0.2, 10);

object_setup->add_action(ANIM_TRANSLATE, "object_box", 0, 0, 2);

Animation *object_dancing_box = new Animation("object_dancing_box");

Interpolation *interpolation_0 = object_dancing_box->add_interp();
interpolation_0->set_time(10);
interpolation_0->add_action(ANIM_ROTATE, "object_box", 0, 1000, 1000);

Interpolation *interpolation_1 = object_dancing_box->add_interp();
interpolation_1->set_time(10);
interpolation_1->add_action(ANIM_ROTATE, "object_box", 0, -1000, -1000);

Timeline::instance().add_animation(object_setup, 0);
Timeline::instance().add_animation(object_dancing_box, 2);
Scene::instance().set_default_camera("object_cam1");

}
