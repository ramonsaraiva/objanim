/*
* ObjAnim - Code Generator
*/

#include "camera/camera.h"
#include "scene/scene.h"
#include "animation/animation.h"

void setup_scene()
{
SceneObject *object_cube_start = new SceneObject("object_cube_start");
object_cube_start->load_obj("resources/cube.obj");
object_cube_start->build_vbo();
Scene::instance().add_object(object_cube_start->ident(), object_cube_start);

SceneObject *object_cube_fall_1 = new SceneObject("object_cube_fall_1");
object_cube_fall_1->load_obj("resources/cube.obj");
object_cube_fall_1->build_vbo();
Scene::instance().add_object(object_cube_fall_1->ident(), object_cube_fall_1);

SceneObject *object_cube_fall_2 = new SceneObject("object_cube_fall_2");
object_cube_fall_2->load_obj("resources/cube.obj");
object_cube_fall_2->build_vbo();
Scene::instance().add_object(object_cube_fall_2->ident(), object_cube_fall_2);

SceneObject *object_cube_fall_3 = new SceneObject("object_cube_fall_3");
object_cube_fall_3->load_obj("resources/cube.obj");
object_cube_fall_3->build_vbo();
Scene::instance().add_object(object_cube_fall_3->ident(), object_cube_fall_3);

SceneObject *object_cube_fall_4 = new SceneObject("object_cube_fall_4");
object_cube_fall_4->load_obj("resources/cube.obj");
object_cube_fall_4->build_vbo();
Scene::instance().add_object(object_cube_fall_4->ident(), object_cube_fall_4);

SceneObject *object_cube_fall_5 = new SceneObject("object_cube_fall_5");
object_cube_fall_5->load_obj("resources/cube.obj");
object_cube_fall_5->build_vbo();
Scene::instance().add_object(object_cube_fall_5->ident(), object_cube_fall_5);

SceneObject *object_cube_fall_6 = new SceneObject("object_cube_fall_6");
object_cube_fall_6->load_obj("resources/cube.obj");
object_cube_fall_6->build_vbo();
Scene::instance().add_object(object_cube_fall_6->ident(), object_cube_fall_6);

SceneObject *object_cube_fall_7 = new SceneObject("object_cube_fall_7");
object_cube_fall_7->load_obj("resources/cube.obj");
object_cube_fall_7->build_vbo();
Scene::instance().add_object(object_cube_fall_7->ident(), object_cube_fall_7);

SceneObject *object_cube_fall_8 = new SceneObject("object_cube_fall_8");
object_cube_fall_8->load_obj("resources/cube.obj");
object_cube_fall_8->build_vbo();
Scene::instance().add_object(object_cube_fall_8->ident(), object_cube_fall_8);

SceneObject *object_cube_fall_9 = new SceneObject("object_cube_fall_9");
object_cube_fall_9->load_obj("resources/cube.obj");
object_cube_fall_9->build_vbo();
Scene::instance().add_object(object_cube_fall_9->ident(), object_cube_fall_9);

SceneObject *object_cube_fall_10 = new SceneObject("object_cube_fall_10");
object_cube_fall_10->load_obj("resources/cube.obj");
object_cube_fall_10->build_vbo();
Scene::instance().add_object(object_cube_fall_10->ident(), object_cube_fall_10);

SceneObject *object_cube_fall_11 = new SceneObject("object_cube_fall_11");
object_cube_fall_11->load_obj("resources/cube.obj");
object_cube_fall_11->build_vbo();
Scene::instance().add_object(object_cube_fall_11->ident(), object_cube_fall_11);

SceneObject *object_cube_fall_12 = new SceneObject("object_cube_fall_12");
object_cube_fall_12->load_obj("resources/cube.obj");
object_cube_fall_12->build_vbo();
Scene::instance().add_object(object_cube_fall_12->ident(), object_cube_fall_12);

SceneObject *object_cube_fall_13 = new SceneObject("object_cube_fall_13");
object_cube_fall_13->load_obj("resources/cube.obj");
object_cube_fall_13->build_vbo();
Scene::instance().add_object(object_cube_fall_13->ident(), object_cube_fall_13);

SceneObject *object_cube_fall_14 = new SceneObject("object_cube_fall_14");
object_cube_fall_14->load_obj("resources/cube.obj");
object_cube_fall_14->build_vbo();
Scene::instance().add_object(object_cube_fall_14->ident(), object_cube_fall_14);

SceneObject *object_cube_fall_15 = new SceneObject("object_cube_fall_15");
object_cube_fall_15->load_obj("resources/cube.obj");
object_cube_fall_15->build_vbo();
Scene::instance().add_object(object_cube_fall_15->ident(), object_cube_fall_15);

Camera *object_cam = new Camera();
object_cam->set_depth(1000);
object_cam->set_direction(5, 0, 1);
object_cam->set_position(20, 0, -3);
Scene::instance().add_camera("object_cam", object_cam);
Camera *object_cam_test = new Camera();
object_cam_test->set_depth(1000);
object_cam_test->set_direction(-10, 0, 1);
object_cam_test->set_position(-5, 0, -5);
Scene::instance().add_camera("object_cam_test", object_cam_test);
Animation *object_prepare = new Animation("object_prepare");

object_prepare->add_action(ANIM_TRANSLATE, "object_cube_fall_1", 14, 10, 0);

object_prepare->add_action(ANIM_TRANSLATE, "object_cube_fall_2", 13, 14, 0);

object_prepare->add_action(ANIM_TRANSLATE, "object_cube_fall_3", 12, 18, 0);

object_prepare->add_action(ANIM_TRANSLATE, "object_cube_fall_4", 11, 22, 0);

object_prepare->add_action(ANIM_TRANSLATE, "object_cube_fall_5", 10, 26, 0);

object_prepare->add_action(ANIM_TRANSLATE, "object_cube_fall_6", 9, 30, 0);

object_prepare->add_action(ANIM_TRANSLATE, "object_cube_fall_7", 8, 34, 0);

object_prepare->add_action(ANIM_TRANSLATE, "object_cube_fall_8", 7, 38, 0);

object_prepare->add_action(ANIM_TRANSLATE, "object_cube_fall_9", 6, 42, 0);

object_prepare->add_action(ANIM_TRANSLATE, "object_cube_fall_10", 5, 46, 0);

object_prepare->add_action(ANIM_TRANSLATE, "object_cube_fall_11", 4, 50, 0);

object_prepare->add_action(ANIM_TRANSLATE, "object_cube_fall_12", 3, 54, 0);

object_prepare->add_action(ANIM_TRANSLATE, "object_cube_fall_13", 2, 58, 0);

object_prepare->add_action(ANIM_TRANSLATE, "object_cube_fall_14", 1, 62, 0);

object_prepare->add_action(ANIM_TRANSLATE, "object_cube_fall_15", 0, 66, 0);

Animation *object_slide = new Animation("object_slide");

Interpolation *interpolation_0 = object_slide->add_interp();
interpolation_0->set_time(4);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_start", 15, 0, 0);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_start", 1440, 0, 0);

