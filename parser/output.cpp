/*
* ObjAnim - Code Generator
*/

void setup_scene()
{
SceneObject *object_cubo = new SceneObject("object_cubo");
object_cubo->load_obj("cube.obj");
object_cubo->build_vbo();
Scene::instance().add_object(object_cubo->ident(), object_cubo);

object_cubo->set_global_translate(0, 0, 3);
Camera *object_a = new Camera();
object_a->set_depth(100);
object_a->set_direction(0, 0, 1);
object_a->set_position(0, 0, 0);
Scene::instance().add_camera("object_a", object_a);
Animation *object_trans = new Animation("object_trans");

Interpolation *interpolation_0 = object_trans->add_interp();
interpolation_0->set_time(5);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cubo", 0, 0, 5);

Animation *object_rot = new Animation("object_rot");

Interpolation *interpolation_1 = object_rot->add_interp();
interpolation_1->set_time(5);
interpolation_1->add_action(ANIM_ROTATE, "object_cubo", 45, 45, 45);
interpolation_1->add_action(ANIM_SCALE, "object_cubo", 3, 3, 3);

Animation *object_trans2 = new Animation("object_trans2");

Interpolation *interpolation_2 = object_trans2->add_interp();
interpolation_2->set_time(5);
interpolation_2->add_action(ANIM_TRANSLATE, "object_cubo", 0, 5, 0);

Timeline::instance().add_animation(object_trans, 2);
Timeline::instance().add_animation(object_rot, 7);
Timeline::instance().add_animation(object_trans, 212);
Scene::instance().set_default_camera("a");

}
