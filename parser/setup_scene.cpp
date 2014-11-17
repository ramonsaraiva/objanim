/*
* ObjAnim - Code Generator
*/

#include "camera/camera.h"
#include "scene/scene.h"
#include "animation/animation.h"

void setup_scene()
{
SceneObject *object_cubo = new SceneObject("object_cubo");
object_cubo->load_obj("cube.obj");
object_cubo->build_vbo();
Scene::instance().add_object(object_cubo->ident(), object_cubo);

Camera *object_a = new Camera();
object_a->set_depth(100);
object_a->set_direction(0, 0, 1);
object_a->set_position(0, 0, -5);
Scene::instance().add_camera("object_a", object_a);
Camera *object_b = new Camera();
object_b->set_depth(200);
object_b->set_direction(0, 0.2, 1);
object_b->set_position(0, 0, -20);
Scene::instance().add_camera("object_b", object_b);
Animation *object_trans = new Animation("object_trans");

object_trans->add_action(ANIM_SCALE, "object_cubo", 5, 5, 5);

Interpolation *interpolation_0 = object_trans->add_interp();
interpolation_0->set_time(5);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cubo", 0, 10, 5);
interpolation_0->add_action(ANIM_ROTATE, "object_cubo", 0, 9000, 0);

Animation *object_rot = new Animation("object_rot");

Interpolation *interpolation_1 = object_rot->add_interp();
interpolation_1->set_time(5);
interpolation_1->add_action(ANIM_ROTATE, "object_cubo", 0, 10, 0);
interpolation_1->add_action(ANIM_SCALE, "object_cubo", 3, 3, 3);
interpolation_1->add_action(ANIM_TRANSLATE, "object_cubo", 0, 0, 0);

Timeline::instance().add_animation(object_trans, 2);
Timeline::instance().add_animation(object_rot, 7);
Scene::instance().set_default_camera("object_a");
Timeline::instance().add_camera(object_b, 4);

}
