/*
* ObjAnim - Code Generator
*/

#include "camera/camera.h"
#include "scene/scene.h"
#include "animation/animation.h"
#include "setup_scene.h"

void setup_scene()
{
SceneObject *object_obj0 = new SceneObject("object_obj0");
object_obj0->load_obj("primitives/monkey/monkey.obj");
object_obj0->build_vbo();
Scene::instance().add_object(object_obj0->ident(), object_obj0);

SceneObject *object_obj1 = new SceneObject("object_obj1");
object_obj1->load_obj("primitives/monkey/monkey.obj");
object_obj1->build_vbo();
Scene::instance().add_object(object_obj1->ident(), object_obj1);

SceneObject *object_obj2 = new SceneObject("object_obj2");
object_obj2->load_obj("primitives/monkey/monkey.obj");
object_obj2->build_vbo();
Scene::instance().add_object(object_obj2->ident(), object_obj2);

SceneObject *object_obj3 = new SceneObject("object_obj3");
object_obj3->load_obj("primitives/sphere/sphere.obj");
object_obj3->build_vbo();
Scene::instance().add_object(object_obj3->ident(), object_obj3);

SceneObject *object_obj4 = new SceneObject("object_obj4");
object_obj4->load_obj("primitives/monkey/monkey.obj");
object_obj4->build_vbo();
Scene::instance().add_object(object_obj4->ident(), object_obj4);

SceneObject *object_obj5 = new SceneObject("object_obj5");
object_obj5->load_obj("primitives/monkey/monkey.obj");
object_obj5->build_vbo();
Scene::instance().add_object(object_obj5->ident(), object_obj5);

SceneObject *object_obj6 = new SceneObject("object_obj6");
object_obj6->load_obj("primitives/cube/cube.obj");
object_obj6->build_vbo();
Scene::instance().add_object(object_obj6->ident(), object_obj6);

SceneObject *object_obj7 = new SceneObject("object_obj7");
object_obj7->load_obj("primitives/sphere/sphere.obj");
object_obj7->build_vbo();
Scene::instance().add_object(object_obj7->ident(), object_obj7);

SceneObject *object_obj8 = new SceneObject("object_obj8");
object_obj8->load_obj("primitives/sphere/sphere.obj");
object_obj8->build_vbo();
Scene::instance().add_object(object_obj8->ident(), object_obj8);

SceneObject *object_obj9 = new SceneObject("object_obj9");
object_obj9->load_obj("primitives/monkey/monkey.obj");
object_obj9->build_vbo();
Scene::instance().add_object(object_obj9->ident(), object_obj9);

SceneObject *object_obj10 = new SceneObject("object_obj10");
object_obj10->load_obj("primitives/sphere/sphere.obj");
object_obj10->build_vbo();
Scene::instance().add_object(object_obj10->ident(), object_obj10);

SceneObject *object_obj11 = new SceneObject("object_obj11");
object_obj11->load_obj("primitives/cube/cube.obj");
object_obj11->build_vbo();
Scene::instance().add_object(object_obj11->ident(), object_obj11);

SceneObject *object_obj12 = new SceneObject("object_obj12");
object_obj12->load_obj("primitives/cube/cube.obj");
object_obj12->build_vbo();
Scene::instance().add_object(object_obj12->ident(), object_obj12);

SceneObject *object_obj13 = new SceneObject("object_obj13");
object_obj13->load_obj("primitives/cube/cube.obj");
object_obj13->build_vbo();
Scene::instance().add_object(object_obj13->ident(), object_obj13);

SceneObject *object_obj14 = new SceneObject("object_obj14");
object_obj14->load_obj("primitives/sphere/sphere.obj");
object_obj14->build_vbo();
Scene::instance().add_object(object_obj14->ident(), object_obj14);

SceneObject *object_obj15 = new SceneObject("object_obj15");
object_obj15->load_obj("primitives/cube/cube.obj");
object_obj15->build_vbo();
Scene::instance().add_object(object_obj15->ident(), object_obj15);

SceneObject *object_obj16 = new SceneObject("object_obj16");
object_obj16->load_obj("primitives/cube/cube.obj");
object_obj16->build_vbo();
Scene::instance().add_object(object_obj16->ident(), object_obj16);

SceneObject *object_obj17 = new SceneObject("object_obj17");
object_obj17->load_obj("primitives/torus/torus.obj");
object_obj17->build_vbo();
Scene::instance().add_object(object_obj17->ident(), object_obj17);

SceneObject *object_obj18 = new SceneObject("object_obj18");
object_obj18->load_obj("primitives/cube/cube.obj");
object_obj18->build_vbo();
Scene::instance().add_object(object_obj18->ident(), object_obj18);

SceneObject *object_obj19 = new SceneObject("object_obj19");
object_obj19->load_obj("primitives/torus/torus.obj");
object_obj19->build_vbo();
Scene::instance().add_object(object_obj19->ident(), object_obj19);

SceneObject *object_obj20 = new SceneObject("object_obj20");
object_obj20->load_obj("primitives/sphere/sphere.obj");
object_obj20->build_vbo();
Scene::instance().add_object(object_obj20->ident(), object_obj20);

SceneObject *object_obj21 = new SceneObject("object_obj21");
object_obj21->load_obj("primitives/sphere/sphere.obj");
object_obj21->build_vbo();
Scene::instance().add_object(object_obj21->ident(), object_obj21);

SceneObject *object_obj22 = new SceneObject("object_obj22");
object_obj22->load_obj("primitives/monkey/monkey.obj");
object_obj22->build_vbo();
Scene::instance().add_object(object_obj22->ident(), object_obj22);

SceneObject *object_obj23 = new SceneObject("object_obj23");
object_obj23->load_obj("primitives/torus/torus.obj");
object_obj23->build_vbo();
Scene::instance().add_object(object_obj23->ident(), object_obj23);

SceneObject *object_obj24 = new SceneObject("object_obj24");
object_obj24->load_obj("primitives/monkey/monkey.obj");
object_obj24->build_vbo();
Scene::instance().add_object(object_obj24->ident(), object_obj24);

SceneObject *object_obj25 = new SceneObject("object_obj25");
object_obj25->load_obj("primitives/torus/torus.obj");
object_obj25->build_vbo();
Scene::instance().add_object(object_obj25->ident(), object_obj25);

SceneObject *object_obj26 = new SceneObject("object_obj26");
object_obj26->load_obj("primitives/sphere/sphere.obj");
object_obj26->build_vbo();
Scene::instance().add_object(object_obj26->ident(), object_obj26);

SceneObject *object_obj27 = new SceneObject("object_obj27");
object_obj27->load_obj("primitives/monkey/monkey.obj");
object_obj27->build_vbo();
Scene::instance().add_object(object_obj27->ident(), object_obj27);

SceneObject *object_obj28 = new SceneObject("object_obj28");
object_obj28->load_obj("primitives/torus/torus.obj");
object_obj28->build_vbo();
Scene::instance().add_object(object_obj28->ident(), object_obj28);

SceneObject *object_obj29 = new SceneObject("object_obj29");
object_obj29->load_obj("primitives/monkey/monkey.obj");
object_obj29->build_vbo();
Scene::instance().add_object(object_obj29->ident(), object_obj29);

SceneObject *object_obj30 = new SceneObject("object_obj30");
object_obj30->load_obj("primitives/sphere/sphere.obj");
object_obj30->build_vbo();
Scene::instance().add_object(object_obj30->ident(), object_obj30);

SceneObject *object_obj31 = new SceneObject("object_obj31");
object_obj31->load_obj("primitives/sphere/sphere.obj");
object_obj31->build_vbo();
Scene::instance().add_object(object_obj31->ident(), object_obj31);

SceneObject *object_obj32 = new SceneObject("object_obj32");
object_obj32->load_obj("primitives/cube/cube.obj");
object_obj32->build_vbo();
Scene::instance().add_object(object_obj32->ident(), object_obj32);

SceneObject *object_obj33 = new SceneObject("object_obj33");
object_obj33->load_obj("primitives/sphere/sphere.obj");
object_obj33->build_vbo();
Scene::instance().add_object(object_obj33->ident(), object_obj33);

SceneObject *object_obj34 = new SceneObject("object_obj34");
object_obj34->load_obj("primitives/torus/torus.obj");
object_obj34->build_vbo();
Scene::instance().add_object(object_obj34->ident(), object_obj34);

SceneObject *object_obj35 = new SceneObject("object_obj35");
object_obj35->load_obj("primitives/sphere/sphere.obj");
object_obj35->build_vbo();
Scene::instance().add_object(object_obj35->ident(), object_obj35);

SceneObject *object_obj36 = new SceneObject("object_obj36");
object_obj36->load_obj("primitives/cube/cube.obj");
object_obj36->build_vbo();
Scene::instance().add_object(object_obj36->ident(), object_obj36);

SceneObject *object_obj37 = new SceneObject("object_obj37");
object_obj37->load_obj("primitives/torus/torus.obj");
object_obj37->build_vbo();
Scene::instance().add_object(object_obj37->ident(), object_obj37);

SceneObject *object_obj38 = new SceneObject("object_obj38");
object_obj38->load_obj("primitives/monkey/monkey.obj");
object_obj38->build_vbo();
Scene::instance().add_object(object_obj38->ident(), object_obj38);

SceneObject *object_obj39 = new SceneObject("object_obj39");
object_obj39->load_obj("primitives/monkey/monkey.obj");
object_obj39->build_vbo();
Scene::instance().add_object(object_obj39->ident(), object_obj39);

SceneObject *object_obj40 = new SceneObject("object_obj40");
object_obj40->load_obj("primitives/monkey/monkey.obj");
object_obj40->build_vbo();
Scene::instance().add_object(object_obj40->ident(), object_obj40);

SceneObject *object_obj41 = new SceneObject("object_obj41");
object_obj41->load_obj("primitives/sphere/sphere.obj");
object_obj41->build_vbo();
Scene::instance().add_object(object_obj41->ident(), object_obj41);

SceneObject *object_obj42 = new SceneObject("object_obj42");
object_obj42->load_obj("primitives/sphere/sphere.obj");
object_obj42->build_vbo();
Scene::instance().add_object(object_obj42->ident(), object_obj42);

SceneObject *object_obj43 = new SceneObject("object_obj43");
object_obj43->load_obj("primitives/cube/cube.obj");
object_obj43->build_vbo();
Scene::instance().add_object(object_obj43->ident(), object_obj43);

SceneObject *object_obj44 = new SceneObject("object_obj44");
object_obj44->load_obj("primitives/monkey/monkey.obj");
object_obj44->build_vbo();
Scene::instance().add_object(object_obj44->ident(), object_obj44);

SceneObject *object_obj45 = new SceneObject("object_obj45");
object_obj45->load_obj("primitives/torus/torus.obj");
object_obj45->build_vbo();
Scene::instance().add_object(object_obj45->ident(), object_obj45);

SceneObject *object_obj46 = new SceneObject("object_obj46");
object_obj46->load_obj("primitives/sphere/sphere.obj");
object_obj46->build_vbo();
Scene::instance().add_object(object_obj46->ident(), object_obj46);

SceneObject *object_obj47 = new SceneObject("object_obj47");
object_obj47->load_obj("primitives/torus/torus.obj");
object_obj47->build_vbo();
Scene::instance().add_object(object_obj47->ident(), object_obj47);

SceneObject *object_obj48 = new SceneObject("object_obj48");
object_obj48->load_obj("primitives/sphere/sphere.obj");
object_obj48->build_vbo();
Scene::instance().add_object(object_obj48->ident(), object_obj48);

SceneObject *object_obj49 = new SceneObject("object_obj49");
object_obj49->load_obj("primitives/sphere/sphere.obj");
object_obj49->build_vbo();
Scene::instance().add_object(object_obj49->ident(), object_obj49);

SceneObject *object_obj50 = new SceneObject("object_obj50");
object_obj50->load_obj("primitives/cube/cube.obj");
object_obj50->build_vbo();
Scene::instance().add_object(object_obj50->ident(), object_obj50);

SceneObject *object_obj51 = new SceneObject("object_obj51");
object_obj51->load_obj("primitives/cube/cube.obj");
object_obj51->build_vbo();
Scene::instance().add_object(object_obj51->ident(), object_obj51);

SceneObject *object_obj52 = new SceneObject("object_obj52");
object_obj52->load_obj("primitives/sphere/sphere.obj");
object_obj52->build_vbo();
Scene::instance().add_object(object_obj52->ident(), object_obj52);

SceneObject *object_obj53 = new SceneObject("object_obj53");
object_obj53->load_obj("primitives/monkey/monkey.obj");
object_obj53->build_vbo();
Scene::instance().add_object(object_obj53->ident(), object_obj53);

SceneObject *object_obj54 = new SceneObject("object_obj54");
object_obj54->load_obj("primitives/sphere/sphere.obj");
object_obj54->build_vbo();
Scene::instance().add_object(object_obj54->ident(), object_obj54);

SceneObject *object_obj55 = new SceneObject("object_obj55");
object_obj55->load_obj("primitives/sphere/sphere.obj");
object_obj55->build_vbo();
Scene::instance().add_object(object_obj55->ident(), object_obj55);

SceneObject *object_obj56 = new SceneObject("object_obj56");
object_obj56->load_obj("primitives/sphere/sphere.obj");
object_obj56->build_vbo();
Scene::instance().add_object(object_obj56->ident(), object_obj56);

SceneObject *object_obj57 = new SceneObject("object_obj57");
object_obj57->load_obj("primitives/monkey/monkey.obj");
object_obj57->build_vbo();
Scene::instance().add_object(object_obj57->ident(), object_obj57);

SceneObject *object_obj58 = new SceneObject("object_obj58");
object_obj58->load_obj("primitives/cube/cube.obj");
object_obj58->build_vbo();
Scene::instance().add_object(object_obj58->ident(), object_obj58);

SceneObject *object_obj59 = new SceneObject("object_obj59");
object_obj59->load_obj("primitives/monkey/monkey.obj");
object_obj59->build_vbo();
Scene::instance().add_object(object_obj59->ident(), object_obj59);

SceneObject *object_obj60 = new SceneObject("object_obj60");
object_obj60->load_obj("primitives/sphere/sphere.obj");
object_obj60->build_vbo();
Scene::instance().add_object(object_obj60->ident(), object_obj60);

SceneObject *object_obj61 = new SceneObject("object_obj61");
object_obj61->load_obj("primitives/monkey/monkey.obj");
object_obj61->build_vbo();
Scene::instance().add_object(object_obj61->ident(), object_obj61);

SceneObject *object_obj62 = new SceneObject("object_obj62");
object_obj62->load_obj("primitives/sphere/sphere.obj");
object_obj62->build_vbo();
Scene::instance().add_object(object_obj62->ident(), object_obj62);

SceneObject *object_obj63 = new SceneObject("object_obj63");
object_obj63->load_obj("primitives/sphere/sphere.obj");
object_obj63->build_vbo();
Scene::instance().add_object(object_obj63->ident(), object_obj63);

SceneObject *object_obj64 = new SceneObject("object_obj64");
object_obj64->load_obj("primitives/sphere/sphere.obj");
object_obj64->build_vbo();
Scene::instance().add_object(object_obj64->ident(), object_obj64);

SceneObject *object_obj65 = new SceneObject("object_obj65");
object_obj65->load_obj("primitives/torus/torus.obj");
object_obj65->build_vbo();
Scene::instance().add_object(object_obj65->ident(), object_obj65);

SceneObject *object_obj66 = new SceneObject("object_obj66");
object_obj66->load_obj("primitives/sphere/sphere.obj");
object_obj66->build_vbo();
Scene::instance().add_object(object_obj66->ident(), object_obj66);

SceneObject *object_obj67 = new SceneObject("object_obj67");
object_obj67->load_obj("primitives/cube/cube.obj");
object_obj67->build_vbo();
Scene::instance().add_object(object_obj67->ident(), object_obj67);

SceneObject *object_obj68 = new SceneObject("object_obj68");
object_obj68->load_obj("primitives/cube/cube.obj");
object_obj68->build_vbo();
Scene::instance().add_object(object_obj68->ident(), object_obj68);

SceneObject *object_obj69 = new SceneObject("object_obj69");
object_obj69->load_obj("primitives/sphere/sphere.obj");
object_obj69->build_vbo();
Scene::instance().add_object(object_obj69->ident(), object_obj69);

SceneObject *object_obj70 = new SceneObject("object_obj70");
object_obj70->load_obj("primitives/torus/torus.obj");
object_obj70->build_vbo();
Scene::instance().add_object(object_obj70->ident(), object_obj70);

SceneObject *object_obj71 = new SceneObject("object_obj71");
object_obj71->load_obj("primitives/torus/torus.obj");
object_obj71->build_vbo();
Scene::instance().add_object(object_obj71->ident(), object_obj71);

SceneObject *object_obj72 = new SceneObject("object_obj72");
object_obj72->load_obj("primitives/cube/cube.obj");
object_obj72->build_vbo();
Scene::instance().add_object(object_obj72->ident(), object_obj72);

SceneObject *object_obj73 = new SceneObject("object_obj73");
object_obj73->load_obj("primitives/sphere/sphere.obj");
object_obj73->build_vbo();
Scene::instance().add_object(object_obj73->ident(), object_obj73);

SceneObject *object_obj74 = new SceneObject("object_obj74");
object_obj74->load_obj("primitives/sphere/sphere.obj");
object_obj74->build_vbo();
Scene::instance().add_object(object_obj74->ident(), object_obj74);

SceneObject *object_obj75 = new SceneObject("object_obj75");
object_obj75->load_obj("primitives/cube/cube.obj");
object_obj75->build_vbo();
Scene::instance().add_object(object_obj75->ident(), object_obj75);

SceneObject *object_obj76 = new SceneObject("object_obj76");
object_obj76->load_obj("primitives/torus/torus.obj");
object_obj76->build_vbo();
Scene::instance().add_object(object_obj76->ident(), object_obj76);

SceneObject *object_obj77 = new SceneObject("object_obj77");
object_obj77->load_obj("primitives/monkey/monkey.obj");
object_obj77->build_vbo();
Scene::instance().add_object(object_obj77->ident(), object_obj77);

SceneObject *object_obj78 = new SceneObject("object_obj78");
object_obj78->load_obj("primitives/torus/torus.obj");
object_obj78->build_vbo();
Scene::instance().add_object(object_obj78->ident(), object_obj78);

SceneObject *object_obj79 = new SceneObject("object_obj79");
object_obj79->load_obj("primitives/cube/cube.obj");
object_obj79->build_vbo();
Scene::instance().add_object(object_obj79->ident(), object_obj79);

SceneObject *object_obj80 = new SceneObject("object_obj80");
object_obj80->load_obj("primitives/sphere/sphere.obj");
object_obj80->build_vbo();
Scene::instance().add_object(object_obj80->ident(), object_obj80);

SceneObject *object_obj81 = new SceneObject("object_obj81");
object_obj81->load_obj("primitives/sphere/sphere.obj");
object_obj81->build_vbo();
Scene::instance().add_object(object_obj81->ident(), object_obj81);

SceneObject *object_obj82 = new SceneObject("object_obj82");
object_obj82->load_obj("primitives/torus/torus.obj");
object_obj82->build_vbo();
Scene::instance().add_object(object_obj82->ident(), object_obj82);

SceneObject *object_obj83 = new SceneObject("object_obj83");
object_obj83->load_obj("primitives/sphere/sphere.obj");
object_obj83->build_vbo();
Scene::instance().add_object(object_obj83->ident(), object_obj83);

SceneObject *object_obj84 = new SceneObject("object_obj84");
object_obj84->load_obj("primitives/monkey/monkey.obj");
object_obj84->build_vbo();
Scene::instance().add_object(object_obj84->ident(), object_obj84);

SceneObject *object_obj85 = new SceneObject("object_obj85");
object_obj85->load_obj("primitives/sphere/sphere.obj");
object_obj85->build_vbo();
Scene::instance().add_object(object_obj85->ident(), object_obj85);

SceneObject *object_obj86 = new SceneObject("object_obj86");
object_obj86->load_obj("primitives/cube/cube.obj");
object_obj86->build_vbo();
Scene::instance().add_object(object_obj86->ident(), object_obj86);

SceneObject *object_obj87 = new SceneObject("object_obj87");
object_obj87->load_obj("primitives/monkey/monkey.obj");
object_obj87->build_vbo();
Scene::instance().add_object(object_obj87->ident(), object_obj87);

SceneObject *object_obj88 = new SceneObject("object_obj88");
object_obj88->load_obj("primitives/sphere/sphere.obj");
object_obj88->build_vbo();
Scene::instance().add_object(object_obj88->ident(), object_obj88);

SceneObject *object_obj89 = new SceneObject("object_obj89");
object_obj89->load_obj("primitives/cube/cube.obj");
object_obj89->build_vbo();
Scene::instance().add_object(object_obj89->ident(), object_obj89);

SceneObject *object_obj90 = new SceneObject("object_obj90");
object_obj90->load_obj("primitives/monkey/monkey.obj");
object_obj90->build_vbo();
Scene::instance().add_object(object_obj90->ident(), object_obj90);

SceneObject *object_obj91 = new SceneObject("object_obj91");
object_obj91->load_obj("primitives/torus/torus.obj");
object_obj91->build_vbo();
Scene::instance().add_object(object_obj91->ident(), object_obj91);

SceneObject *object_obj92 = new SceneObject("object_obj92");
object_obj92->load_obj("primitives/monkey/monkey.obj");
object_obj92->build_vbo();
Scene::instance().add_object(object_obj92->ident(), object_obj92);

SceneObject *object_obj93 = new SceneObject("object_obj93");
object_obj93->load_obj("primitives/monkey/monkey.obj");
object_obj93->build_vbo();
Scene::instance().add_object(object_obj93->ident(), object_obj93);

SceneObject *object_obj94 = new SceneObject("object_obj94");
object_obj94->load_obj("primitives/cube/cube.obj");
object_obj94->build_vbo();
Scene::instance().add_object(object_obj94->ident(), object_obj94);

SceneObject *object_obj95 = new SceneObject("object_obj95");
object_obj95->load_obj("primitives/sphere/sphere.obj");
object_obj95->build_vbo();
Scene::instance().add_object(object_obj95->ident(), object_obj95);

SceneObject *object_obj96 = new SceneObject("object_obj96");
object_obj96->load_obj("primitives/torus/torus.obj");
object_obj96->build_vbo();
Scene::instance().add_object(object_obj96->ident(), object_obj96);

SceneObject *object_obj97 = new SceneObject("object_obj97");
object_obj97->load_obj("primitives/cube/cube.obj");
object_obj97->build_vbo();
Scene::instance().add_object(object_obj97->ident(), object_obj97);

SceneObject *object_obj98 = new SceneObject("object_obj98");
object_obj98->load_obj("primitives/cube/cube.obj");
object_obj98->build_vbo();
Scene::instance().add_object(object_obj98->ident(), object_obj98);

SceneObject *object_obj99 = new SceneObject("object_obj99");
object_obj99->load_obj("primitives/sphere/sphere.obj");
object_obj99->build_vbo();
Scene::instance().add_object(object_obj99->ident(), object_obj99);

Camera *object_cam1 = new Camera();
object_cam1->set_depth(1000);
object_cam1->set_direction(15, 0, 1);
object_cam1->set_position(0, 0, -7);
Scene::instance().add_camera("object_cam1", object_cam1);
Camera *object_cam2 = new Camera();
object_cam2->set_depth(1000);
object_cam2->set_direction(-8, 0, 1);
object_cam2->set_position(15, 0, 1);
Scene::instance().add_camera("object_cam2", object_cam2);
Camera *object_cam3 = new Camera();
object_cam3->set_depth(1000);
object_cam3->set_direction(8, 0, 1);
object_cam3->set_position(-15, 0, 1);
Scene::instance().add_camera("object_cam3", object_cam3);
Animation *object_setup = new Animation("object_setup");

object_setup->add_action(ANIM_TRANSLATE, "object_obj0", -1.81932534673, 2.14326169894, 4.83723263749);

object_setup->add_action(ANIM_TRANSLATE, "object_obj1", 7.84423846309, 0.708258562186, 3.93906179121);

object_setup->add_action(ANIM_TRANSLATE, "object_obj2", -3.83158046184, -5.43969127607, 9.16993257725);

object_setup->add_action(ANIM_TRANSLATE, "object_obj3", -2.51939395227, 9.40972331809, 7.99512374044);

object_setup->add_action(ANIM_TRANSLATE, "object_obj4", -5.36548562315, -1.269470085, 2.78725545994);

object_setup->add_action(ANIM_TRANSLATE, "object_obj5", 7.70218404111, 3.0784875174, 9.56602169318);

object_setup->add_action(ANIM_TRANSLATE, "object_obj6", 1.98569840641, -4.92544214054, 3.09034102166);

object_setup->add_action(ANIM_TRANSLATE, "object_obj7", 0.645453889729, -9.5536955742, 4.2130693031);

object_setup->add_action(ANIM_TRANSLATE, "object_obj8", -1.74417841731, 0.647995935487, 4.69264262623);

object_setup->add_action(ANIM_TRANSLATE, "object_obj9", 8.01868182857, 5.0981388425, 8.73356279729);

object_setup->add_action(ANIM_TRANSLATE, "object_obj10", -2.33369336152, 2.78401797437, 4.6212325382);

object_setup->add_action(ANIM_TRANSLATE, "object_obj11", -7.73736570173, 0.42544463578, 5.13293801698);

object_setup->add_action(ANIM_TRANSLATE, "object_obj12", 2.09436066606, 3.91597506521, 0.69340969732);

object_setup->add_action(ANIM_TRANSLATE, "object_obj13", -1.82291663028, -4.96107315363, 9.01569826954);

object_setup->add_action(ANIM_TRANSLATE, "object_obj14", -6.98945359484, -3.8334056855, 9.24437844457);

object_setup->add_action(ANIM_TRANSLATE, "object_obj15", 5.78605601539, -0.873000463994, 6.28356774218);

object_setup->add_action(ANIM_TRANSLATE, "object_obj16", -1.36784021555, 4.21135434751, 0.485215061043);

object_setup->add_action(ANIM_TRANSLATE, "object_obj17", 1.56426890951, 9.30732257488, 7.5590149836);

object_setup->add_action(ANIM_TRANSLATE, "object_obj18", 9.33826962908, -2.12621224544, 8.23153979939);

object_setup->add_action(ANIM_TRANSLATE, "object_obj19", -2.34964759097, -6.64250229706, 3.5053682136);

object_setup->add_action(ANIM_TRANSLATE, "object_obj20", -1.95769191166, -7.72470528944, 4.18404956898);

object_setup->add_action(ANIM_TRANSLATE, "object_obj21", -9.4002207411, -3.83175303573, 5.95591982106);

object_setup->add_action(ANIM_TRANSLATE, "object_obj22", 0.807132934469, -0.15205815216, 5.60149570565);

object_setup->add_action(ANIM_TRANSLATE, "object_obj23", -5.48426421627, 1.60370308504, 4.41583871679);

object_setup->add_action(ANIM_TRANSLATE, "object_obj24", -4.27044067239, -7.60136452152, 5.20652172854);

object_setup->add_action(ANIM_TRANSLATE, "object_obj25", 2.56921251419, 1.38316547206, 8.75713343088);

object_setup->add_action(ANIM_TRANSLATE, "object_obj26", -7.94491222603, -2.79259819239, 9.87173181668);

object_setup->add_action(ANIM_TRANSLATE, "object_obj27", 2.38361568548, -4.61117732083, 4.98721384228);

object_setup->add_action(ANIM_TRANSLATE, "object_obj28", -4.85766582696, 1.98666018853, 1.68306455251);

object_setup->add_action(ANIM_TRANSLATE, "object_obj29", 8.58170834894, 4.49825442322, 7.72268473115);

object_setup->add_action(ANIM_TRANSLATE, "object_obj30", -9.08340916081, 9.55439122486, 3.864333379);

object_setup->add_action(ANIM_TRANSLATE, "object_obj31", 6.69284982409, 6.83422177025, 1.19624169925);

object_setup->add_action(ANIM_TRANSLATE, "object_obj32", -3.6249873512, 3.69370731385, 7.77233227428);

object_setup->add_action(ANIM_TRANSLATE, "object_obj33", -6.70826918455, 6.35481123151, 6.58341291687);

object_setup->add_action(ANIM_TRANSLATE, "object_obj34", -2.21665297381, -1.74935982763, 3.26071759582);

object_setup->add_action(ANIM_TRANSLATE, "object_obj35", 2.30753174468, -5.88234355792, 6.7737549722);

object_setup->add_action(ANIM_TRANSLATE, "object_obj36", 3.04505800594, -1.53613150848, 4.90340163288);

object_setup->add_action(ANIM_TRANSLATE, "object_obj37", -8.73825880899, -1.53038443895, 2.02652109079);

object_setup->add_action(ANIM_TRANSLATE, "object_obj38", 5.00558595237, 1.49422833831, 7.05911851584);

object_setup->add_action(ANIM_TRANSLATE, "object_obj39", 3.31435588916, 9.61288678963, 4.17330991093);

object_setup->add_action(ANIM_TRANSLATE, "object_obj40", -0.355830541217, -4.37488461251, 3.78557278552);

object_setup->add_action(ANIM_TRANSLATE, "object_obj41", 4.26543885145, -4.04187079026, 7.27203234861);

object_setup->add_action(ANIM_TRANSLATE, "object_obj42", 1.20968989991, -9.31296113188, 3.49759879872);

object_setup->add_action(ANIM_TRANSLATE, "object_obj43", 8.72062602274, -2.41537555966, 4.71213795619);

object_setup->add_action(ANIM_TRANSLATE, "object_obj44", -1.95789120302, -3.39502139025, 6.66906795908);

object_setup->add_action(ANIM_TRANSLATE, "object_obj45", -4.71900447756, 4.61777443299, 7.47709334633);

object_setup->add_action(ANIM_TRANSLATE, "object_obj46", 8.085606202, 8.39396647796, 3.01423587777);

object_setup->add_action(ANIM_TRANSLATE, "object_obj47", 7.31264204297, 4.06362705219, 7.95250560013);

object_setup->add_action(ANIM_TRANSLATE, "object_obj48", 6.18853471367, 2.51938668258, 8.97917047388);

object_setup->add_action(ANIM_TRANSLATE, "object_obj49", -7.87894227509, 0.67287777986, 4.25838741234);

object_setup->add_action(ANIM_TRANSLATE, "object_obj50", -8.30621562119, 1.37415205405, 2.72771470609);

object_setup->add_action(ANIM_TRANSLATE, "object_obj51", 7.95026592076, -3.64460516166, 8.7146591834);

object_setup->add_action(ANIM_TRANSLATE, "object_obj52", -7.17294675715, 1.90124358924, 6.57738576973);

object_setup->add_action(ANIM_TRANSLATE, "object_obj53", -9.62830683756, -6.14936030977, 4.65335310556);

object_setup->add_action(ANIM_TRANSLATE, "object_obj54", -7.41520911249, -0.0435724221375, 2.24294464043);

object_setup->add_action(ANIM_TRANSLATE, "object_obj55", 7.2606407574, 5.87000617358, 8.26265857238);

object_setup->add_action(ANIM_TRANSLATE, "object_obj56", -5.08672515767, -6.64149236572, 5.02673614173);

object_setup->add_action(ANIM_TRANSLATE, "object_obj57", 9.15389821746, -2.94376451911, 1.30981009077);

object_setup->add_action(ANIM_TRANSLATE, "object_obj58", 1.01929252335, -3.58850551618, 6.61493615868);

object_setup->add_action(ANIM_TRANSLATE, "object_obj59", -6.12650863764, 9.77753160418, 6.1738291471);

object_setup->add_action(ANIM_TRANSLATE, "object_obj60", 7.2404002759, 0.0928914359869, 7.45737435069);

object_setup->add_action(ANIM_TRANSLATE, "object_obj61", -5.64801701769, 1.8301126574, 2.79234302063);

object_setup->add_action(ANIM_TRANSLATE, "object_obj62", 7.88928969043, -8.16724831426, 1.08697586987);

object_setup->add_action(ANIM_TRANSLATE, "object_obj63", 1.11938182403, 9.29815168573, 3.07336331397);

object_setup->add_action(ANIM_TRANSLATE, "object_obj64", 7.01281990029, 9.9714516582, 5.08654532735);

object_setup->add_action(ANIM_TRANSLATE, "object_obj65", -0.253766482062, 8.99766754096, 2.70720539546);

object_setup->add_action(ANIM_TRANSLATE, "object_obj66", -0.245508773677, -6.05353988665, 0.200214875876);

object_setup->add_action(ANIM_TRANSLATE, "object_obj67", -4.08763582103, -6.00233192124, 7.93823671705);

object_setup->add_action(ANIM_TRANSLATE, "object_obj68", 1.64927729632, -0.985142263388, 1.83789822685);

object_setup->add_action(ANIM_TRANSLATE, "object_obj69", 0.374069164219, 5.75215759529, 3.8918413743);

object_setup->add_action(ANIM_TRANSLATE, "object_obj70", 3.39490637452, -4.78463722131, 4.30990331485);

object_setup->add_action(ANIM_TRANSLATE, "object_obj71", 9.5079842659, 9.80529381773, 0.580266694665);

object_setup->add_action(ANIM_TRANSLATE, "object_obj72", -2.64956201315, 4.53388929222, 3.94414471224);

object_setup->add_action(ANIM_TRANSLATE, "object_obj73", -2.00225589793, 6.42740579119, 6.71119720561);

object_setup->add_action(ANIM_TRANSLATE, "object_obj74", 6.42399622431, -2.80853989406, 4.84524689249);

object_setup->add_action(ANIM_TRANSLATE, "object_obj75", -0.881800510726, 0.00338691783938, 1.70636075968);

object_setup->add_action(ANIM_TRANSLATE, "object_obj76", -3.00922223132, 6.30412534751, 5.05363349741);

object_setup->add_action(ANIM_TRANSLATE, "object_obj77", -8.95637610058, -5.01742402178, 9.67035798022);

object_setup->add_action(ANIM_TRANSLATE, "object_obj78", 8.33398694529, 2.62884012614, 9.57728054041);

object_setup->add_action(ANIM_TRANSLATE, "object_obj79", -3.51360552755, 2.1921022189, 2.15216586773);

object_setup->add_action(ANIM_TRANSLATE, "object_obj80", -0.353797560469, 7.72269144192, 0.778728412571);

object_setup->add_action(ANIM_TRANSLATE, "object_obj81", 6.89541730363, 3.52426634777, 6.15321171208);

object_setup->add_action(ANIM_TRANSLATE, "object_obj82", 8.12829732599, -5.22414519826, 5.22642109993);

object_setup->add_action(ANIM_TRANSLATE, "object_obj83", -9.44835402334, -1.07062341682, 3.087096145);

object_setup->add_action(ANIM_TRANSLATE, "object_obj84", -7.05559436759, -5.12947471219, 3.82819189874);

object_setup->add_action(ANIM_TRANSLATE, "object_obj85", -4.32077163519, -4.45112267853, 5.38117485676);

object_setup->add_action(ANIM_TRANSLATE, "object_obj86", 7.07556976816, -6.61248253032, 3.22589429035);

object_setup->add_action(ANIM_TRANSLATE, "object_obj87", 9.15191674974, 3.61081505286, 8.45250696422);

object_setup->add_action(ANIM_TRANSLATE, "object_obj88", 1.50303809798, -1.32966367646, 2.15380117258);

object_setup->add_action(ANIM_TRANSLATE, "object_obj89", -8.05323509364, 3.93692665146, 2.71547066353);

object_setup->add_action(ANIM_TRANSLATE, "object_obj90", -7.00425165218, -5.98955601373, 1.43836291835);

object_setup->add_action(ANIM_TRANSLATE, "object_obj91", 5.24858721417, 9.35606128688, 4.07630778353);

object_setup->add_action(ANIM_TRANSLATE, "object_obj92", 2.46630766573, 2.00077976053, 4.6144330729);

object_setup->add_action(ANIM_TRANSLATE, "object_obj93", 6.37887925926, 0.712487833418, 3.86460970769);

object_setup->add_action(ANIM_TRANSLATE, "object_obj94", -5.87882168192, -9.81145575013, 3.08568083816);

object_setup->add_action(ANIM_TRANSLATE, "object_obj95", -0.520018100278, -1.27456219609, 9.85566133346);

object_setup->add_action(ANIM_TRANSLATE, "object_obj96", 1.39600684719, -7.63199463689, 1.1277703474);

object_setup->add_action(ANIM_TRANSLATE, "object_obj97", 2.19043452389, -9.51864466982, 4.93114283368);

object_setup->add_action(ANIM_TRANSLATE, "object_obj98", -1.85337561654, 0.98893671273, 0.619391506207);

object_setup->add_action(ANIM_TRANSLATE, "object_obj99", -3.22136138965, 7.90026491744, 8.54232225249);

Animation *object_mess = new Animation("object_mess");

Interpolation *interpolation_0 = object_mess->add_interp();
interpolation_0->set_time(20);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj0", -1.78318242426, 6.0963776822, 3.41294300554);
interpolation_0->add_action(ANIM_ROTATE, "object_obj0", 3.25817398568, 8.77305605512, 9.28404946977);
interpolation_0->add_action(ANIM_ROTATE, "object_obj0", -1.42565166885, -8.67204389866, 5.43388197485);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj1", -0.0306178609126, 8.71788297089, 1.17137210664);
interpolation_0->add_action(ANIM_ROTATE, "object_obj1", 3.87004378767, 2.75119629721, 8.69574453765);
interpolation_0->add_action(ANIM_ROTATE, "object_obj1", 9.87068911437, -3.587398706, 0.66999508408);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj2", 3.91096810213, -6.41521624006, 8.50882219232);
interpolation_0->add_action(ANIM_ROTATE, "object_obj2", 0.861827543098, -3.40485003288, 0.158929912558);
interpolation_0->add_action(ANIM_ROTATE, "object_obj2", 6.00044708295, -2.39703345472, 1.8174107836);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj3", -9.46695184256, -3.74542844184, 7.77099634475);
interpolation_0->add_action(ANIM_ROTATE, "object_obj3", -0.657447454989, 5.76785429241, 1.98030920532);
interpolation_0->add_action(ANIM_ROTATE, "object_obj3", -6.11730296643, 9.39543922734, 4.63125092822);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj4", -5.26753897096, -4.21729835987, 2.30163753128);
interpolation_0->add_action(ANIM_ROTATE, "object_obj4", 0.234980683733, 6.45796247059, 3.23089829528);
interpolation_0->add_action(ANIM_ROTATE, "object_obj4", 6.55333836973, -2.58279365992, 9.39813089404);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj5", -3.01446874853, -9.85516296426, 9.40399893541);
interpolation_0->add_action(ANIM_ROTATE, "object_obj5", 2.44936891777, 6.46856062117, 5.00478753831);
interpolation_0->add_action(ANIM_ROTATE, "object_obj5", 0.363135388655, -2.9281143165, 3.72999303712);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj6", -9.06185028523, 4.19323172209, 1.55565452826);
interpolation_0->add_action(ANIM_ROTATE, "object_obj6", 2.32560225381, 6.21236278051, 2.27709450643);
interpolation_0->add_action(ANIM_ROTATE, "object_obj6", -1.74196161017, -5.46726490124, 6.82987073851);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj7", 5.04084066355, -8.05966726108, 7.95609954159);
interpolation_0->add_action(ANIM_ROTATE, "object_obj7", 9.47607299889, -0.659805257639, 6.68076181976);
interpolation_0->add_action(ANIM_ROTATE, "object_obj7", -8.6582469383, 9.42204162714, 8.48737906184);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj8", -2.82205912428, 4.43643580308, 8.89441481162);
interpolation_0->add_action(ANIM_ROTATE, "object_obj8", -1.79504443352, 1.03279651471, 8.8212989599);
interpolation_0->add_action(ANIM_ROTATE, "object_obj8", -0.648860834798, -6.00557830354, 8.69649361046);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj9", 8.12700530122, 5.93711052052, 5.0622313816);
interpolation_0->add_action(ANIM_ROTATE, "object_obj9", 6.63742213889, 1.69040783737, 0.817399969927);
interpolation_0->add_action(ANIM_ROTATE, "object_obj9", 5.00786766269, 9.59722297719, 8.04410893381);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj10", -3.76936567232, -6.75964071845, 3.22283589682);
interpolation_0->add_action(ANIM_ROTATE, "object_obj10", -6.27944970364, -3.77147196181, 0.977050942757);
interpolation_0->add_action(ANIM_ROTATE, "object_obj10", -9.00853549247, -0.240524192543, 4.53680506628);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj11", 7.09986672025, -4.43063791804, 4.26900174954);
interpolation_0->add_action(ANIM_ROTATE, "object_obj11", -2.61199422999, 9.18653109045, 3.49869870111);
interpolation_0->add_action(ANIM_ROTATE, "object_obj11", -3.45953941327, -5.07625462669, 0.405898431472);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj12", -8.5399473506, 4.62310639693, 0.0855067733419);
interpolation_0->add_action(ANIM_ROTATE, "object_obj12", 7.50594839203, 2.24332354522, 0.120479915906);
interpolation_0->add_action(ANIM_ROTATE, "object_obj12", -5.32440035148, -5.13759540785, 4.7957463679);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj13", -9.21592506341, -0.797298969058, 5.10449664038);
interpolation_0->add_action(ANIM_ROTATE, "object_obj13", -1.88288303528, -1.80856788747, 2.78841829255);
interpolation_0->add_action(ANIM_ROTATE, "object_obj13", -5.99190150812, -5.22340725633, 6.16216123385);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj14", -6.09977321618, -0.344437372623, 4.191941127);
interpolation_0->add_action(ANIM_ROTATE, "object_obj14", -6.34588610023, 8.44279325431, 9.29953480488);
interpolation_0->add_action(ANIM_ROTATE, "object_obj14", -9.7568476882, -1.9061977171, 1.21284869276);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj15", -8.88169089674, 7.58189995931, 4.66587413915);
interpolation_0->add_action(ANIM_ROTATE, "object_obj15", 8.10910450295, -6.45062476286, 7.03056723974);
interpolation_0->add_action(ANIM_ROTATE, "object_obj15", -7.8664782295, -7.25282082813, 6.24930206525);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj16", 9.75141927816, -1.79753698944, 8.74084244284);
interpolation_0->add_action(ANIM_ROTATE, "object_obj16", 1.28121762927, 5.53440823288, 7.36823171615);
interpolation_0->add_action(ANIM_ROTATE, "object_obj16", -0.0950527224023, -6.32671473444, 9.35800927324);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj17", -7.08218809531, -0.403961738669, 9.35841760553);
interpolation_0->add_action(ANIM_ROTATE, "object_obj17", -5.01815671728, 3.65433501066, 8.69340189779);
interpolation_0->add_action(ANIM_ROTATE, "object_obj17", 2.85603004699, 4.98897327805, 2.0890629774);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj18", -4.75105159089, 9.4758916581, 2.98843537785);
interpolation_0->add_action(ANIM_ROTATE, "object_obj18", -0.358127509905, -6.53844090009, 0.695489387255);
interpolation_0->add_action(ANIM_ROTATE, "object_obj18", 9.34100904872, -1.57393166238, 1.66432561976);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj19", -3.43983295697, 4.80631654202, 7.37813723381);
interpolation_0->add_action(ANIM_ROTATE, "object_obj19", -0.359214317759, -5.27823707829, 4.00975804841);
interpolation_0->add_action(ANIM_ROTATE, "object_obj19", -7.44732044226, 7.44068829008, 7.68560570855);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj20", 8.07342564646, -2.15202565073, 2.88802777466);
interpolation_0->add_action(ANIM_ROTATE, "object_obj20", 0.501244116109, -9.47288163479, 0.490051123711);
interpolation_0->add_action(ANIM_ROTATE, "object_obj20", -2.76637909703, -0.446263325894, 5.84885062952);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj21", 6.67935033656, 2.00741382969, 8.41228772794);
interpolation_0->add_action(ANIM_ROTATE, "object_obj21", 8.09906073397, -6.48172988028, 2.4214603406);
interpolation_0->add_action(ANIM_ROTATE, "object_obj21", 3.42985018971, -6.04985506365, 5.34180684768);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj22", -3.50119106444, 8.97509642638, 8.01811246181);
interpolation_0->add_action(ANIM_ROTATE, "object_obj22", -1.64665686222, 5.57837275667, 4.20667078183);
interpolation_0->add_action(ANIM_ROTATE, "object_obj22", -4.57244731477, 5.49981443606, 3.85324698724);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj23", 0.433855460436, 9.93173181786, 7.48896373675);
interpolation_0->add_action(ANIM_ROTATE, "object_obj23", -6.99801516367, 5.32257686679, 2.34081966725);
interpolation_0->add_action(ANIM_ROTATE, "object_obj23", 6.07983568703, -0.0547559889883, 0.682474291563);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj24", 3.99678435576, -5.45715532198, 5.92299667278);
interpolation_0->add_action(ANIM_ROTATE, "object_obj24", 8.88962293192, 7.24655417153, 7.66762535148);
interpolation_0->add_action(ANIM_ROTATE, "object_obj24", -2.39542126548, -9.03756576779, 4.41172211254);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj25", 2.02534102553, 6.73543109854, 3.99302703876);
interpolation_0->add_action(ANIM_ROTATE, "object_obj25", -1.49046908362, 7.12246097151, 1.69065958967);
interpolation_0->add_action(ANIM_ROTATE, "object_obj25", -2.47304363603, 8.64796999879, 7.77350116279);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj26", -7.23984971375, 8.51810550395, 4.20275035603);
interpolation_0->add_action(ANIM_ROTATE, "object_obj26", -0.95796604802, 8.40913650507, 4.96881132555);
interpolation_0->add_action(ANIM_ROTATE, "object_obj26", -1.03754926057, 6.08843376783, 2.75037836096);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj27", 1.75049916699, -8.35041591876, 0.0883629076923);
interpolation_0->add_action(ANIM_ROTATE, "object_obj27", 2.16499151714, -3.20322413378, 5.00440463192);
interpolation_0->add_action(ANIM_ROTATE, "object_obj27", 4.57794768133, 7.78019176229, 0.947684457696);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj28", 5.82244656749, 1.25648919826, 6.1077641407);
interpolation_0->add_action(ANIM_ROTATE, "object_obj28", 9.12167338669, 8.79613097486, 7.82208436402);
interpolation_0->add_action(ANIM_ROTATE, "object_obj28", -1.39997210989, -9.89546651954, 5.84983302999);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj29", 4.90494000522, -7.44151385311, 1.9286095357);
interpolation_0->add_action(ANIM_ROTATE, "object_obj29", -0.133479044536, 1.93562920103, 7.04243359851);
interpolation_0->add_action(ANIM_ROTATE, "object_obj29", 4.52934941766, -2.67126357827, 8.77329193076);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj30", -6.20033546735, 0.277951546792, 5.44514604103);
interpolation_0->add_action(ANIM_ROTATE, "object_obj30", -9.99169840034, 4.71005504847, 2.10323686521);
interpolation_0->add_action(ANIM_ROTATE, "object_obj30", -1.36450993021, 1.81471671431, 7.12283165826);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj31", -1.60714146698, -5.64637864084, 4.6440400824);
interpolation_0->add_action(ANIM_ROTATE, "object_obj31", 8.11339308892, 0.474932420796, 7.31781185377);
interpolation_0->add_action(ANIM_ROTATE, "object_obj31", 4.17914213728, -5.25350741131, 0.107742892614);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj32", -6.62179104252, 7.03833298701, 3.543507651);
interpolation_0->add_action(ANIM_ROTATE, "object_obj32", -8.32150713843, -6.52676449535, 3.95040629279);
interpolation_0->add_action(ANIM_ROTATE, "object_obj32", -1.91781554223, -3.96568481391, 3.13229294327);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj33", -3.70423991242, -7.47522710831, 4.90268612692);
interpolation_0->add_action(ANIM_ROTATE, "object_obj33", 4.2665669207, -9.47535673589, 3.83251946323);
interpolation_0->add_action(ANIM_ROTATE, "object_obj33", -1.76546737245, -5.86163335326, 5.64408306543);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj34", 6.21442153638, -2.34684605945, 8.34389452478);
interpolation_0->add_action(ANIM_ROTATE, "object_obj34", 4.17462331017, 5.87465346437, 2.82325882342);
interpolation_0->add_action(ANIM_ROTATE, "object_obj34", 8.98897344302, -0.139523043264, 2.8617571725);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj35", -0.461499986659, 7.20642554388, 5.62859577832);
interpolation_0->add_action(ANIM_ROTATE, "object_obj35", -6.95683666309, -4.02562991408, 1.69346377615);
interpolation_0->add_action(ANIM_ROTATE, "object_obj35", 6.31985624896, 2.25558958188, 6.86736028117);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj36", -7.84888209077, 5.39813689511, 6.23520426874);
interpolation_0->add_action(ANIM_ROTATE, "object_obj36", 4.23033246007, -0.906110394532, 9.43402094226);
interpolation_0->add_action(ANIM_ROTATE, "object_obj36", -9.38170354842, 1.30428847929, 4.32137661066);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj37", -7.89311506035, -1.31608331217, 2.52629675461);
interpolation_0->add_action(ANIM_ROTATE, "object_obj37", -3.65087847094, -0.574414504419, 6.99890448257);
interpolation_0->add_action(ANIM_ROTATE, "object_obj37", -5.5246123279, -3.17979355897, 6.76101885886);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj38", 6.00305930605, -9.67109041361, 6.38663147275);
interpolation_0->add_action(ANIM_ROTATE, "object_obj38", -0.49836011466, -5.92971367085, 5.36329604229);
interpolation_0->add_action(ANIM_ROTATE, "object_obj38", 0.226607026991, 1.3528951, 4.21104522341);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj39", -7.73092109119, 5.67688807549, 4.29826736981);
interpolation_0->add_action(ANIM_ROTATE, "object_obj39", 2.2985220336, -8.36214124191, 8.24046895767);
interpolation_0->add_action(ANIM_ROTATE, "object_obj39", -0.110577987005, -2.2157179127, 0.430783910127);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj40", 6.54594596568, 7.99468013168, 5.14918823171);
interpolation_0->add_action(ANIM_ROTATE, "object_obj40", 5.8662157291, 8.92673939777, 4.71732947824);
interpolation_0->add_action(ANIM_ROTATE, "object_obj40", 1.40412192453, -6.83995871843, 7.00967441536);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj41", 3.39165749242, -1.5186611998, 5.20458531697);
interpolation_0->add_action(ANIM_ROTATE, "object_obj41", -9.73728025133, 8.98165942515, 5.86035212919);
interpolation_0->add_action(ANIM_ROTATE, "object_obj41", -8.02212221719, 2.43379045231, 8.74836490378);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj42", -4.29092942052, -7.8153070811, 8.45071775411);
interpolation_0->add_action(ANIM_ROTATE, "object_obj42", 1.91621390062, 9.77339612776, 9.09479647681);
interpolation_0->add_action(ANIM_ROTATE, "object_obj42", 6.74412802833, -2.84520474165, 7.21666860745);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj43", 9.51671017269, -0.536407570034, 5.72339180882);
interpolation_0->add_action(ANIM_ROTATE, "object_obj43", -1.69110416588, 3.78868969855, 6.67241454665);
interpolation_0->add_action(ANIM_ROTATE, "object_obj43", -1.60857680529, -5.04581768068, 3.21247989831);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj44", 6.95916086035, 0.818535138935, 6.69820615736);
interpolation_0->add_action(ANIM_ROTATE, "object_obj44", -4.63211931619, -1.43599075308, 9.32773668136);
interpolation_0->add_action(ANIM_ROTATE, "object_obj44", -7.45933046162, -8.09416890244, 8.67031848797);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj45", 2.87273619699, 5.77435445165, 2.48550331132);
interpolation_0->add_action(ANIM_ROTATE, "object_obj45", 1.6188502469, 8.84830276314, 8.19596235671);
interpolation_0->add_action(ANIM_ROTATE, "object_obj45", 7.61844465993, 9.30310687646, 9.81758181826);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj46", -6.23564934298, -2.84425112792, 9.41691573467);
interpolation_0->add_action(ANIM_ROTATE, "object_obj46", -0.95686883192, -2.20969423593, 0.554543518112);
interpolation_0->add_action(ANIM_ROTATE, "object_obj46", 2.67841370854, -4.4591683802, 5.63624696162);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj47", -0.700726652845, 3.59157501365, 6.41029275613);
interpolation_0->add_action(ANIM_ROTATE, "object_obj47", 4.75064833604, 0.417032092148, 6.82262826981);
interpolation_0->add_action(ANIM_ROTATE, "object_obj47", -8.59827426883, -3.1842492267, 1.56647180534);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj48", -8.21320138399, -4.5528909739, 4.44058072556);
interpolation_0->add_action(ANIM_ROTATE, "object_obj48", 1.95239719026, 1.98377890449, 2.02731369955);
interpolation_0->add_action(ANIM_ROTATE, "object_obj48", 6.24651317706, 7.241907185, 5.75458398333);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj49", -7.95953425812, -5.20701372472, 4.26431057409);
interpolation_0->add_action(ANIM_ROTATE, "object_obj49", 2.06226175298, -2.0157294478, 3.21126508258);
interpolation_0->add_action(ANIM_ROTATE, "object_obj49", -8.44832098368, -6.66867014091, 5.42571257044);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj50", 1.66452319659, 1.50359361984, 1.59129112811);
interpolation_0->add_action(ANIM_ROTATE, "object_obj50", 9.0255381746, 8.34682431353, 5.39912914796);
interpolation_0->add_action(ANIM_ROTATE, "object_obj50", -8.15810953946, 8.70844201156, 3.77726904166);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj51", -4.71696801015, -2.7243843167, 3.89726563579);
interpolation_0->add_action(ANIM_ROTATE, "object_obj51", -9.61659239687, 2.88149380565, 2.08940559588);
interpolation_0->add_action(ANIM_ROTATE, "object_obj51", 0.718917722634, -9.38051925467, 8.72180177213);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj52", 9.8526575609, -7.91654608759, 0.119582005648);
interpolation_0->add_action(ANIM_ROTATE, "object_obj52", 6.87561501679, 1.15275836551, 7.07644860319);
interpolation_0->add_action(ANIM_ROTATE, "object_obj52", 1.30583885331, -0.575591576671, 5.56667804489);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj53", 9.87693294481, -6.73449542668, 4.72605905872);
interpolation_0->add_action(ANIM_ROTATE, "object_obj53", -9.60348715685, -8.89240920755, 8.76014957278);
interpolation_0->add_action(ANIM_ROTATE, "object_obj53", 0.701301071345, -0.182065711124, 0.720247705303);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj54", -4.96733610069, 2.50568439038, 8.50166286765);
interpolation_0->add_action(ANIM_ROTATE, "object_obj54", 3.40221970856, 3.71268390748, 6.10760792619);
interpolation_0->add_action(ANIM_ROTATE, "object_obj54", -4.55625741593, -7.66078195084, 1.7092886501);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj55", -1.05736314868, 7.55096523407, 7.96776979829);
interpolation_0->add_action(ANIM_ROTATE, "object_obj55", 6.72211582956, -8.7897325609, 3.1253453788);
interpolation_0->add_action(ANIM_ROTATE, "object_obj55", 1.56536362463, -6.42197719394, 3.52638510764);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj56", 2.78057997872, 9.32695162623, 1.25710822691);
interpolation_0->add_action(ANIM_ROTATE, "object_obj56", -8.60404216972, -0.462075380264, 1.00391060307);
interpolation_0->add_action(ANIM_ROTATE, "object_obj56", -2.32870229957, -3.9163041543, 2.1656698374);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj57", 5.84761773837, 5.68291900511, 9.13043272665);
interpolation_0->add_action(ANIM_ROTATE, "object_obj57", -6.35549788658, 5.61937473865, 1.62541817807);
interpolation_0->add_action(ANIM_ROTATE, "object_obj57", -0.347378010167, -3.82313182755, 3.59662055484);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj58", 7.04154892337, -5.72919259094, 7.60062924318);
interpolation_0->add_action(ANIM_ROTATE, "object_obj58", -5.15117756443, -1.28433802912, 5.19454885167);
interpolation_0->add_action(ANIM_ROTATE, "object_obj58", -9.46980461137, 5.17708710967, 9.11158972399);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj59", 7.85114121471, -5.34344702807, 6.03426695841);
interpolation_0->add_action(ANIM_ROTATE, "object_obj59", 9.91465975384, 0.314597175189, 7.79175382335);
interpolation_0->add_action(ANIM_ROTATE, "object_obj59", -1.42485262262, 5.438858658, 0.423822627593);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj60", -3.29303077473, -8.14398406698, 1.86113353526);
interpolation_0->add_action(ANIM_ROTATE, "object_obj60", -0.111724464414, -4.22260985195, 6.81834960994);
interpolation_0->add_action(ANIM_ROTATE, "object_obj60", -7.01707370273, -2.89613022929, 1.30850373749);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj61", -4.23866590791, -3.58262237978, 0.755552481474);
interpolation_0->add_action(ANIM_ROTATE, "object_obj61", 9.92243033018, 6.17798789371, 4.39636104545);
interpolation_0->add_action(ANIM_ROTATE, "object_obj61", -4.00936098371, -4.16967095477, 1.55097077656);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj62", 4.92980156118, -1.8486880092, 5.51742920194);
interpolation_0->add_action(ANIM_ROTATE, "object_obj62", 9.19467471917, -7.29628037061, 5.90748136536);
interpolation_0->add_action(ANIM_ROTATE, "object_obj62", -4.36577606026, -1.82854313907, 4.05202008197);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj63", -7.98723209366, 4.90230961712, 2.49676712818);
interpolation_0->add_action(ANIM_ROTATE, "object_obj63", -2.55159231764, -2.28969169805, 7.09659112962);
interpolation_0->add_action(ANIM_ROTATE, "object_obj63", 4.5850698188, 9.14988170805, 2.1568674901);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj64", -1.63164196017, 4.86212385977, 1.79331640695);
interpolation_0->add_action(ANIM_ROTATE, "object_obj64", -0.951686841534, 0.454737062237, 8.33825836709);
interpolation_0->add_action(ANIM_ROTATE, "object_obj64", 2.91383593707, 6.09397563357, 7.00997155717);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj65", 3.45032630453, -5.75242459944, 5.19093435147);
interpolation_0->add_action(ANIM_ROTATE, "object_obj65", 0.344242536761, 0.0787786603258, 3.62560695431);
interpolation_0->add_action(ANIM_ROTATE, "object_obj65", -2.65602791358, -4.21486256441, 4.46353462304);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj66", 0.545416565496, -2.2353658262, 9.05554471687);
interpolation_0->add_action(ANIM_ROTATE, "object_obj66", -6.62520190109, 1.86815843326, 0.480118926189);
interpolation_0->add_action(ANIM_ROTATE, "object_obj66", -2.85646063517, -3.9544440396, 3.55291168017);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj67", 0.786121922972, -7.76261510217, 2.72238775236);
interpolation_0->add_action(ANIM_ROTATE, "object_obj67", 8.70746308034, 0.501804142759, 2.41550087603);
interpolation_0->add_action(ANIM_ROTATE, "object_obj67", 0.302521446055, 6.44277593322, 3.46195282826);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj68", -4.65444060093, 6.46675246793, 3.98663200095);
interpolation_0->add_action(ANIM_ROTATE, "object_obj68", -2.59304613418, 6.68827958879, 9.42834522506);
interpolation_0->add_action(ANIM_ROTATE, "object_obj68", 6.97364260884, 7.9900570328, 0.0224485148872);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj69", -9.25021904053, 7.86752054593, 7.01647610338);
interpolation_0->add_action(ANIM_ROTATE, "object_obj69", -1.69047152362, -8.20129649537, 1.49021073936);
interpolation_0->add_action(ANIM_ROTATE, "object_obj69", 4.86446128201, 2.12546706373, 2.49622816432);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj70", -0.211546957538, 7.17341229625, 2.75287386917);
interpolation_0->add_action(ANIM_ROTATE, "object_obj70", -8.55144060634, 9.72715282643, 9.08079399491);
interpolation_0->add_action(ANIM_ROTATE, "object_obj70", -0.114388485488, 4.22823531585, 2.87600144955);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj71", 2.38480646087, 4.63850207809, 6.63172597253);
interpolation_0->add_action(ANIM_ROTATE, "object_obj71", 5.4446936132, -6.35288643656, 9.22697492964);
interpolation_0->add_action(ANIM_ROTATE, "object_obj71", -6.01663362561, 8.55189945772, 3.80429074087);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj72", 9.75817995755, -8.19818985788, 6.65933000633);
interpolation_0->add_action(ANIM_ROTATE, "object_obj72", 7.13728664018, 3.24665767202, 5.63653819091);
interpolation_0->add_action(ANIM_ROTATE, "object_obj72", 5.02503317352, 5.1308691032, 7.47030738477);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj73", -8.53426221663, 7.62364144418, 1.21371688815);
interpolation_0->add_action(ANIM_ROTATE, "object_obj73", 3.13746223264, 0.0949491461229, 8.69585902668);
interpolation_0->add_action(ANIM_ROTATE, "object_obj73", 1.87223160732, -4.55599458936, 5.90419214686);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj74", 7.10790419584, -5.58853164091, 5.014689153);
interpolation_0->add_action(ANIM_ROTATE, "object_obj74", -8.5335923727, 9.48782140581, 5.52288187142);
interpolation_0->add_action(ANIM_ROTATE, "object_obj74", -4.90386561809, -3.28130259495, 3.48388444003);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj75", -4.43610830408, 1.99372152636, 7.17313148448);
interpolation_0->add_action(ANIM_ROTATE, "object_obj75", -2.71588491073, -5.62594983737, 0.231160908543);
interpolation_0->add_action(ANIM_ROTATE, "object_obj75", 3.04699833879, 1.79259302867, 7.35345808031);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj76", 5.43714148181, 0.810199445301, 8.10763505021);
interpolation_0->add_action(ANIM_ROTATE, "object_obj76", -6.27855078873, -3.52284569842, 9.50662879767);
interpolation_0->add_action(ANIM_ROTATE, "object_obj76", -3.88294857588, -6.41838724678, 7.3521968987);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj77", 0.330156442785, -9.66905284357, 0.146899130176);
interpolation_0->add_action(ANIM_ROTATE, "object_obj77", 3.18122487173, 5.17421051019, 2.89974687236);
interpolation_0->add_action(ANIM_ROTATE, "object_obj77", -9.03008711017, 8.75532076153, 0.727872973736);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj78", 6.22954886481, -5.14488654704, 2.10538864863);
interpolation_0->add_action(ANIM_ROTATE, "object_obj78", 0.714174469583, 3.22087992221, 6.4478829394);
interpolation_0->add_action(ANIM_ROTATE, "object_obj78", 7.70038970279, 5.10221332169, 5.54549169605);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj79", -6.21768389075, -3.24698035746, 0.429534084007);
interpolation_0->add_action(ANIM_ROTATE, "object_obj79", -7.8942104351, 5.05384162, 3.36174413681);
interpolation_0->add_action(ANIM_ROTATE, "object_obj79", 8.0730780978, 6.33120773889, 6.36807242591);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj80", -5.191935954, 2.8557101103, 8.44885923994);
interpolation_0->add_action(ANIM_ROTATE, "object_obj80", 8.18289748665, -3.99402447115, 4.54229692918);
interpolation_0->add_action(ANIM_ROTATE, "object_obj80", 2.24644372259, 6.69956217902, 4.3748761656);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj81", 3.92784447549, -5.7950269995, 5.82984451079);
interpolation_0->add_action(ANIM_ROTATE, "object_obj81", 8.50814698573, -2.65792299905, 5.36402014139);
interpolation_0->add_action(ANIM_ROTATE, "object_obj81", 3.74763526366, 4.60669223579, 0.46784199729);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj82", -3.84313157149, -6.52712189033, 1.55403466708);
interpolation_0->add_action(ANIM_ROTATE, "object_obj82", 0.967644357973, -5.00200247794, 3.67169444587);
interpolation_0->add_action(ANIM_ROTATE, "object_obj82", -6.96601150062, 1.38082133204, 0.630926309698);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj83", 5.09387393479, -8.06051676132, 8.93652900229);
interpolation_0->add_action(ANIM_ROTATE, "object_obj83", -2.84903885402, 2.11600605967, 1.78248048929);
interpolation_0->add_action(ANIM_ROTATE, "object_obj83", 2.72820649598, -7.4901572328, 2.95863475043);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj84", 8.62318725094, -0.309067388058, 0.338931802391);
interpolation_0->add_action(ANIM_ROTATE, "object_obj84", 1.70568651361, 8.50697239355, 4.19747004296);
interpolation_0->add_action(ANIM_ROTATE, "object_obj84", 9.85603021468, 5.07190795574, 5.474812563);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj85", -7.0099579246, -2.11621296479, 5.68523742111);
interpolation_0->add_action(ANIM_ROTATE, "object_obj85", 1.58876317111, 6.83253828129, 1.00088786246);
interpolation_0->add_action(ANIM_ROTATE, "object_obj85", 4.66483312898, -4.40337446233, 4.3891164647);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj86", -6.50701702717, 2.48846021935, 6.3164655977);
interpolation_0->add_action(ANIM_ROTATE, "object_obj86", -7.41671361536, 4.30786046345, 5.60401506198);
interpolation_0->add_action(ANIM_ROTATE, "object_obj86", 6.70735387335, 6.20730735707, 0.526968348025);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj87", -3.200023846, 2.11744608868, 2.6533007603);
interpolation_0->add_action(ANIM_ROTATE, "object_obj87", 8.37102198181, -6.84646678051, 0.280146700092);
interpolation_0->add_action(ANIM_ROTATE, "object_obj87", -7.62795141906, 7.76870448125, 3.34871033329);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj88", -1.69713524867, 0.578887474774, 7.98339888425);
interpolation_0->add_action(ANIM_ROTATE, "object_obj88", 1.99324240716, 6.98241049758, 3.57129670459);
interpolation_0->add_action(ANIM_ROTATE, "object_obj88", -8.73726605037, -0.573726007795, 1.1869139507);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj89", -1.27769297423, 0.592686143788, 7.73392778305);
interpolation_0->add_action(ANIM_ROTATE, "object_obj89", 4.71183596628, -4.67124548691, 5.98216599024);
interpolation_0->add_action(ANIM_ROTATE, "object_obj89", -7.70455641054, 6.75505918184, 7.27040330482);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj90", -6.11916896176, 2.95634670483, 8.66740846699);
interpolation_0->add_action(ANIM_ROTATE, "object_obj90", -7.3737831615, 2.09868223281, 3.98725643055);
interpolation_0->add_action(ANIM_ROTATE, "object_obj90", -4.43695122376, 4.40740204221, 1.35945901363);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj91", 4.28106020404, -4.9475938415, 6.07917022327);
interpolation_0->add_action(ANIM_ROTATE, "object_obj91", 0.752984267491, -9.40829243933, 9.99537993912);
interpolation_0->add_action(ANIM_ROTATE, "object_obj91", -8.20291646835, -2.2145086578, 3.72095126038);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj92", -1.18332432229, 5.67657894966, 6.17203380447);
interpolation_0->add_action(ANIM_ROTATE, "object_obj92", -0.0199381928417, 1.62144321672, 5.49964163948);
interpolation_0->add_action(ANIM_ROTATE, "object_obj92", 0.954074662087, 1.24168019278, 4.72247288591);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj93", -9.79448165505, -2.38680520012, 1.74502762627);
interpolation_0->add_action(ANIM_ROTATE, "object_obj93", 5.32774999624, 8.69060078349, 3.30087897802);
interpolation_0->add_action(ANIM_ROTATE, "object_obj93", -2.57409743448, 2.35381448463, 8.09327310124);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj94", -8.69794920067, 5.2275401001, 9.46487266567);
interpolation_0->add_action(ANIM_ROTATE, "object_obj94", 6.37380170309, 9.8295876039, 3.57093258253);
interpolation_0->add_action(ANIM_ROTATE, "object_obj94", -0.708916005385, 9.83678248294, 8.67626346976);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj95", 3.8346421827, 5.04516079553, 2.89512977872);
interpolation_0->add_action(ANIM_ROTATE, "object_obj95", -4.37968986458, -1.08150271248, 2.5823778623);
interpolation_0->add_action(ANIM_ROTATE, "object_obj95", -1.84042630027, -7.20912471963, 4.36507579075);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj96", -7.73167617091, 5.69456662121, 8.57461207959);
interpolation_0->add_action(ANIM_ROTATE, "object_obj96", 4.82250758411, 3.98299505661, 1.81302984739);
interpolation_0->add_action(ANIM_ROTATE, "object_obj96", -7.89987401267, -7.67992659387, 1.83947081183);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj97", 6.76355169791, 1.5342319606, 0.0921381372126);
interpolation_0->add_action(ANIM_ROTATE, "object_obj97", -8.44039974586, 4.96686646641, 7.67434158635);
interpolation_0->add_action(ANIM_ROTATE, "object_obj97", -9.26795464579, -6.82851283904, 6.93399460324);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj98", -1.65081211563, 8.06799107511, 9.20634118944);
interpolation_0->add_action(ANIM_ROTATE, "object_obj98", 0.683520560508, 2.87096667944, 8.29681333791);
interpolation_0->add_action(ANIM_ROTATE, "object_obj98", 9.65149429741, -9.71150174047, 5.68093911234);
interpolation_0->add_action(ANIM_TRANSLATE, "object_obj99", 0.710440000021, -4.45382724479, 4.55924849202);
interpolation_0->add_action(ANIM_ROTATE, "object_obj99", -7.67971995294, -3.5055056168, 9.1008308324);
interpolation_0->add_action(ANIM_ROTATE, "object_obj99", 6.41451313557, 5.56057054704, 7.74498772601);

Timeline::instance().add_animation(object_setup, 0);
Timeline::instance().add_animation(object_mess, 0);
Timeline::instance().add_camera(object_cam2, 6.6);
Timeline::instance().add_camera(object_cam3, 13.2);
Scene::instance().set_default_camera("object_cam1");

}
