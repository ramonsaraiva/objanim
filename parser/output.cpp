/*
* ObjAnim - Code Generator
*/

SceneObject *object_cube = new SceneObject("object_cube");
object_cube->load_obj("cubo.obj");
object_cube->build_vbo();
Scene::instance().add_object(object_cube->ident(), object_cube);

object_cubo->set_global_translate(0, 0, 3);
Camera *object_a = new Camera();
Scene::instance().add_camera("object_a", object_a);
object_cubo->set_global_translate(0, 0, 3);
Animation *object_trans = new Animation("object_trans");

Interpolation *interpolation_0 = object_trans->add_interp();
interpolation_0->setTime(5);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cubo", 0, 0, 5);

Animation *object_rot = new Animation("object_rot");

Interpolation *interpolation_1 = object_rot->add_interp();
interpolation_1->setTime(5);
interpolation_1->add_action(ANIM_ROTATE, "object_cubo", 45, 45, 45);
interpolation_1->add_action(ANIM_SCALE, "object_cubo", 3, 3, 3);

Animation *object_trans2 = new Animation("object_trans2");

Interpolation *interpolation_2 = object_trans2->add_interp();
interpolation_2->setTime(5);
interpolation_2->add_action(ANIM_TRANSLATE, "object_cubo", 0, 5, 0);

Timeline::instance().add_animation(trans, 2);
Timeline::instance().add_animation(rot, 7);
Timeline::instance().add_animation(trans, 212);
Scene::instance().set_default_camera("a");
