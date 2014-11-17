/*
* ObjAnim - Code Generator
*/

#include "camera/camera.h"
#include "scene/scene.h"
#include "animation/animation.h"

void setup_scene()
{
SceneObject *object_head = new SceneObject("object_head");
object_head->load_obj("resources/head.OBJ");
object_head->build_vbo();
Scene::instance().add_object(object_head->ident(), object_head);

Camera *object_cam = new Camera();
object_cam->set_depth(100);
object_cam->set_direction(0, 0, 1);
object_cam->set_position(0, 0, -5);
Scene::instance().add_camera("object_cam", object_cam);
Animation *object_resize = new Animation("object_resize");

object_resize->add_action(ANIM_SCALE, "object_head", 10, 10, 10);

Timeline::instance().add_animation(object_resize, 1);
Scene::instance().set_default_camera("object_cam");

}
