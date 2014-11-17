/*
* ObjAnim - Code Generator
*/

#include "camera/camera.h"
#include "scene/scene.h"
#include "animation/animation.h"

void setup_scene()
{
SceneObject *object_my_cube = new SceneObject("object_my_cube");
object_my_cube->load_obj("cube.obj");
object_my_cube->build_vbo();
Scene::instance().add_object(object_my_cube->ident(), object_my_cube);

Camera *object_a = new Camera();
object_a->set_depth(100);
object_a->set_direction(0, 0, 1);
object_a->set_position(0, 0, 0);
Scene::instance().add_camera("object_a", object_a);
Camera *object_b = new Camera();
object_b->set_depth(100);
object_b->set_direction(0, 0, 1);
object_b->set_position(0, 0, 0);
Scene::instance().add_camera("object_b", object_b);
Animation *object_slide = new Animation("object_slide");

Interpolation *interpolation_0 = object_slide->add_interp();
interpolation_0->set_time(5);
interpolation_0->add_action(ANIM_TRANSLATE, "object_my_cube", 5, 0, 0);
interpolation_0->add_action(ANIM_ROTATE, "object_my_cube", 45, 45, 0);
interpolation_0->add_action(ANIM_SCALE, "object_my_cube", 5, 5, 5);

Animation *object_slide_back = new Animation("object_slide_back");

Interpolation *interpolation_1 = object_slide_back->add_interp();
interpolation_1->set_time(5);
interpolation_1->add_action(ANIM_TRANSLATE, "object_my_cube", 0, 0, 0);

Timeline::instance().add_animation(object_slide, 4);
Timeline::instance().add_animation(object_slide_back, 9);
Scene::instance().set_default_camera("object_a");

}