Animation *object_drop_first = new Animation("object_drop_first");

Interpolation *interpolation_1 = object_drop_first->add_interp();
interpolation_1->set_time(4.5);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cube_fall_1", 14, 0, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cube_fall_2", 13, 0, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cube_fall_3", 12, 0, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cube_fall_4", 11, 0, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cube_fall_5", 10, 0, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cube_fall_6", 9, 0, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cube_fall_7", 8, 0, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cube_fall_8", 7, 0, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cube_fall_9", 6, 0, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cube_fall_10", 5, 0, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cube_fall_11", 4, 0, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cube_fall_12", 3, 0, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cube_fall_13", 2, 0, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cube_fall_14", 1, 0, 0);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cube_fall_15", 0, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_cube_fall_1", 1440, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_cube_fall_2", 1440, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_cube_fall_3", 1440, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_cube_fall_4", 1440, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_cube_fall_5", 1440, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_cube_fall_6", 1440, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_cube_fall_7", 1440, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_cube_fall_8", 1440, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_cube_fall_9", 1440, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_cube_fall_10", 1440, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_cube_fall_11", 1440, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_cube_fall_12", 1440, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_cube_fall_13", 1440, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_cube_fall_14", 1440, 0, 0);
interpolation_1->add_action(ANIM_ROTATE, "object_cube_fall_15", 1440, 0, 0);

Timeline::instance().add_animation(object_prepare, 0);
Timeline::instance().add_animation(object_slide, 1);
Timeline::instance().add_animation(object_drop_first, 1);
Timeline::instance().add_camera(object_cam_test, 2.5);
Scene::instance().set_default_camera("object_cam");

}
