/*
* ObjAnim - Code Generator
*/

#include "camera/camera.h"
#include "scene/scene.h"
#include "animation/animation.h"

void setup_scene()
{
SceneObject *object_o_left = new SceneObject("object_o_left");
object_o_left->load_obj("primitives/cube/cube.obj");
object_o_left->build_vbo();
Scene::instance().add_object(object_o_left->ident(), object_o_left);

SceneObject *object_o_right = new SceneObject("object_o_right");
object_o_right->load_obj("primitives/cube/cube.obj");
object_o_right->build_vbo();
Scene::instance().add_object(object_o_right->ident(), object_o_right);

SceneObject *object_o_top = new SceneObject("object_o_top");
object_o_top->load_obj("primitives/cube/cube.obj");
object_o_top->build_vbo();
Scene::instance().add_object(object_o_top->ident(), object_o_top);

SceneObject *object_o_bottom = new SceneObject("object_o_bottom");
object_o_bottom->load_obj("primitives/cube/cube.obj");
object_o_bottom->build_vbo();
Scene::instance().add_object(object_o_bottom->ident(), object_o_bottom);

SceneObject *object_b_left = new SceneObject("object_b_left");
object_b_left->load_obj("primitives/cube/cube.obj");
object_b_left->build_vbo();
Scene::instance().add_object(object_b_left->ident(), object_b_left);

SceneObject *object_b_top = new SceneObject("object_b_top");
object_b_top->load_obj("primitives/cube/cube.obj");
object_b_top->build_vbo();
Scene::instance().add_object(object_b_top->ident(), object_b_top);

SceneObject *object_b_middle = new SceneObject("object_b_middle");
object_b_middle->load_obj("primitives/cube/cube.obj");
object_b_middle->build_vbo();
Scene::instance().add_object(object_b_middle->ident(), object_b_middle);

SceneObject *object_b_bottom = new SceneObject("object_b_bottom");
object_b_bottom->load_obj("primitives/cube/cube.obj");
object_b_bottom->build_vbo();
Scene::instance().add_object(object_b_bottom->ident(), object_b_bottom);

SceneObject *object_b_right_top = new SceneObject("object_b_right_top");
object_b_right_top->load_obj("primitives/cube/cube.obj");
object_b_right_top->build_vbo();
Scene::instance().add_object(object_b_right_top->ident(), object_b_right_top);

SceneObject *object_b_right_bottom = new SceneObject("object_b_right_bottom");
object_b_right_bottom->load_obj("primitives/cube/cube.obj");
object_b_right_bottom->build_vbo();
Scene::instance().add_object(object_b_right_bottom->ident(), object_b_right_bottom);

Camera *object_cam = new Camera();
object_cam->set_depth(1000);
object_cam->set_direction(-1, 0, 1);
object_cam->set_position(3, 0, -10);
Scene::instance().add_camera("object_cam", object_cam);
Animation *object_prepare_o = new Animation("object_prepare_o");

object_prepare_o->add_action(ANIM_SCALE, "object_o_left", 0.5, 4, 0.5);

object_prepare_o->add_action(ANIM_SCALE, "object_o_right", 0.5, 4, 0.5);

object_prepare_o->add_action(ANIM_SCALE, "object_o_top", 2, 0.5, 0.5);

object_prepare_o->add_action(ANIM_SCALE, "object_o_bottom", 2, 0.5, 0.5);

object_prepare_o->add_action(ANIM_TRANSLATE, "object_o_left", 3, 10, 0);

object_prepare_o->add_action(ANIM_TRANSLATE, "object_o_right", 1, 18, 0);

object_prepare_o->add_action(ANIM_TRANSLATE, "object_o_top", 18, 4, 0);

object_prepare_o->add_action(ANIM_TRANSLATE, "object_o_bottom", 10, -0.1, 0);

Animation *object_prepare_b = new Animation("object_prepare_b");

object_prepare_b->add_action(ANIM_SCALE, "object_b_left", 0.5, 4, 0.5);

object_prepare_b->add_action(ANIM_SCALE, "object_b_top", 2, 0.5, 0.5);

object_prepare_b->add_action(ANIM_SCALE, "object_b_middle", 1.5, 0.5, 0.5);

object_prepare_b->add_action(ANIM_SCALE, "object_b_bottom", 2, 0.5, 0.5);

object_prepare_b->add_action(ANIM_SCALE, "object_b_right_top", 0.4, 1.6, 1.0);

object_prepare_b->add_action(ANIM_SCALE, "object_b_right_bottom", 0.4, 1.6, 1.0);

object_prepare_b->add_action(ANIM_TRANSLATE, "object_b_left", 0, 2, -11);

object_prepare_b->add_action(ANIM_TRANSLATE, "object_b_top", -1, 4, 20);

object_prepare_b->add_action(ANIM_TRANSLATE, "object_b_middle", -0.5, 2, 20);

object_prepare_b->add_action(ANIM_TRANSLATE, "object_b_bottom", -1, -0.1, 20);

object_prepare_b->add_action(ANIM_TRANSLATE, "object_b_right_top", -1.9, 3, -11);

object_prepare_b->add_action(ANIM_TRANSLATE, "object_b_right_bottom", -1.9, 1.1, -11);

Animation *object_build_o = new Animation("object_build_o");

Interpolation *interpolation_0 = object_build_o->add_interp();
interpolation_0->set_time(2);
interpolation_0->add_action(ANIM_TRANSLATE, "object_o_left", 3, 2, 0);
interpolation_0->add_action(ANIM_TRANSLATE, "object_o_right", 1, 2, 0);
interpolation_0->add_action(ANIM_TRANSLATE, "object_o_top", 2, 4, 0);
interpolation_0->add_action(ANIM_TRANSLATE, "object_o_bottom", 2, -0.1, 0);

Animation *object_build_b = new Animation("object_build_b");

Interpolation *interpolation_1 = object_build_b->add_interp();
interpolation_1->set_time(3);
interpolation_1->add_action(ANIM_TRANSLATE, "object_b_left", 0, 2, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_b_top", -1, 4, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_b_middle", -1, 2, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_b_bottom", -1, -0.1, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_b_right_top", -1.9, 3, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_b_right_bottom", -1.9, 0.9, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_b_left", 1800, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_b_top", 0, 1800, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_b_middle", 0, 1800, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_b_bottom", 0, 1800, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_b_right_top", 1800, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_b_right_bottom", -1800, 0, 0);

Timeline::instance().add_animation(object_prepare_o, 0);
Timeline::instance().add_animation(object_prepare_b, 0);
Timeline::instance().add_animation(object_build_o, 1);
Timeline::instance().add_animation(object_build_b, 3);
Scene::instance().set_default_camera("object_cam");

}
