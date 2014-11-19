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

SceneObject *object_wall2 = new SceneObject("object_wall2");
object_wall2->load_obj("primitives/wall/cube.obj");
object_wall2->build_vbo();
Scene::instance().add_object(object_wall2->ident(), object_wall2);

SceneObject *object_wall3 = new SceneObject("object_wall3");
object_wall3->load_obj("primitives/wall/cube.obj");
object_wall3->build_vbo();
Scene::instance().add_object(object_wall3->ident(), object_wall3);

SceneObject *object_floor = new SceneObject("object_floor");
object_floor->load_obj("primitives/floor/cube.obj");
object_floor->build_vbo();
Scene::instance().add_object(object_floor->ident(), object_floor);

SceneObject *object_floor2 = new SceneObject("object_floor2");
object_floor2->load_obj("primitives/floor/cube.obj");
object_floor2->build_vbo();
Scene::instance().add_object(object_floor2->ident(), object_floor2);

SceneObject *object_floor3 = new SceneObject("object_floor3");
object_floor3->load_obj("primitives/floor/cube.obj");
object_floor3->build_vbo();
Scene::instance().add_object(object_floor3->ident(), object_floor3);

SceneObject *object_box = new SceneObject("object_box");
object_box->load_obj("primitives/cube/cube.obj");
object_box->build_vbo();
Scene::instance().add_object(object_box->ident(), object_box);

Camera *object_front = new Camera();
object_front->set_depth(1000);
object_front->set_direction(0, 0, 1);
object_front->set_position(0, 0, -2);
Scene::instance().add_camera("object_front", object_front);
Camera *object_side = new Camera();
object_side->set_depth(1000);
object_side->set_direction(-3, 0, 1);
object_side->set_position(5, 0, -2);
Scene::instance().add_camera("object_side", object_side);
Camera *object_side2 = new Camera();
object_side2->set_depth(1000);
object_side2->set_direction(3, 0, 1);
object_side2->set_position(-5, 0, -2);
Scene::instance().add_camera("object_side2", object_side2);
Animation *object_setup = new Animation("object_setup");

object_setup->add_action(ANIM_TRANSLATE, "object_wall", 0, 1.6, 7.2);

object_setup->add_action(ANIM_TRANSLATE, "object_wall2", -12, 1.6, 7.2);

object_setup->add_action(ANIM_TRANSLATE, "object_wall3", -24, 1.6, 7.2);

object_setup->add_action(ANIM_SCALE, "object_wall", 12, 8, 0.2);

object_setup->add_action(ANIM_SCALE, "object_wall2", 12, 8, 0.2);

object_setup->add_action(ANIM_SCALE, "object_wall3", 12, 8, 0.2);

object_setup->add_action(ANIM_TRANSLATE, "object_floor", 0, -2, 2);

object_setup->add_action(ANIM_TRANSLATE, "object_floor2", -12, -2, 2);

object_setup->add_action(ANIM_TRANSLATE, "object_floor3", -24, -2, 2);

object_setup->add_action(ANIM_SCALE, "object_floor", 12, 0.2, 10);

object_setup->add_action(ANIM_SCALE, "object_floor2", 12, 0.2, 10);

object_setup->add_action(ANIM_SCALE, "object_floor3", 12, 0.2, 10);

object_setup->add_action(ANIM_TRANSLATE, "object_box", 0, 0, 2);

Animation *object_dancing_box = new Animation("object_dancing_box");

Interpolation *interpolation_0 = object_dancing_box->add_interp();
interpolation_0->set_time(10);
interpolation_0->add_action(ANIM_ROTATE, "object_box", 0, 1000, 1000);

Interpolation *interpolation_1 = object_dancing_box->add_interp();
interpolation_1->set_time(10);
interpolation_1->add_action(ANIM_ROTATE, "object_box", 0, -1000, -1000);

Animation *object_moving_floor = new Animation("object_moving_floor");

Interpolation *interpolation_2 = object_moving_floor->add_interp();
interpolation_2->set_time(20);
interpolation_2->add_action(ANIM_TRANSLATE, "object_floor", 12, -2, 2);
interpolation_2->add_action(ANIM_TRANSLATE, "object_floor2", 0, -2, 2);
interpolation_2->add_action(ANIM_TRANSLATE, "object_floor3", -12, -2, 2);

Animation *object_moving_wall = new Animation("object_moving_wall");

Interpolation *interpolation_3 = object_moving_wall->add_interp();
interpolation_3->set_time(20);
interpolation_3->add_action(ANIM_TRANSLATE, "object_wall", 12, 1.6, 7.2);
interpolation_3->add_action(ANIM_TRANSLATE, "object_wall2", 0, 1.6, 7.2);
interpolation_3->add_action(ANIM_TRANSLATE, "object_wall3", -12, 1.6, 7.2);

Timeline::instance().add_animation(object_setup, 0);
Timeline::instance().add_animation(object_dancing_box, 2);
Timeline::instance().add_animation(object_moving_floor, 2);
Timeline::instance().add_animation(object_moving_wall, 2);
Timeline::instance().add_camera(object_side, 8);
Timeline::instance().add_camera(object_side2, 14);
Timeline::instance().add_camera(object_front, 20);
Scene::instance().set_default_camera("object_front");

}
