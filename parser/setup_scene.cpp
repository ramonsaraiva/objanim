/*
* ObjAnim - Code Generator
*/

#include "camera/camera.h"
#include "scene/scene.h"
#include "animation/animation.h"
#include "setup_scene.h"

void setup_scene()
{
SceneObject *object_cube_0 = new SceneObject("object_cube_0");
object_cube_0->load_obj("primitives/sphere/sphere.obj");
object_cube_0->build_vbo();
Scene::instance().add_object(object_cube_0->ident(), object_cube_0);

SceneObject *object_cube_1 = new SceneObject("object_cube_1");
object_cube_1->load_obj("primitives/cube/cube.obj");
object_cube_1->build_vbo();
Scene::instance().add_object(object_cube_1->ident(), object_cube_1);

SceneObject *object_cube_2 = new SceneObject("object_cube_2");
object_cube_2->load_obj("primitives/sphere/sphere.obj");
object_cube_2->build_vbo();
Scene::instance().add_object(object_cube_2->ident(), object_cube_2);

SceneObject *object_cube_3 = new SceneObject("object_cube_3");
object_cube_3->load_obj("primitives/sphere/sphere.obj");
object_cube_3->build_vbo();
Scene::instance().add_object(object_cube_3->ident(), object_cube_3);

SceneObject *object_cube_4 = new SceneObject("object_cube_4");
object_cube_4->load_obj("primitives/monkey/monkey.obj");
object_cube_4->build_vbo();
Scene::instance().add_object(object_cube_4->ident(), object_cube_4);

SceneObject *object_cube_5 = new SceneObject("object_cube_5");
object_cube_5->load_obj("primitives/monkey/monkey.obj");
object_cube_5->build_vbo();
Scene::instance().add_object(object_cube_5->ident(), object_cube_5);

SceneObject *object_cube_6 = new SceneObject("object_cube_6");
object_cube_6->load_obj("primitives/monkey/monkey.obj");
object_cube_6->build_vbo();
Scene::instance().add_object(object_cube_6->ident(), object_cube_6);

SceneObject *object_cube_7 = new SceneObject("object_cube_7");
object_cube_7->load_obj("primitives/monkey/monkey.obj");
object_cube_7->build_vbo();
Scene::instance().add_object(object_cube_7->ident(), object_cube_7);

SceneObject *object_cube_8 = new SceneObject("object_cube_8");
object_cube_8->load_obj("primitives/sphere/sphere.obj");
object_cube_8->build_vbo();
Scene::instance().add_object(object_cube_8->ident(), object_cube_8);

SceneObject *object_cube_9 = new SceneObject("object_cube_9");
object_cube_9->load_obj("primitives/torus/torus.obj");
object_cube_9->build_vbo();
Scene::instance().add_object(object_cube_9->ident(), object_cube_9);

SceneObject *object_cube_10 = new SceneObject("object_cube_10");
object_cube_10->load_obj("primitives/torus/torus.obj");
object_cube_10->build_vbo();
Scene::instance().add_object(object_cube_10->ident(), object_cube_10);

SceneObject *object_cube_11 = new SceneObject("object_cube_11");
object_cube_11->load_obj("primitives/torus/torus.obj");
object_cube_11->build_vbo();
Scene::instance().add_object(object_cube_11->ident(), object_cube_11);

SceneObject *object_cube_12 = new SceneObject("object_cube_12");
object_cube_12->load_obj("primitives/cube/cube.obj");
object_cube_12->build_vbo();
Scene::instance().add_object(object_cube_12->ident(), object_cube_12);

SceneObject *object_cube_13 = new SceneObject("object_cube_13");
object_cube_13->load_obj("primitives/cube/cube.obj");
object_cube_13->build_vbo();
Scene::instance().add_object(object_cube_13->ident(), object_cube_13);

SceneObject *object_cube_14 = new SceneObject("object_cube_14");
object_cube_14->load_obj("primitives/sphere/sphere.obj");
object_cube_14->build_vbo();
Scene::instance().add_object(object_cube_14->ident(), object_cube_14);

SceneObject *object_cube_15 = new SceneObject("object_cube_15");
object_cube_15->load_obj("primitives/torus/torus.obj");
object_cube_15->build_vbo();
Scene::instance().add_object(object_cube_15->ident(), object_cube_15);

SceneObject *object_cube_16 = new SceneObject("object_cube_16");
object_cube_16->load_obj("primitives/cube/cube.obj");
object_cube_16->build_vbo();
Scene::instance().add_object(object_cube_16->ident(), object_cube_16);

SceneObject *object_cube_17 = new SceneObject("object_cube_17");
object_cube_17->load_obj("primitives/torus/torus.obj");
object_cube_17->build_vbo();
Scene::instance().add_object(object_cube_17->ident(), object_cube_17);

SceneObject *object_cube_18 = new SceneObject("object_cube_18");
object_cube_18->load_obj("primitives/monkey/monkey.obj");
object_cube_18->build_vbo();
Scene::instance().add_object(object_cube_18->ident(), object_cube_18);

SceneObject *object_cube_19 = new SceneObject("object_cube_19");
object_cube_19->load_obj("primitives/torus/torus.obj");
object_cube_19->build_vbo();
Scene::instance().add_object(object_cube_19->ident(), object_cube_19);

SceneObject *object_cube_20 = new SceneObject("object_cube_20");
object_cube_20->load_obj("primitives/monkey/monkey.obj");
object_cube_20->build_vbo();
Scene::instance().add_object(object_cube_20->ident(), object_cube_20);

SceneObject *object_cube_21 = new SceneObject("object_cube_21");
object_cube_21->load_obj("primitives/sphere/sphere.obj");
object_cube_21->build_vbo();
Scene::instance().add_object(object_cube_21->ident(), object_cube_21);

SceneObject *object_cube_22 = new SceneObject("object_cube_22");
object_cube_22->load_obj("primitives/monkey/monkey.obj");
object_cube_22->build_vbo();
Scene::instance().add_object(object_cube_22->ident(), object_cube_22);

SceneObject *object_cube_23 = new SceneObject("object_cube_23");
object_cube_23->load_obj("primitives/torus/torus.obj");
object_cube_23->build_vbo();
Scene::instance().add_object(object_cube_23->ident(), object_cube_23);

SceneObject *object_cube_24 = new SceneObject("object_cube_24");
object_cube_24->load_obj("primitives/sphere/sphere.obj");
object_cube_24->build_vbo();
Scene::instance().add_object(object_cube_24->ident(), object_cube_24);

SceneObject *object_cube_25 = new SceneObject("object_cube_25");
object_cube_25->load_obj("primitives/cube/cube.obj");
object_cube_25->build_vbo();
Scene::instance().add_object(object_cube_25->ident(), object_cube_25);

SceneObject *object_cube_26 = new SceneObject("object_cube_26");
object_cube_26->load_obj("primitives/monkey/monkey.obj");
object_cube_26->build_vbo();
Scene::instance().add_object(object_cube_26->ident(), object_cube_26);

SceneObject *object_cube_27 = new SceneObject("object_cube_27");
object_cube_27->load_obj("primitives/cube/cube.obj");
object_cube_27->build_vbo();
Scene::instance().add_object(object_cube_27->ident(), object_cube_27);

SceneObject *object_cube_28 = new SceneObject("object_cube_28");
object_cube_28->load_obj("primitives/monkey/monkey.obj");
object_cube_28->build_vbo();
Scene::instance().add_object(object_cube_28->ident(), object_cube_28);

SceneObject *object_cube_29 = new SceneObject("object_cube_29");
object_cube_29->load_obj("primitives/torus/torus.obj");
object_cube_29->build_vbo();
Scene::instance().add_object(object_cube_29->ident(), object_cube_29);

SceneObject *object_cube_30 = new SceneObject("object_cube_30");
object_cube_30->load_obj("primitives/torus/torus.obj");
object_cube_30->build_vbo();
Scene::instance().add_object(object_cube_30->ident(), object_cube_30);

SceneObject *object_cube_31 = new SceneObject("object_cube_31");
object_cube_31->load_obj("primitives/torus/torus.obj");
object_cube_31->build_vbo();
Scene::instance().add_object(object_cube_31->ident(), object_cube_31);

SceneObject *object_cube_32 = new SceneObject("object_cube_32");
object_cube_32->load_obj("primitives/cube/cube.obj");
object_cube_32->build_vbo();
Scene::instance().add_object(object_cube_32->ident(), object_cube_32);

SceneObject *object_cube_33 = new SceneObject("object_cube_33");
object_cube_33->load_obj("primitives/torus/torus.obj");
object_cube_33->build_vbo();
Scene::instance().add_object(object_cube_33->ident(), object_cube_33);

SceneObject *object_cube_34 = new SceneObject("object_cube_34");
object_cube_34->load_obj("primitives/monkey/monkey.obj");
object_cube_34->build_vbo();
Scene::instance().add_object(object_cube_34->ident(), object_cube_34);

SceneObject *object_cube_35 = new SceneObject("object_cube_35");
object_cube_35->load_obj("primitives/sphere/sphere.obj");
object_cube_35->build_vbo();
Scene::instance().add_object(object_cube_35->ident(), object_cube_35);

SceneObject *object_cube_36 = new SceneObject("object_cube_36");
object_cube_36->load_obj("primitives/torus/torus.obj");
object_cube_36->build_vbo();
Scene::instance().add_object(object_cube_36->ident(), object_cube_36);

SceneObject *object_cube_37 = new SceneObject("object_cube_37");
object_cube_37->load_obj("primitives/torus/torus.obj");
object_cube_37->build_vbo();
Scene::instance().add_object(object_cube_37->ident(), object_cube_37);

SceneObject *object_cube_38 = new SceneObject("object_cube_38");
object_cube_38->load_obj("primitives/sphere/sphere.obj");
object_cube_38->build_vbo();
Scene::instance().add_object(object_cube_38->ident(), object_cube_38);

SceneObject *object_cube_39 = new SceneObject("object_cube_39");
object_cube_39->load_obj("primitives/cube/cube.obj");
object_cube_39->build_vbo();
Scene::instance().add_object(object_cube_39->ident(), object_cube_39);

SceneObject *object_cube_40 = new SceneObject("object_cube_40");
object_cube_40->load_obj("primitives/cube/cube.obj");
object_cube_40->build_vbo();
Scene::instance().add_object(object_cube_40->ident(), object_cube_40);

SceneObject *object_cube_41 = new SceneObject("object_cube_41");
object_cube_41->load_obj("primitives/sphere/sphere.obj");
object_cube_41->build_vbo();
Scene::instance().add_object(object_cube_41->ident(), object_cube_41);

SceneObject *object_cube_42 = new SceneObject("object_cube_42");
object_cube_42->load_obj("primitives/cube/cube.obj");
object_cube_42->build_vbo();
Scene::instance().add_object(object_cube_42->ident(), object_cube_42);

SceneObject *object_cube_43 = new SceneObject("object_cube_43");
object_cube_43->load_obj("primitives/cube/cube.obj");
object_cube_43->build_vbo();
Scene::instance().add_object(object_cube_43->ident(), object_cube_43);

SceneObject *object_cube_44 = new SceneObject("object_cube_44");
object_cube_44->load_obj("primitives/monkey/monkey.obj");
object_cube_44->build_vbo();
Scene::instance().add_object(object_cube_44->ident(), object_cube_44);

SceneObject *object_cube_45 = new SceneObject("object_cube_45");
object_cube_45->load_obj("primitives/monkey/monkey.obj");
object_cube_45->build_vbo();
Scene::instance().add_object(object_cube_45->ident(), object_cube_45);

SceneObject *object_cube_46 = new SceneObject("object_cube_46");
object_cube_46->load_obj("primitives/torus/torus.obj");
object_cube_46->build_vbo();
Scene::instance().add_object(object_cube_46->ident(), object_cube_46);

SceneObject *object_cube_47 = new SceneObject("object_cube_47");
object_cube_47->load_obj("primitives/cube/cube.obj");
object_cube_47->build_vbo();
Scene::instance().add_object(object_cube_47->ident(), object_cube_47);

SceneObject *object_cube_48 = new SceneObject("object_cube_48");
object_cube_48->load_obj("primitives/torus/torus.obj");
object_cube_48->build_vbo();
Scene::instance().add_object(object_cube_48->ident(), object_cube_48);

SceneObject *object_cube_49 = new SceneObject("object_cube_49");
object_cube_49->load_obj("primitives/torus/torus.obj");
object_cube_49->build_vbo();
Scene::instance().add_object(object_cube_49->ident(), object_cube_49);

SceneObject *object_cube_50 = new SceneObject("object_cube_50");
object_cube_50->load_obj("primitives/sphere/sphere.obj");
object_cube_50->build_vbo();
Scene::instance().add_object(object_cube_50->ident(), object_cube_50);

SceneObject *object_cube_51 = new SceneObject("object_cube_51");
object_cube_51->load_obj("primitives/cube/cube.obj");
object_cube_51->build_vbo();
Scene::instance().add_object(object_cube_51->ident(), object_cube_51);

SceneObject *object_cube_52 = new SceneObject("object_cube_52");
object_cube_52->load_obj("primitives/cube/cube.obj");
object_cube_52->build_vbo();
Scene::instance().add_object(object_cube_52->ident(), object_cube_52);

SceneObject *object_cube_53 = new SceneObject("object_cube_53");
object_cube_53->load_obj("primitives/cube/cube.obj");
object_cube_53->build_vbo();
Scene::instance().add_object(object_cube_53->ident(), object_cube_53);

SceneObject *object_cube_54 = new SceneObject("object_cube_54");
object_cube_54->load_obj("primitives/cube/cube.obj");
object_cube_54->build_vbo();
Scene::instance().add_object(object_cube_54->ident(), object_cube_54);

SceneObject *object_cube_55 = new SceneObject("object_cube_55");
object_cube_55->load_obj("primitives/cube/cube.obj");
object_cube_55->build_vbo();
Scene::instance().add_object(object_cube_55->ident(), object_cube_55);

SceneObject *object_cube_56 = new SceneObject("object_cube_56");
object_cube_56->load_obj("primitives/torus/torus.obj");
object_cube_56->build_vbo();
Scene::instance().add_object(object_cube_56->ident(), object_cube_56);

SceneObject *object_cube_57 = new SceneObject("object_cube_57");
object_cube_57->load_obj("primitives/torus/torus.obj");
object_cube_57->build_vbo();
Scene::instance().add_object(object_cube_57->ident(), object_cube_57);

SceneObject *object_cube_58 = new SceneObject("object_cube_58");
object_cube_58->load_obj("primitives/sphere/sphere.obj");
object_cube_58->build_vbo();
Scene::instance().add_object(object_cube_58->ident(), object_cube_58);

SceneObject *object_cube_59 = new SceneObject("object_cube_59");
object_cube_59->load_obj("primitives/torus/torus.obj");
object_cube_59->build_vbo();
Scene::instance().add_object(object_cube_59->ident(), object_cube_59);

SceneObject *object_cube_60 = new SceneObject("object_cube_60");
object_cube_60->load_obj("primitives/sphere/sphere.obj");
object_cube_60->build_vbo();
Scene::instance().add_object(object_cube_60->ident(), object_cube_60);

SceneObject *object_cube_61 = new SceneObject("object_cube_61");
object_cube_61->load_obj("primitives/sphere/sphere.obj");
object_cube_61->build_vbo();
Scene::instance().add_object(object_cube_61->ident(), object_cube_61);

SceneObject *object_cube_62 = new SceneObject("object_cube_62");
object_cube_62->load_obj("primitives/monkey/monkey.obj");
object_cube_62->build_vbo();
Scene::instance().add_object(object_cube_62->ident(), object_cube_62);

SceneObject *object_cube_63 = new SceneObject("object_cube_63");
object_cube_63->load_obj("primitives/torus/torus.obj");
object_cube_63->build_vbo();
Scene::instance().add_object(object_cube_63->ident(), object_cube_63);

SceneObject *object_cube_64 = new SceneObject("object_cube_64");
object_cube_64->load_obj("primitives/torus/torus.obj");
object_cube_64->build_vbo();
Scene::instance().add_object(object_cube_64->ident(), object_cube_64);

SceneObject *object_cube_65 = new SceneObject("object_cube_65");
object_cube_65->load_obj("primitives/cube/cube.obj");
object_cube_65->build_vbo();
Scene::instance().add_object(object_cube_65->ident(), object_cube_65);

SceneObject *object_cube_66 = new SceneObject("object_cube_66");
object_cube_66->load_obj("primitives/sphere/sphere.obj");
object_cube_66->build_vbo();
Scene::instance().add_object(object_cube_66->ident(), object_cube_66);

SceneObject *object_cube_67 = new SceneObject("object_cube_67");
object_cube_67->load_obj("primitives/monkey/monkey.obj");
object_cube_67->build_vbo();
Scene::instance().add_object(object_cube_67->ident(), object_cube_67);

SceneObject *object_cube_68 = new SceneObject("object_cube_68");
object_cube_68->load_obj("primitives/sphere/sphere.obj");
object_cube_68->build_vbo();
Scene::instance().add_object(object_cube_68->ident(), object_cube_68);

SceneObject *object_cube_69 = new SceneObject("object_cube_69");
object_cube_69->load_obj("primitives/monkey/monkey.obj");
object_cube_69->build_vbo();
Scene::instance().add_object(object_cube_69->ident(), object_cube_69);

SceneObject *object_cube_70 = new SceneObject("object_cube_70");
object_cube_70->load_obj("primitives/sphere/sphere.obj");
object_cube_70->build_vbo();
Scene::instance().add_object(object_cube_70->ident(), object_cube_70);

SceneObject *object_cube_71 = new SceneObject("object_cube_71");
object_cube_71->load_obj("primitives/monkey/monkey.obj");
object_cube_71->build_vbo();
Scene::instance().add_object(object_cube_71->ident(), object_cube_71);

SceneObject *object_cube_72 = new SceneObject("object_cube_72");
object_cube_72->load_obj("primitives/torus/torus.obj");
object_cube_72->build_vbo();
Scene::instance().add_object(object_cube_72->ident(), object_cube_72);

SceneObject *object_cube_73 = new SceneObject("object_cube_73");
object_cube_73->load_obj("primitives/sphere/sphere.obj");
object_cube_73->build_vbo();
Scene::instance().add_object(object_cube_73->ident(), object_cube_73);

SceneObject *object_cube_74 = new SceneObject("object_cube_74");
object_cube_74->load_obj("primitives/cube/cube.obj");
object_cube_74->build_vbo();
Scene::instance().add_object(object_cube_74->ident(), object_cube_74);

SceneObject *object_cube_75 = new SceneObject("object_cube_75");
object_cube_75->load_obj("primitives/cube/cube.obj");
object_cube_75->build_vbo();
Scene::instance().add_object(object_cube_75->ident(), object_cube_75);

SceneObject *object_cube_76 = new SceneObject("object_cube_76");
object_cube_76->load_obj("primitives/sphere/sphere.obj");
object_cube_76->build_vbo();
Scene::instance().add_object(object_cube_76->ident(), object_cube_76);

SceneObject *object_cube_77 = new SceneObject("object_cube_77");
object_cube_77->load_obj("primitives/torus/torus.obj");
object_cube_77->build_vbo();
Scene::instance().add_object(object_cube_77->ident(), object_cube_77);

SceneObject *object_cube_78 = new SceneObject("object_cube_78");
object_cube_78->load_obj("primitives/torus/torus.obj");
object_cube_78->build_vbo();
Scene::instance().add_object(object_cube_78->ident(), object_cube_78);

SceneObject *object_cube_79 = new SceneObject("object_cube_79");
object_cube_79->load_obj("primitives/cube/cube.obj");
object_cube_79->build_vbo();
Scene::instance().add_object(object_cube_79->ident(), object_cube_79);

SceneObject *object_cube_80 = new SceneObject("object_cube_80");
object_cube_80->load_obj("primitives/torus/torus.obj");
object_cube_80->build_vbo();
Scene::instance().add_object(object_cube_80->ident(), object_cube_80);

SceneObject *object_cube_81 = new SceneObject("object_cube_81");
object_cube_81->load_obj("primitives/monkey/monkey.obj");
object_cube_81->build_vbo();
Scene::instance().add_object(object_cube_81->ident(), object_cube_81);

SceneObject *object_cube_82 = new SceneObject("object_cube_82");
object_cube_82->load_obj("primitives/monkey/monkey.obj");
object_cube_82->build_vbo();
Scene::instance().add_object(object_cube_82->ident(), object_cube_82);

SceneObject *object_cube_83 = new SceneObject("object_cube_83");
object_cube_83->load_obj("primitives/cube/cube.obj");
object_cube_83->build_vbo();
Scene::instance().add_object(object_cube_83->ident(), object_cube_83);

SceneObject *object_cube_84 = new SceneObject("object_cube_84");
object_cube_84->load_obj("primitives/sphere/sphere.obj");
object_cube_84->build_vbo();
Scene::instance().add_object(object_cube_84->ident(), object_cube_84);

SceneObject *object_cube_85 = new SceneObject("object_cube_85");
object_cube_85->load_obj("primitives/monkey/monkey.obj");
object_cube_85->build_vbo();
Scene::instance().add_object(object_cube_85->ident(), object_cube_85);

SceneObject *object_cube_86 = new SceneObject("object_cube_86");
object_cube_86->load_obj("primitives/monkey/monkey.obj");
object_cube_86->build_vbo();
Scene::instance().add_object(object_cube_86->ident(), object_cube_86);

SceneObject *object_cube_87 = new SceneObject("object_cube_87");
object_cube_87->load_obj("primitives/monkey/monkey.obj");
object_cube_87->build_vbo();
Scene::instance().add_object(object_cube_87->ident(), object_cube_87);

SceneObject *object_cube_88 = new SceneObject("object_cube_88");
object_cube_88->load_obj("primitives/torus/torus.obj");
object_cube_88->build_vbo();
Scene::instance().add_object(object_cube_88->ident(), object_cube_88);

SceneObject *object_cube_89 = new SceneObject("object_cube_89");
object_cube_89->load_obj("primitives/cube/cube.obj");
object_cube_89->build_vbo();
Scene::instance().add_object(object_cube_89->ident(), object_cube_89);

SceneObject *object_cube_90 = new SceneObject("object_cube_90");
object_cube_90->load_obj("primitives/sphere/sphere.obj");
object_cube_90->build_vbo();
Scene::instance().add_object(object_cube_90->ident(), object_cube_90);

SceneObject *object_cube_91 = new SceneObject("object_cube_91");
object_cube_91->load_obj("primitives/sphere/sphere.obj");
object_cube_91->build_vbo();
Scene::instance().add_object(object_cube_91->ident(), object_cube_91);

SceneObject *object_cube_92 = new SceneObject("object_cube_92");
object_cube_92->load_obj("primitives/monkey/monkey.obj");
object_cube_92->build_vbo();
Scene::instance().add_object(object_cube_92->ident(), object_cube_92);

SceneObject *object_cube_93 = new SceneObject("object_cube_93");
object_cube_93->load_obj("primitives/monkey/monkey.obj");
object_cube_93->build_vbo();
Scene::instance().add_object(object_cube_93->ident(), object_cube_93);

SceneObject *object_cube_94 = new SceneObject("object_cube_94");
object_cube_94->load_obj("primitives/monkey/monkey.obj");
object_cube_94->build_vbo();
Scene::instance().add_object(object_cube_94->ident(), object_cube_94);

SceneObject *object_cube_95 = new SceneObject("object_cube_95");
object_cube_95->load_obj("primitives/sphere/sphere.obj");
object_cube_95->build_vbo();
Scene::instance().add_object(object_cube_95->ident(), object_cube_95);

SceneObject *object_cube_96 = new SceneObject("object_cube_96");
object_cube_96->load_obj("primitives/torus/torus.obj");
object_cube_96->build_vbo();
Scene::instance().add_object(object_cube_96->ident(), object_cube_96);

SceneObject *object_cube_97 = new SceneObject("object_cube_97");
object_cube_97->load_obj("primitives/torus/torus.obj");
object_cube_97->build_vbo();
Scene::instance().add_object(object_cube_97->ident(), object_cube_97);

SceneObject *object_cube_98 = new SceneObject("object_cube_98");
object_cube_98->load_obj("primitives/sphere/sphere.obj");
object_cube_98->build_vbo();
Scene::instance().add_object(object_cube_98->ident(), object_cube_98);

SceneObject *object_cube_99 = new SceneObject("object_cube_99");
object_cube_99->load_obj("primitives/monkey/monkey.obj");
object_cube_99->build_vbo();
Scene::instance().add_object(object_cube_99->ident(), object_cube_99);

SceneObject *object_cube_100 = new SceneObject("object_cube_100");
object_cube_100->load_obj("primitives/torus/torus.obj");
object_cube_100->build_vbo();
Scene::instance().add_object(object_cube_100->ident(), object_cube_100);

SceneObject *object_cube_101 = new SceneObject("object_cube_101");
object_cube_101->load_obj("primitives/monkey/monkey.obj");
object_cube_101->build_vbo();
Scene::instance().add_object(object_cube_101->ident(), object_cube_101);

SceneObject *object_cube_102 = new SceneObject("object_cube_102");
object_cube_102->load_obj("primitives/cube/cube.obj");
object_cube_102->build_vbo();
Scene::instance().add_object(object_cube_102->ident(), object_cube_102);

SceneObject *object_cube_103 = new SceneObject("object_cube_103");
object_cube_103->load_obj("primitives/cube/cube.obj");
object_cube_103->build_vbo();
Scene::instance().add_object(object_cube_103->ident(), object_cube_103);

SceneObject *object_cube_104 = new SceneObject("object_cube_104");
object_cube_104->load_obj("primitives/cube/cube.obj");
object_cube_104->build_vbo();
Scene::instance().add_object(object_cube_104->ident(), object_cube_104);

SceneObject *object_cube_105 = new SceneObject("object_cube_105");
object_cube_105->load_obj("primitives/monkey/monkey.obj");
object_cube_105->build_vbo();
Scene::instance().add_object(object_cube_105->ident(), object_cube_105);

SceneObject *object_cube_106 = new SceneObject("object_cube_106");
object_cube_106->load_obj("primitives/cube/cube.obj");
object_cube_106->build_vbo();
Scene::instance().add_object(object_cube_106->ident(), object_cube_106);

SceneObject *object_cube_107 = new SceneObject("object_cube_107");
object_cube_107->load_obj("primitives/monkey/monkey.obj");
object_cube_107->build_vbo();
Scene::instance().add_object(object_cube_107->ident(), object_cube_107);

SceneObject *object_cube_108 = new SceneObject("object_cube_108");
object_cube_108->load_obj("primitives/monkey/monkey.obj");
object_cube_108->build_vbo();
Scene::instance().add_object(object_cube_108->ident(), object_cube_108);

SceneObject *object_cube_109 = new SceneObject("object_cube_109");
object_cube_109->load_obj("primitives/monkey/monkey.obj");
object_cube_109->build_vbo();
Scene::instance().add_object(object_cube_109->ident(), object_cube_109);

SceneObject *object_cube_110 = new SceneObject("object_cube_110");
object_cube_110->load_obj("primitives/torus/torus.obj");
object_cube_110->build_vbo();
Scene::instance().add_object(object_cube_110->ident(), object_cube_110);

SceneObject *object_cube_111 = new SceneObject("object_cube_111");
object_cube_111->load_obj("primitives/torus/torus.obj");
object_cube_111->build_vbo();
Scene::instance().add_object(object_cube_111->ident(), object_cube_111);

SceneObject *object_cube_112 = new SceneObject("object_cube_112");
object_cube_112->load_obj("primitives/sphere/sphere.obj");
object_cube_112->build_vbo();
Scene::instance().add_object(object_cube_112->ident(), object_cube_112);

SceneObject *object_cube_113 = new SceneObject("object_cube_113");
object_cube_113->load_obj("primitives/monkey/monkey.obj");
object_cube_113->build_vbo();
Scene::instance().add_object(object_cube_113->ident(), object_cube_113);

SceneObject *object_cube_114 = new SceneObject("object_cube_114");
object_cube_114->load_obj("primitives/sphere/sphere.obj");
object_cube_114->build_vbo();
Scene::instance().add_object(object_cube_114->ident(), object_cube_114);

SceneObject *object_cube_115 = new SceneObject("object_cube_115");
object_cube_115->load_obj("primitives/cube/cube.obj");
object_cube_115->build_vbo();
Scene::instance().add_object(object_cube_115->ident(), object_cube_115);

SceneObject *object_cube_116 = new SceneObject("object_cube_116");
object_cube_116->load_obj("primitives/torus/torus.obj");
object_cube_116->build_vbo();
Scene::instance().add_object(object_cube_116->ident(), object_cube_116);

SceneObject *object_cube_117 = new SceneObject("object_cube_117");
object_cube_117->load_obj("primitives/monkey/monkey.obj");
object_cube_117->build_vbo();
Scene::instance().add_object(object_cube_117->ident(), object_cube_117);

SceneObject *object_cube_118 = new SceneObject("object_cube_118");
object_cube_118->load_obj("primitives/torus/torus.obj");
object_cube_118->build_vbo();
Scene::instance().add_object(object_cube_118->ident(), object_cube_118);

SceneObject *object_cube_119 = new SceneObject("object_cube_119");
object_cube_119->load_obj("primitives/cube/cube.obj");
object_cube_119->build_vbo();
Scene::instance().add_object(object_cube_119->ident(), object_cube_119);

SceneObject *object_cube_120 = new SceneObject("object_cube_120");
object_cube_120->load_obj("primitives/monkey/monkey.obj");
object_cube_120->build_vbo();
Scene::instance().add_object(object_cube_120->ident(), object_cube_120);

SceneObject *object_cube_121 = new SceneObject("object_cube_121");
object_cube_121->load_obj("primitives/sphere/sphere.obj");
object_cube_121->build_vbo();
Scene::instance().add_object(object_cube_121->ident(), object_cube_121);

SceneObject *object_cube_122 = new SceneObject("object_cube_122");
object_cube_122->load_obj("primitives/torus/torus.obj");
object_cube_122->build_vbo();
Scene::instance().add_object(object_cube_122->ident(), object_cube_122);

SceneObject *object_cube_123 = new SceneObject("object_cube_123");
object_cube_123->load_obj("primitives/monkey/monkey.obj");
object_cube_123->build_vbo();
Scene::instance().add_object(object_cube_123->ident(), object_cube_123);

SceneObject *object_cube_124 = new SceneObject("object_cube_124");
object_cube_124->load_obj("primitives/monkey/monkey.obj");
object_cube_124->build_vbo();
Scene::instance().add_object(object_cube_124->ident(), object_cube_124);

SceneObject *object_cube_125 = new SceneObject("object_cube_125");
object_cube_125->load_obj("primitives/sphere/sphere.obj");
object_cube_125->build_vbo();
Scene::instance().add_object(object_cube_125->ident(), object_cube_125);

SceneObject *object_cube_126 = new SceneObject("object_cube_126");
object_cube_126->load_obj("primitives/sphere/sphere.obj");
object_cube_126->build_vbo();
Scene::instance().add_object(object_cube_126->ident(), object_cube_126);

SceneObject *object_cube_127 = new SceneObject("object_cube_127");
object_cube_127->load_obj("primitives/monkey/monkey.obj");
object_cube_127->build_vbo();
Scene::instance().add_object(object_cube_127->ident(), object_cube_127);

SceneObject *object_cube_128 = new SceneObject("object_cube_128");
object_cube_128->load_obj("primitives/monkey/monkey.obj");
object_cube_128->build_vbo();
Scene::instance().add_object(object_cube_128->ident(), object_cube_128);

SceneObject *object_cube_129 = new SceneObject("object_cube_129");
object_cube_129->load_obj("primitives/sphere/sphere.obj");
object_cube_129->build_vbo();
Scene::instance().add_object(object_cube_129->ident(), object_cube_129);

SceneObject *object_cube_130 = new SceneObject("object_cube_130");
object_cube_130->load_obj("primitives/torus/torus.obj");
object_cube_130->build_vbo();
Scene::instance().add_object(object_cube_130->ident(), object_cube_130);

SceneObject *object_cube_131 = new SceneObject("object_cube_131");
object_cube_131->load_obj("primitives/sphere/sphere.obj");
object_cube_131->build_vbo();
Scene::instance().add_object(object_cube_131->ident(), object_cube_131);

SceneObject *object_cube_132 = new SceneObject("object_cube_132");
object_cube_132->load_obj("primitives/cube/cube.obj");
object_cube_132->build_vbo();
Scene::instance().add_object(object_cube_132->ident(), object_cube_132);

SceneObject *object_cube_133 = new SceneObject("object_cube_133");
object_cube_133->load_obj("primitives/monkey/monkey.obj");
object_cube_133->build_vbo();
Scene::instance().add_object(object_cube_133->ident(), object_cube_133);

SceneObject *object_cube_134 = new SceneObject("object_cube_134");
object_cube_134->load_obj("primitives/torus/torus.obj");
object_cube_134->build_vbo();
Scene::instance().add_object(object_cube_134->ident(), object_cube_134);

SceneObject *object_cube_135 = new SceneObject("object_cube_135");
object_cube_135->load_obj("primitives/monkey/monkey.obj");
object_cube_135->build_vbo();
Scene::instance().add_object(object_cube_135->ident(), object_cube_135);

SceneObject *object_cube_136 = new SceneObject("object_cube_136");
object_cube_136->load_obj("primitives/sphere/sphere.obj");
object_cube_136->build_vbo();
Scene::instance().add_object(object_cube_136->ident(), object_cube_136);

SceneObject *object_cube_137 = new SceneObject("object_cube_137");
object_cube_137->load_obj("primitives/monkey/monkey.obj");
object_cube_137->build_vbo();
Scene::instance().add_object(object_cube_137->ident(), object_cube_137);

SceneObject *object_cube_138 = new SceneObject("object_cube_138");
object_cube_138->load_obj("primitives/sphere/sphere.obj");
object_cube_138->build_vbo();
Scene::instance().add_object(object_cube_138->ident(), object_cube_138);

SceneObject *object_cube_139 = new SceneObject("object_cube_139");
object_cube_139->load_obj("primitives/monkey/monkey.obj");
object_cube_139->build_vbo();
Scene::instance().add_object(object_cube_139->ident(), object_cube_139);

SceneObject *object_cube_140 = new SceneObject("object_cube_140");
object_cube_140->load_obj("primitives/cube/cube.obj");
object_cube_140->build_vbo();
Scene::instance().add_object(object_cube_140->ident(), object_cube_140);

SceneObject *object_cube_141 = new SceneObject("object_cube_141");
object_cube_141->load_obj("primitives/sphere/sphere.obj");
object_cube_141->build_vbo();
Scene::instance().add_object(object_cube_141->ident(), object_cube_141);

SceneObject *object_cube_142 = new SceneObject("object_cube_142");
object_cube_142->load_obj("primitives/torus/torus.obj");
object_cube_142->build_vbo();
Scene::instance().add_object(object_cube_142->ident(), object_cube_142);

SceneObject *object_cube_143 = new SceneObject("object_cube_143");
object_cube_143->load_obj("primitives/cube/cube.obj");
object_cube_143->build_vbo();
Scene::instance().add_object(object_cube_143->ident(), object_cube_143);

SceneObject *object_cube_144 = new SceneObject("object_cube_144");
object_cube_144->load_obj("primitives/monkey/monkey.obj");
object_cube_144->build_vbo();
Scene::instance().add_object(object_cube_144->ident(), object_cube_144);

SceneObject *object_cube_145 = new SceneObject("object_cube_145");
object_cube_145->load_obj("primitives/cube/cube.obj");
object_cube_145->build_vbo();
Scene::instance().add_object(object_cube_145->ident(), object_cube_145);

SceneObject *object_cube_146 = new SceneObject("object_cube_146");
object_cube_146->load_obj("primitives/torus/torus.obj");
object_cube_146->build_vbo();
Scene::instance().add_object(object_cube_146->ident(), object_cube_146);

SceneObject *object_cube_147 = new SceneObject("object_cube_147");
object_cube_147->load_obj("primitives/sphere/sphere.obj");
object_cube_147->build_vbo();
Scene::instance().add_object(object_cube_147->ident(), object_cube_147);

SceneObject *object_cube_148 = new SceneObject("object_cube_148");
object_cube_148->load_obj("primitives/cube/cube.obj");
object_cube_148->build_vbo();
Scene::instance().add_object(object_cube_148->ident(), object_cube_148);

SceneObject *object_cube_149 = new SceneObject("object_cube_149");
object_cube_149->load_obj("primitives/sphere/sphere.obj");
object_cube_149->build_vbo();
Scene::instance().add_object(object_cube_149->ident(), object_cube_149);

SceneObject *object_cube_150 = new SceneObject("object_cube_150");
object_cube_150->load_obj("primitives/monkey/monkey.obj");
object_cube_150->build_vbo();
Scene::instance().add_object(object_cube_150->ident(), object_cube_150);

SceneObject *object_cube_151 = new SceneObject("object_cube_151");
object_cube_151->load_obj("primitives/sphere/sphere.obj");
object_cube_151->build_vbo();
Scene::instance().add_object(object_cube_151->ident(), object_cube_151);

SceneObject *object_cube_152 = new SceneObject("object_cube_152");
object_cube_152->load_obj("primitives/sphere/sphere.obj");
object_cube_152->build_vbo();
Scene::instance().add_object(object_cube_152->ident(), object_cube_152);

SceneObject *object_cube_153 = new SceneObject("object_cube_153");
object_cube_153->load_obj("primitives/monkey/monkey.obj");
object_cube_153->build_vbo();
Scene::instance().add_object(object_cube_153->ident(), object_cube_153);

SceneObject *object_cube_154 = new SceneObject("object_cube_154");
object_cube_154->load_obj("primitives/torus/torus.obj");
object_cube_154->build_vbo();
Scene::instance().add_object(object_cube_154->ident(), object_cube_154);

SceneObject *object_cube_155 = new SceneObject("object_cube_155");
object_cube_155->load_obj("primitives/torus/torus.obj");
object_cube_155->build_vbo();
Scene::instance().add_object(object_cube_155->ident(), object_cube_155);

SceneObject *object_cube_156 = new SceneObject("object_cube_156");
object_cube_156->load_obj("primitives/torus/torus.obj");
object_cube_156->build_vbo();
Scene::instance().add_object(object_cube_156->ident(), object_cube_156);

SceneObject *object_cube_157 = new SceneObject("object_cube_157");
object_cube_157->load_obj("primitives/monkey/monkey.obj");
object_cube_157->build_vbo();
Scene::instance().add_object(object_cube_157->ident(), object_cube_157);

SceneObject *object_cube_158 = new SceneObject("object_cube_158");
object_cube_158->load_obj("primitives/torus/torus.obj");
object_cube_158->build_vbo();
Scene::instance().add_object(object_cube_158->ident(), object_cube_158);

SceneObject *object_cube_159 = new SceneObject("object_cube_159");
object_cube_159->load_obj("primitives/torus/torus.obj");
object_cube_159->build_vbo();
Scene::instance().add_object(object_cube_159->ident(), object_cube_159);

SceneObject *object_cube_160 = new SceneObject("object_cube_160");
object_cube_160->load_obj("primitives/sphere/sphere.obj");
object_cube_160->build_vbo();
Scene::instance().add_object(object_cube_160->ident(), object_cube_160);

SceneObject *object_cube_161 = new SceneObject("object_cube_161");
object_cube_161->load_obj("primitives/sphere/sphere.obj");
object_cube_161->build_vbo();
Scene::instance().add_object(object_cube_161->ident(), object_cube_161);

SceneObject *object_cube_162 = new SceneObject("object_cube_162");
object_cube_162->load_obj("primitives/sphere/sphere.obj");
object_cube_162->build_vbo();
Scene::instance().add_object(object_cube_162->ident(), object_cube_162);

SceneObject *object_cube_163 = new SceneObject("object_cube_163");
object_cube_163->load_obj("primitives/monkey/monkey.obj");
object_cube_163->build_vbo();
Scene::instance().add_object(object_cube_163->ident(), object_cube_163);

SceneObject *object_cube_164 = new SceneObject("object_cube_164");
object_cube_164->load_obj("primitives/torus/torus.obj");
object_cube_164->build_vbo();
Scene::instance().add_object(object_cube_164->ident(), object_cube_164);

SceneObject *object_cube_165 = new SceneObject("object_cube_165");
object_cube_165->load_obj("primitives/torus/torus.obj");
object_cube_165->build_vbo();
Scene::instance().add_object(object_cube_165->ident(), object_cube_165);

SceneObject *object_cube_166 = new SceneObject("object_cube_166");
object_cube_166->load_obj("primitives/monkey/monkey.obj");
object_cube_166->build_vbo();
Scene::instance().add_object(object_cube_166->ident(), object_cube_166);

SceneObject *object_cube_167 = new SceneObject("object_cube_167");
object_cube_167->load_obj("primitives/monkey/monkey.obj");
object_cube_167->build_vbo();
Scene::instance().add_object(object_cube_167->ident(), object_cube_167);

SceneObject *object_cube_168 = new SceneObject("object_cube_168");
object_cube_168->load_obj("primitives/sphere/sphere.obj");
object_cube_168->build_vbo();
Scene::instance().add_object(object_cube_168->ident(), object_cube_168);

SceneObject *object_cube_169 = new SceneObject("object_cube_169");
object_cube_169->load_obj("primitives/torus/torus.obj");
object_cube_169->build_vbo();
Scene::instance().add_object(object_cube_169->ident(), object_cube_169);

SceneObject *object_cube_170 = new SceneObject("object_cube_170");
object_cube_170->load_obj("primitives/monkey/monkey.obj");
object_cube_170->build_vbo();
Scene::instance().add_object(object_cube_170->ident(), object_cube_170);

SceneObject *object_cube_171 = new SceneObject("object_cube_171");
object_cube_171->load_obj("primitives/sphere/sphere.obj");
object_cube_171->build_vbo();
Scene::instance().add_object(object_cube_171->ident(), object_cube_171);

SceneObject *object_cube_172 = new SceneObject("object_cube_172");
object_cube_172->load_obj("primitives/torus/torus.obj");
object_cube_172->build_vbo();
Scene::instance().add_object(object_cube_172->ident(), object_cube_172);

SceneObject *object_cube_173 = new SceneObject("object_cube_173");
object_cube_173->load_obj("primitives/cube/cube.obj");
object_cube_173->build_vbo();
Scene::instance().add_object(object_cube_173->ident(), object_cube_173);

SceneObject *object_cube_174 = new SceneObject("object_cube_174");
object_cube_174->load_obj("primitives/torus/torus.obj");
object_cube_174->build_vbo();
Scene::instance().add_object(object_cube_174->ident(), object_cube_174);

SceneObject *object_cube_175 = new SceneObject("object_cube_175");
object_cube_175->load_obj("primitives/torus/torus.obj");
object_cube_175->build_vbo();
Scene::instance().add_object(object_cube_175->ident(), object_cube_175);

SceneObject *object_cube_176 = new SceneObject("object_cube_176");
object_cube_176->load_obj("primitives/monkey/monkey.obj");
object_cube_176->build_vbo();
Scene::instance().add_object(object_cube_176->ident(), object_cube_176);

SceneObject *object_cube_177 = new SceneObject("object_cube_177");
object_cube_177->load_obj("primitives/monkey/monkey.obj");
object_cube_177->build_vbo();
Scene::instance().add_object(object_cube_177->ident(), object_cube_177);

SceneObject *object_cube_178 = new SceneObject("object_cube_178");
object_cube_178->load_obj("primitives/monkey/monkey.obj");
object_cube_178->build_vbo();
Scene::instance().add_object(object_cube_178->ident(), object_cube_178);

SceneObject *object_cube_179 = new SceneObject("object_cube_179");
object_cube_179->load_obj("primitives/torus/torus.obj");
object_cube_179->build_vbo();
Scene::instance().add_object(object_cube_179->ident(), object_cube_179);

SceneObject *object_cube_180 = new SceneObject("object_cube_180");
object_cube_180->load_obj("primitives/cube/cube.obj");
object_cube_180->build_vbo();
Scene::instance().add_object(object_cube_180->ident(), object_cube_180);

SceneObject *object_cube_181 = new SceneObject("object_cube_181");
object_cube_181->load_obj("primitives/torus/torus.obj");
object_cube_181->build_vbo();
Scene::instance().add_object(object_cube_181->ident(), object_cube_181);

SceneObject *object_cube_182 = new SceneObject("object_cube_182");
object_cube_182->load_obj("primitives/torus/torus.obj");
object_cube_182->build_vbo();
Scene::instance().add_object(object_cube_182->ident(), object_cube_182);

SceneObject *object_cube_183 = new SceneObject("object_cube_183");
object_cube_183->load_obj("primitives/monkey/monkey.obj");
object_cube_183->build_vbo();
Scene::instance().add_object(object_cube_183->ident(), object_cube_183);

SceneObject *object_cube_184 = new SceneObject("object_cube_184");
object_cube_184->load_obj("primitives/sphere/sphere.obj");
object_cube_184->build_vbo();
Scene::instance().add_object(object_cube_184->ident(), object_cube_184);

SceneObject *object_cube_185 = new SceneObject("object_cube_185");
object_cube_185->load_obj("primitives/sphere/sphere.obj");
object_cube_185->build_vbo();
Scene::instance().add_object(object_cube_185->ident(), object_cube_185);

SceneObject *object_cube_186 = new SceneObject("object_cube_186");
object_cube_186->load_obj("primitives/cube/cube.obj");
object_cube_186->build_vbo();
Scene::instance().add_object(object_cube_186->ident(), object_cube_186);

SceneObject *object_cube_187 = new SceneObject("object_cube_187");
object_cube_187->load_obj("primitives/sphere/sphere.obj");
object_cube_187->build_vbo();
Scene::instance().add_object(object_cube_187->ident(), object_cube_187);

SceneObject *object_cube_188 = new SceneObject("object_cube_188");
object_cube_188->load_obj("primitives/torus/torus.obj");
object_cube_188->build_vbo();
Scene::instance().add_object(object_cube_188->ident(), object_cube_188);

SceneObject *object_cube_189 = new SceneObject("object_cube_189");
object_cube_189->load_obj("primitives/torus/torus.obj");
object_cube_189->build_vbo();
Scene::instance().add_object(object_cube_189->ident(), object_cube_189);

SceneObject *object_cube_190 = new SceneObject("object_cube_190");
object_cube_190->load_obj("primitives/monkey/monkey.obj");
object_cube_190->build_vbo();
Scene::instance().add_object(object_cube_190->ident(), object_cube_190);

SceneObject *object_cube_191 = new SceneObject("object_cube_191");
object_cube_191->load_obj("primitives/torus/torus.obj");
object_cube_191->build_vbo();
Scene::instance().add_object(object_cube_191->ident(), object_cube_191);

SceneObject *object_cube_192 = new SceneObject("object_cube_192");
object_cube_192->load_obj("primitives/cube/cube.obj");
object_cube_192->build_vbo();
Scene::instance().add_object(object_cube_192->ident(), object_cube_192);

SceneObject *object_cube_193 = new SceneObject("object_cube_193");
object_cube_193->load_obj("primitives/cube/cube.obj");
object_cube_193->build_vbo();
Scene::instance().add_object(object_cube_193->ident(), object_cube_193);

SceneObject *object_cube_194 = new SceneObject("object_cube_194");
object_cube_194->load_obj("primitives/sphere/sphere.obj");
object_cube_194->build_vbo();
Scene::instance().add_object(object_cube_194->ident(), object_cube_194);

SceneObject *object_cube_195 = new SceneObject("object_cube_195");
object_cube_195->load_obj("primitives/monkey/monkey.obj");
object_cube_195->build_vbo();
Scene::instance().add_object(object_cube_195->ident(), object_cube_195);

SceneObject *object_cube_196 = new SceneObject("object_cube_196");
object_cube_196->load_obj("primitives/monkey/monkey.obj");
object_cube_196->build_vbo();
Scene::instance().add_object(object_cube_196->ident(), object_cube_196);

SceneObject *object_cube_197 = new SceneObject("object_cube_197");
object_cube_197->load_obj("primitives/sphere/sphere.obj");
object_cube_197->build_vbo();
Scene::instance().add_object(object_cube_197->ident(), object_cube_197);

SceneObject *object_cube_198 = new SceneObject("object_cube_198");
object_cube_198->load_obj("primitives/monkey/monkey.obj");
object_cube_198->build_vbo();
Scene::instance().add_object(object_cube_198->ident(), object_cube_198);

SceneObject *object_cube_199 = new SceneObject("object_cube_199");
object_cube_199->load_obj("primitives/cube/cube.obj");
object_cube_199->build_vbo();
Scene::instance().add_object(object_cube_199->ident(), object_cube_199);

SceneObject *object_cube_200 = new SceneObject("object_cube_200");
object_cube_200->load_obj("primitives/sphere/sphere.obj");
object_cube_200->build_vbo();
Scene::instance().add_object(object_cube_200->ident(), object_cube_200);

SceneObject *object_cube_201 = new SceneObject("object_cube_201");
object_cube_201->load_obj("primitives/sphere/sphere.obj");
object_cube_201->build_vbo();
Scene::instance().add_object(object_cube_201->ident(), object_cube_201);

SceneObject *object_cube_202 = new SceneObject("object_cube_202");
object_cube_202->load_obj("primitives/torus/torus.obj");
object_cube_202->build_vbo();
Scene::instance().add_object(object_cube_202->ident(), object_cube_202);

SceneObject *object_cube_203 = new SceneObject("object_cube_203");
object_cube_203->load_obj("primitives/torus/torus.obj");
object_cube_203->build_vbo();
Scene::instance().add_object(object_cube_203->ident(), object_cube_203);

SceneObject *object_cube_204 = new SceneObject("object_cube_204");
object_cube_204->load_obj("primitives/cube/cube.obj");
object_cube_204->build_vbo();
Scene::instance().add_object(object_cube_204->ident(), object_cube_204);

SceneObject *object_cube_205 = new SceneObject("object_cube_205");
object_cube_205->load_obj("primitives/torus/torus.obj");
object_cube_205->build_vbo();
Scene::instance().add_object(object_cube_205->ident(), object_cube_205);

SceneObject *object_cube_206 = new SceneObject("object_cube_206");
object_cube_206->load_obj("primitives/torus/torus.obj");
object_cube_206->build_vbo();
Scene::instance().add_object(object_cube_206->ident(), object_cube_206);

SceneObject *object_cube_207 = new SceneObject("object_cube_207");
object_cube_207->load_obj("primitives/torus/torus.obj");
object_cube_207->build_vbo();
Scene::instance().add_object(object_cube_207->ident(), object_cube_207);

SceneObject *object_cube_208 = new SceneObject("object_cube_208");
object_cube_208->load_obj("primitives/torus/torus.obj");
object_cube_208->build_vbo();
Scene::instance().add_object(object_cube_208->ident(), object_cube_208);

SceneObject *object_cube_209 = new SceneObject("object_cube_209");
object_cube_209->load_obj("primitives/sphere/sphere.obj");
object_cube_209->build_vbo();
Scene::instance().add_object(object_cube_209->ident(), object_cube_209);

SceneObject *object_cube_210 = new SceneObject("object_cube_210");
object_cube_210->load_obj("primitives/cube/cube.obj");
object_cube_210->build_vbo();
Scene::instance().add_object(object_cube_210->ident(), object_cube_210);

SceneObject *object_cube_211 = new SceneObject("object_cube_211");
object_cube_211->load_obj("primitives/torus/torus.obj");
object_cube_211->build_vbo();
Scene::instance().add_object(object_cube_211->ident(), object_cube_211);

SceneObject *object_cube_212 = new SceneObject("object_cube_212");
object_cube_212->load_obj("primitives/cube/cube.obj");
object_cube_212->build_vbo();
Scene::instance().add_object(object_cube_212->ident(), object_cube_212);

SceneObject *object_cube_213 = new SceneObject("object_cube_213");
object_cube_213->load_obj("primitives/cube/cube.obj");
object_cube_213->build_vbo();
Scene::instance().add_object(object_cube_213->ident(), object_cube_213);

SceneObject *object_cube_214 = new SceneObject("object_cube_214");
object_cube_214->load_obj("primitives/sphere/sphere.obj");
object_cube_214->build_vbo();
Scene::instance().add_object(object_cube_214->ident(), object_cube_214);

SceneObject *object_cube_215 = new SceneObject("object_cube_215");
object_cube_215->load_obj("primitives/sphere/sphere.obj");
object_cube_215->build_vbo();
Scene::instance().add_object(object_cube_215->ident(), object_cube_215);

SceneObject *object_cube_216 = new SceneObject("object_cube_216");
object_cube_216->load_obj("primitives/sphere/sphere.obj");
object_cube_216->build_vbo();
Scene::instance().add_object(object_cube_216->ident(), object_cube_216);

SceneObject *object_cube_217 = new SceneObject("object_cube_217");
object_cube_217->load_obj("primitives/torus/torus.obj");
object_cube_217->build_vbo();
Scene::instance().add_object(object_cube_217->ident(), object_cube_217);

SceneObject *object_cube_218 = new SceneObject("object_cube_218");
object_cube_218->load_obj("primitives/torus/torus.obj");
object_cube_218->build_vbo();
Scene::instance().add_object(object_cube_218->ident(), object_cube_218);

SceneObject *object_cube_219 = new SceneObject("object_cube_219");
object_cube_219->load_obj("primitives/cube/cube.obj");
object_cube_219->build_vbo();
Scene::instance().add_object(object_cube_219->ident(), object_cube_219);

SceneObject *object_cube_220 = new SceneObject("object_cube_220");
object_cube_220->load_obj("primitives/torus/torus.obj");
object_cube_220->build_vbo();
Scene::instance().add_object(object_cube_220->ident(), object_cube_220);

SceneObject *object_cube_221 = new SceneObject("object_cube_221");
object_cube_221->load_obj("primitives/cube/cube.obj");
object_cube_221->build_vbo();
Scene::instance().add_object(object_cube_221->ident(), object_cube_221);

SceneObject *object_cube_222 = new SceneObject("object_cube_222");
object_cube_222->load_obj("primitives/monkey/monkey.obj");
object_cube_222->build_vbo();
Scene::instance().add_object(object_cube_222->ident(), object_cube_222);

SceneObject *object_cube_223 = new SceneObject("object_cube_223");
object_cube_223->load_obj("primitives/monkey/monkey.obj");
object_cube_223->build_vbo();
Scene::instance().add_object(object_cube_223->ident(), object_cube_223);

SceneObject *object_cube_224 = new SceneObject("object_cube_224");
object_cube_224->load_obj("primitives/monkey/monkey.obj");
object_cube_224->build_vbo();
Scene::instance().add_object(object_cube_224->ident(), object_cube_224);

SceneObject *object_cube_225 = new SceneObject("object_cube_225");
object_cube_225->load_obj("primitives/sphere/sphere.obj");
object_cube_225->build_vbo();
Scene::instance().add_object(object_cube_225->ident(), object_cube_225);

SceneObject *object_cube_226 = new SceneObject("object_cube_226");
object_cube_226->load_obj("primitives/monkey/monkey.obj");
object_cube_226->build_vbo();
Scene::instance().add_object(object_cube_226->ident(), object_cube_226);

SceneObject *object_cube_227 = new SceneObject("object_cube_227");
object_cube_227->load_obj("primitives/torus/torus.obj");
object_cube_227->build_vbo();
Scene::instance().add_object(object_cube_227->ident(), object_cube_227);

SceneObject *object_cube_228 = new SceneObject("object_cube_228");
object_cube_228->load_obj("primitives/sphere/sphere.obj");
object_cube_228->build_vbo();
Scene::instance().add_object(object_cube_228->ident(), object_cube_228);

SceneObject *object_cube_229 = new SceneObject("object_cube_229");
object_cube_229->load_obj("primitives/cube/cube.obj");
object_cube_229->build_vbo();
Scene::instance().add_object(object_cube_229->ident(), object_cube_229);

SceneObject *object_cube_230 = new SceneObject("object_cube_230");
object_cube_230->load_obj("primitives/monkey/monkey.obj");
object_cube_230->build_vbo();
Scene::instance().add_object(object_cube_230->ident(), object_cube_230);

SceneObject *object_cube_231 = new SceneObject("object_cube_231");
object_cube_231->load_obj("primitives/torus/torus.obj");
object_cube_231->build_vbo();
Scene::instance().add_object(object_cube_231->ident(), object_cube_231);

SceneObject *object_cube_232 = new SceneObject("object_cube_232");
object_cube_232->load_obj("primitives/torus/torus.obj");
object_cube_232->build_vbo();
Scene::instance().add_object(object_cube_232->ident(), object_cube_232);

SceneObject *object_cube_233 = new SceneObject("object_cube_233");
object_cube_233->load_obj("primitives/cube/cube.obj");
object_cube_233->build_vbo();
Scene::instance().add_object(object_cube_233->ident(), object_cube_233);

SceneObject *object_cube_234 = new SceneObject("object_cube_234");
object_cube_234->load_obj("primitives/torus/torus.obj");
object_cube_234->build_vbo();
Scene::instance().add_object(object_cube_234->ident(), object_cube_234);

SceneObject *object_cube_235 = new SceneObject("object_cube_235");
object_cube_235->load_obj("primitives/torus/torus.obj");
object_cube_235->build_vbo();
Scene::instance().add_object(object_cube_235->ident(), object_cube_235);

SceneObject *object_cube_236 = new SceneObject("object_cube_236");
object_cube_236->load_obj("primitives/sphere/sphere.obj");
object_cube_236->build_vbo();
Scene::instance().add_object(object_cube_236->ident(), object_cube_236);

SceneObject *object_cube_237 = new SceneObject("object_cube_237");
object_cube_237->load_obj("primitives/cube/cube.obj");
object_cube_237->build_vbo();
Scene::instance().add_object(object_cube_237->ident(), object_cube_237);

SceneObject *object_cube_238 = new SceneObject("object_cube_238");
object_cube_238->load_obj("primitives/cube/cube.obj");
object_cube_238->build_vbo();
Scene::instance().add_object(object_cube_238->ident(), object_cube_238);

SceneObject *object_cube_239 = new SceneObject("object_cube_239");
object_cube_239->load_obj("primitives/monkey/monkey.obj");
object_cube_239->build_vbo();
Scene::instance().add_object(object_cube_239->ident(), object_cube_239);

SceneObject *object_cube_240 = new SceneObject("object_cube_240");
object_cube_240->load_obj("primitives/cube/cube.obj");
object_cube_240->build_vbo();
Scene::instance().add_object(object_cube_240->ident(), object_cube_240);

SceneObject *object_cube_241 = new SceneObject("object_cube_241");
object_cube_241->load_obj("primitives/sphere/sphere.obj");
object_cube_241->build_vbo();
Scene::instance().add_object(object_cube_241->ident(), object_cube_241);

SceneObject *object_cube_242 = new SceneObject("object_cube_242");
object_cube_242->load_obj("primitives/sphere/sphere.obj");
object_cube_242->build_vbo();
Scene::instance().add_object(object_cube_242->ident(), object_cube_242);

SceneObject *object_cube_243 = new SceneObject("object_cube_243");
object_cube_243->load_obj("primitives/sphere/sphere.obj");
object_cube_243->build_vbo();
Scene::instance().add_object(object_cube_243->ident(), object_cube_243);

SceneObject *object_cube_244 = new SceneObject("object_cube_244");
object_cube_244->load_obj("primitives/monkey/monkey.obj");
object_cube_244->build_vbo();
Scene::instance().add_object(object_cube_244->ident(), object_cube_244);

SceneObject *object_cube_245 = new SceneObject("object_cube_245");
object_cube_245->load_obj("primitives/cube/cube.obj");
object_cube_245->build_vbo();
Scene::instance().add_object(object_cube_245->ident(), object_cube_245);

SceneObject *object_cube_246 = new SceneObject("object_cube_246");
object_cube_246->load_obj("primitives/torus/torus.obj");
object_cube_246->build_vbo();
Scene::instance().add_object(object_cube_246->ident(), object_cube_246);

SceneObject *object_cube_247 = new SceneObject("object_cube_247");
object_cube_247->load_obj("primitives/monkey/monkey.obj");
object_cube_247->build_vbo();
Scene::instance().add_object(object_cube_247->ident(), object_cube_247);

SceneObject *object_cube_248 = new SceneObject("object_cube_248");
object_cube_248->load_obj("primitives/monkey/monkey.obj");
object_cube_248->build_vbo();
Scene::instance().add_object(object_cube_248->ident(), object_cube_248);

SceneObject *object_cube_249 = new SceneObject("object_cube_249");
object_cube_249->load_obj("primitives/monkey/monkey.obj");
object_cube_249->build_vbo();
Scene::instance().add_object(object_cube_249->ident(), object_cube_249);

SceneObject *object_cube_250 = new SceneObject("object_cube_250");
object_cube_250->load_obj("primitives/monkey/monkey.obj");
object_cube_250->build_vbo();
Scene::instance().add_object(object_cube_250->ident(), object_cube_250);

SceneObject *object_cube_251 = new SceneObject("object_cube_251");
object_cube_251->load_obj("primitives/torus/torus.obj");
object_cube_251->build_vbo();
Scene::instance().add_object(object_cube_251->ident(), object_cube_251);

SceneObject *object_cube_252 = new SceneObject("object_cube_252");
object_cube_252->load_obj("primitives/cube/cube.obj");
object_cube_252->build_vbo();
Scene::instance().add_object(object_cube_252->ident(), object_cube_252);

SceneObject *object_cube_253 = new SceneObject("object_cube_253");
object_cube_253->load_obj("primitives/monkey/monkey.obj");
object_cube_253->build_vbo();
Scene::instance().add_object(object_cube_253->ident(), object_cube_253);

SceneObject *object_cube_254 = new SceneObject("object_cube_254");
object_cube_254->load_obj("primitives/monkey/monkey.obj");
object_cube_254->build_vbo();
Scene::instance().add_object(object_cube_254->ident(), object_cube_254);

SceneObject *object_cube_255 = new SceneObject("object_cube_255");
object_cube_255->load_obj("primitives/torus/torus.obj");
object_cube_255->build_vbo();
Scene::instance().add_object(object_cube_255->ident(), object_cube_255);

SceneObject *object_cube_256 = new SceneObject("object_cube_256");
object_cube_256->load_obj("primitives/sphere/sphere.obj");
object_cube_256->build_vbo();
Scene::instance().add_object(object_cube_256->ident(), object_cube_256);

SceneObject *object_cube_257 = new SceneObject("object_cube_257");
object_cube_257->load_obj("primitives/monkey/monkey.obj");
object_cube_257->build_vbo();
Scene::instance().add_object(object_cube_257->ident(), object_cube_257);

SceneObject *object_cube_258 = new SceneObject("object_cube_258");
object_cube_258->load_obj("primitives/cube/cube.obj");
object_cube_258->build_vbo();
Scene::instance().add_object(object_cube_258->ident(), object_cube_258);

SceneObject *object_cube_259 = new SceneObject("object_cube_259");
object_cube_259->load_obj("primitives/cube/cube.obj");
object_cube_259->build_vbo();
Scene::instance().add_object(object_cube_259->ident(), object_cube_259);

SceneObject *object_cube_260 = new SceneObject("object_cube_260");
object_cube_260->load_obj("primitives/torus/torus.obj");
object_cube_260->build_vbo();
Scene::instance().add_object(object_cube_260->ident(), object_cube_260);

SceneObject *object_cube_261 = new SceneObject("object_cube_261");
object_cube_261->load_obj("primitives/cube/cube.obj");
object_cube_261->build_vbo();
Scene::instance().add_object(object_cube_261->ident(), object_cube_261);

SceneObject *object_cube_262 = new SceneObject("object_cube_262");
object_cube_262->load_obj("primitives/monkey/monkey.obj");
object_cube_262->build_vbo();
Scene::instance().add_object(object_cube_262->ident(), object_cube_262);

SceneObject *object_cube_263 = new SceneObject("object_cube_263");
object_cube_263->load_obj("primitives/sphere/sphere.obj");
object_cube_263->build_vbo();
Scene::instance().add_object(object_cube_263->ident(), object_cube_263);

SceneObject *object_cube_264 = new SceneObject("object_cube_264");
object_cube_264->load_obj("primitives/cube/cube.obj");
object_cube_264->build_vbo();
Scene::instance().add_object(object_cube_264->ident(), object_cube_264);

SceneObject *object_cube_265 = new SceneObject("object_cube_265");
object_cube_265->load_obj("primitives/sphere/sphere.obj");
object_cube_265->build_vbo();
Scene::instance().add_object(object_cube_265->ident(), object_cube_265);

SceneObject *object_cube_266 = new SceneObject("object_cube_266");
object_cube_266->load_obj("primitives/torus/torus.obj");
object_cube_266->build_vbo();
Scene::instance().add_object(object_cube_266->ident(), object_cube_266);

SceneObject *object_cube_267 = new SceneObject("object_cube_267");
object_cube_267->load_obj("primitives/cube/cube.obj");
object_cube_267->build_vbo();
Scene::instance().add_object(object_cube_267->ident(), object_cube_267);

SceneObject *object_cube_268 = new SceneObject("object_cube_268");
object_cube_268->load_obj("primitives/torus/torus.obj");
object_cube_268->build_vbo();
Scene::instance().add_object(object_cube_268->ident(), object_cube_268);

SceneObject *object_cube_269 = new SceneObject("object_cube_269");
object_cube_269->load_obj("primitives/sphere/sphere.obj");
object_cube_269->build_vbo();
Scene::instance().add_object(object_cube_269->ident(), object_cube_269);

SceneObject *object_cube_270 = new SceneObject("object_cube_270");
object_cube_270->load_obj("primitives/monkey/monkey.obj");
object_cube_270->build_vbo();
Scene::instance().add_object(object_cube_270->ident(), object_cube_270);

SceneObject *object_cube_271 = new SceneObject("object_cube_271");
object_cube_271->load_obj("primitives/cube/cube.obj");
object_cube_271->build_vbo();
Scene::instance().add_object(object_cube_271->ident(), object_cube_271);

SceneObject *object_cube_272 = new SceneObject("object_cube_272");
object_cube_272->load_obj("primitives/sphere/sphere.obj");
object_cube_272->build_vbo();
Scene::instance().add_object(object_cube_272->ident(), object_cube_272);

SceneObject *object_cube_273 = new SceneObject("object_cube_273");
object_cube_273->load_obj("primitives/torus/torus.obj");
object_cube_273->build_vbo();
Scene::instance().add_object(object_cube_273->ident(), object_cube_273);

SceneObject *object_cube_274 = new SceneObject("object_cube_274");
object_cube_274->load_obj("primitives/cube/cube.obj");
object_cube_274->build_vbo();
Scene::instance().add_object(object_cube_274->ident(), object_cube_274);

SceneObject *object_cube_275 = new SceneObject("object_cube_275");
object_cube_275->load_obj("primitives/sphere/sphere.obj");
object_cube_275->build_vbo();
Scene::instance().add_object(object_cube_275->ident(), object_cube_275);

SceneObject *object_cube_276 = new SceneObject("object_cube_276");
object_cube_276->load_obj("primitives/cube/cube.obj");
object_cube_276->build_vbo();
Scene::instance().add_object(object_cube_276->ident(), object_cube_276);

SceneObject *object_cube_277 = new SceneObject("object_cube_277");
object_cube_277->load_obj("primitives/sphere/sphere.obj");
object_cube_277->build_vbo();
Scene::instance().add_object(object_cube_277->ident(), object_cube_277);

SceneObject *object_cube_278 = new SceneObject("object_cube_278");
object_cube_278->load_obj("primitives/torus/torus.obj");
object_cube_278->build_vbo();
Scene::instance().add_object(object_cube_278->ident(), object_cube_278);

SceneObject *object_cube_279 = new SceneObject("object_cube_279");
object_cube_279->load_obj("primitives/cube/cube.obj");
object_cube_279->build_vbo();
Scene::instance().add_object(object_cube_279->ident(), object_cube_279);

SceneObject *object_cube_280 = new SceneObject("object_cube_280");
object_cube_280->load_obj("primitives/cube/cube.obj");
object_cube_280->build_vbo();
Scene::instance().add_object(object_cube_280->ident(), object_cube_280);

SceneObject *object_cube_281 = new SceneObject("object_cube_281");
object_cube_281->load_obj("primitives/cube/cube.obj");
object_cube_281->build_vbo();
Scene::instance().add_object(object_cube_281->ident(), object_cube_281);

SceneObject *object_cube_282 = new SceneObject("object_cube_282");
object_cube_282->load_obj("primitives/cube/cube.obj");
object_cube_282->build_vbo();
Scene::instance().add_object(object_cube_282->ident(), object_cube_282);

SceneObject *object_cube_283 = new SceneObject("object_cube_283");
object_cube_283->load_obj("primitives/cube/cube.obj");
object_cube_283->build_vbo();
Scene::instance().add_object(object_cube_283->ident(), object_cube_283);

SceneObject *object_cube_284 = new SceneObject("object_cube_284");
object_cube_284->load_obj("primitives/cube/cube.obj");
object_cube_284->build_vbo();
Scene::instance().add_object(object_cube_284->ident(), object_cube_284);

SceneObject *object_cube_285 = new SceneObject("object_cube_285");
object_cube_285->load_obj("primitives/sphere/sphere.obj");
object_cube_285->build_vbo();
Scene::instance().add_object(object_cube_285->ident(), object_cube_285);

SceneObject *object_cube_286 = new SceneObject("object_cube_286");
object_cube_286->load_obj("primitives/monkey/monkey.obj");
object_cube_286->build_vbo();
Scene::instance().add_object(object_cube_286->ident(), object_cube_286);

SceneObject *object_cube_287 = new SceneObject("object_cube_287");
object_cube_287->load_obj("primitives/sphere/sphere.obj");
object_cube_287->build_vbo();
Scene::instance().add_object(object_cube_287->ident(), object_cube_287);

SceneObject *object_cube_288 = new SceneObject("object_cube_288");
object_cube_288->load_obj("primitives/torus/torus.obj");
object_cube_288->build_vbo();
Scene::instance().add_object(object_cube_288->ident(), object_cube_288);

SceneObject *object_cube_289 = new SceneObject("object_cube_289");
object_cube_289->load_obj("primitives/monkey/monkey.obj");
object_cube_289->build_vbo();
Scene::instance().add_object(object_cube_289->ident(), object_cube_289);

SceneObject *object_cube_290 = new SceneObject("object_cube_290");
object_cube_290->load_obj("primitives/cube/cube.obj");
object_cube_290->build_vbo();
Scene::instance().add_object(object_cube_290->ident(), object_cube_290);

SceneObject *object_cube_291 = new SceneObject("object_cube_291");
object_cube_291->load_obj("primitives/sphere/sphere.obj");
object_cube_291->build_vbo();
Scene::instance().add_object(object_cube_291->ident(), object_cube_291);

SceneObject *object_cube_292 = new SceneObject("object_cube_292");
object_cube_292->load_obj("primitives/torus/torus.obj");
object_cube_292->build_vbo();
Scene::instance().add_object(object_cube_292->ident(), object_cube_292);

SceneObject *object_cube_293 = new SceneObject("object_cube_293");
object_cube_293->load_obj("primitives/sphere/sphere.obj");
object_cube_293->build_vbo();
Scene::instance().add_object(object_cube_293->ident(), object_cube_293);

SceneObject *object_cube_294 = new SceneObject("object_cube_294");
object_cube_294->load_obj("primitives/torus/torus.obj");
object_cube_294->build_vbo();
Scene::instance().add_object(object_cube_294->ident(), object_cube_294);

SceneObject *object_cube_295 = new SceneObject("object_cube_295");
object_cube_295->load_obj("primitives/cube/cube.obj");
object_cube_295->build_vbo();
Scene::instance().add_object(object_cube_295->ident(), object_cube_295);

SceneObject *object_cube_296 = new SceneObject("object_cube_296");
object_cube_296->load_obj("primitives/sphere/sphere.obj");
object_cube_296->build_vbo();
Scene::instance().add_object(object_cube_296->ident(), object_cube_296);

SceneObject *object_cube_297 = new SceneObject("object_cube_297");
object_cube_297->load_obj("primitives/cube/cube.obj");
object_cube_297->build_vbo();
Scene::instance().add_object(object_cube_297->ident(), object_cube_297);

SceneObject *object_cube_298 = new SceneObject("object_cube_298");
object_cube_298->load_obj("primitives/cube/cube.obj");
object_cube_298->build_vbo();
Scene::instance().add_object(object_cube_298->ident(), object_cube_298);

SceneObject *object_cube_299 = new SceneObject("object_cube_299");
object_cube_299->load_obj("primitives/sphere/sphere.obj");
object_cube_299->build_vbo();
Scene::instance().add_object(object_cube_299->ident(), object_cube_299);

SceneObject *object_cube_300 = new SceneObject("object_cube_300");
object_cube_300->load_obj("primitives/cube/cube.obj");
object_cube_300->build_vbo();
Scene::instance().add_object(object_cube_300->ident(), object_cube_300);

SceneObject *object_cube_301 = new SceneObject("object_cube_301");
object_cube_301->load_obj("primitives/monkey/monkey.obj");
object_cube_301->build_vbo();
Scene::instance().add_object(object_cube_301->ident(), object_cube_301);

SceneObject *object_cube_302 = new SceneObject("object_cube_302");
object_cube_302->load_obj("primitives/torus/torus.obj");
object_cube_302->build_vbo();
Scene::instance().add_object(object_cube_302->ident(), object_cube_302);

SceneObject *object_cube_303 = new SceneObject("object_cube_303");
object_cube_303->load_obj("primitives/monkey/monkey.obj");
object_cube_303->build_vbo();
Scene::instance().add_object(object_cube_303->ident(), object_cube_303);

SceneObject *object_cube_304 = new SceneObject("object_cube_304");
object_cube_304->load_obj("primitives/monkey/monkey.obj");
object_cube_304->build_vbo();
Scene::instance().add_object(object_cube_304->ident(), object_cube_304);

SceneObject *object_cube_305 = new SceneObject("object_cube_305");
object_cube_305->load_obj("primitives/sphere/sphere.obj");
object_cube_305->build_vbo();
Scene::instance().add_object(object_cube_305->ident(), object_cube_305);

SceneObject *object_cube_306 = new SceneObject("object_cube_306");
object_cube_306->load_obj("primitives/torus/torus.obj");
object_cube_306->build_vbo();
Scene::instance().add_object(object_cube_306->ident(), object_cube_306);

SceneObject *object_cube_307 = new SceneObject("object_cube_307");
object_cube_307->load_obj("primitives/torus/torus.obj");
object_cube_307->build_vbo();
Scene::instance().add_object(object_cube_307->ident(), object_cube_307);

SceneObject *object_cube_308 = new SceneObject("object_cube_308");
object_cube_308->load_obj("primitives/cube/cube.obj");
object_cube_308->build_vbo();
Scene::instance().add_object(object_cube_308->ident(), object_cube_308);

SceneObject *object_cube_309 = new SceneObject("object_cube_309");
object_cube_309->load_obj("primitives/monkey/monkey.obj");
object_cube_309->build_vbo();
Scene::instance().add_object(object_cube_309->ident(), object_cube_309);

SceneObject *object_cube_310 = new SceneObject("object_cube_310");
object_cube_310->load_obj("primitives/monkey/monkey.obj");
object_cube_310->build_vbo();
Scene::instance().add_object(object_cube_310->ident(), object_cube_310);

SceneObject *object_cube_311 = new SceneObject("object_cube_311");
object_cube_311->load_obj("primitives/sphere/sphere.obj");
object_cube_311->build_vbo();
Scene::instance().add_object(object_cube_311->ident(), object_cube_311);

SceneObject *object_cube_312 = new SceneObject("object_cube_312");
object_cube_312->load_obj("primitives/cube/cube.obj");
object_cube_312->build_vbo();
Scene::instance().add_object(object_cube_312->ident(), object_cube_312);

SceneObject *object_cube_313 = new SceneObject("object_cube_313");
object_cube_313->load_obj("primitives/cube/cube.obj");
object_cube_313->build_vbo();
Scene::instance().add_object(object_cube_313->ident(), object_cube_313);

SceneObject *object_cube_314 = new SceneObject("object_cube_314");
object_cube_314->load_obj("primitives/cube/cube.obj");
object_cube_314->build_vbo();
Scene::instance().add_object(object_cube_314->ident(), object_cube_314);

SceneObject *object_cube_315 = new SceneObject("object_cube_315");
object_cube_315->load_obj("primitives/cube/cube.obj");
object_cube_315->build_vbo();
Scene::instance().add_object(object_cube_315->ident(), object_cube_315);

SceneObject *object_cube_316 = new SceneObject("object_cube_316");
object_cube_316->load_obj("primitives/sphere/sphere.obj");
object_cube_316->build_vbo();
Scene::instance().add_object(object_cube_316->ident(), object_cube_316);

SceneObject *object_cube_317 = new SceneObject("object_cube_317");
object_cube_317->load_obj("primitives/torus/torus.obj");
object_cube_317->build_vbo();
Scene::instance().add_object(object_cube_317->ident(), object_cube_317);

SceneObject *object_cube_318 = new SceneObject("object_cube_318");
object_cube_318->load_obj("primitives/torus/torus.obj");
object_cube_318->build_vbo();
Scene::instance().add_object(object_cube_318->ident(), object_cube_318);

SceneObject *object_cube_319 = new SceneObject("object_cube_319");
object_cube_319->load_obj("primitives/sphere/sphere.obj");
object_cube_319->build_vbo();
Scene::instance().add_object(object_cube_319->ident(), object_cube_319);

SceneObject *object_cube_320 = new SceneObject("object_cube_320");
object_cube_320->load_obj("primitives/monkey/monkey.obj");
object_cube_320->build_vbo();
Scene::instance().add_object(object_cube_320->ident(), object_cube_320);

SceneObject *object_cube_321 = new SceneObject("object_cube_321");
object_cube_321->load_obj("primitives/cube/cube.obj");
object_cube_321->build_vbo();
Scene::instance().add_object(object_cube_321->ident(), object_cube_321);

SceneObject *object_cube_322 = new SceneObject("object_cube_322");
object_cube_322->load_obj("primitives/cube/cube.obj");
object_cube_322->build_vbo();
Scene::instance().add_object(object_cube_322->ident(), object_cube_322);

SceneObject *object_cube_323 = new SceneObject("object_cube_323");
object_cube_323->load_obj("primitives/cube/cube.obj");
object_cube_323->build_vbo();
Scene::instance().add_object(object_cube_323->ident(), object_cube_323);

SceneObject *object_cube_324 = new SceneObject("object_cube_324");
object_cube_324->load_obj("primitives/cube/cube.obj");
object_cube_324->build_vbo();
Scene::instance().add_object(object_cube_324->ident(), object_cube_324);

SceneObject *object_cube_325 = new SceneObject("object_cube_325");
object_cube_325->load_obj("primitives/sphere/sphere.obj");
object_cube_325->build_vbo();
Scene::instance().add_object(object_cube_325->ident(), object_cube_325);

SceneObject *object_cube_326 = new SceneObject("object_cube_326");
object_cube_326->load_obj("primitives/cube/cube.obj");
object_cube_326->build_vbo();
Scene::instance().add_object(object_cube_326->ident(), object_cube_326);

SceneObject *object_cube_327 = new SceneObject("object_cube_327");
object_cube_327->load_obj("primitives/monkey/monkey.obj");
object_cube_327->build_vbo();
Scene::instance().add_object(object_cube_327->ident(), object_cube_327);

SceneObject *object_cube_328 = new SceneObject("object_cube_328");
object_cube_328->load_obj("primitives/cube/cube.obj");
object_cube_328->build_vbo();
Scene::instance().add_object(object_cube_328->ident(), object_cube_328);

SceneObject *object_cube_329 = new SceneObject("object_cube_329");
object_cube_329->load_obj("primitives/cube/cube.obj");
object_cube_329->build_vbo();
Scene::instance().add_object(object_cube_329->ident(), object_cube_329);

SceneObject *object_cube_330 = new SceneObject("object_cube_330");
object_cube_330->load_obj("primitives/cube/cube.obj");
object_cube_330->build_vbo();
Scene::instance().add_object(object_cube_330->ident(), object_cube_330);

SceneObject *object_cube_331 = new SceneObject("object_cube_331");
object_cube_331->load_obj("primitives/sphere/sphere.obj");
object_cube_331->build_vbo();
Scene::instance().add_object(object_cube_331->ident(), object_cube_331);

SceneObject *object_cube_332 = new SceneObject("object_cube_332");
object_cube_332->load_obj("primitives/monkey/monkey.obj");
object_cube_332->build_vbo();
Scene::instance().add_object(object_cube_332->ident(), object_cube_332);

SceneObject *object_cube_333 = new SceneObject("object_cube_333");
object_cube_333->load_obj("primitives/torus/torus.obj");
object_cube_333->build_vbo();
Scene::instance().add_object(object_cube_333->ident(), object_cube_333);

SceneObject *object_cube_334 = new SceneObject("object_cube_334");
object_cube_334->load_obj("primitives/cube/cube.obj");
object_cube_334->build_vbo();
Scene::instance().add_object(object_cube_334->ident(), object_cube_334);

SceneObject *object_cube_335 = new SceneObject("object_cube_335");
object_cube_335->load_obj("primitives/torus/torus.obj");
object_cube_335->build_vbo();
Scene::instance().add_object(object_cube_335->ident(), object_cube_335);

SceneObject *object_cube_336 = new SceneObject("object_cube_336");
object_cube_336->load_obj("primitives/sphere/sphere.obj");
object_cube_336->build_vbo();
Scene::instance().add_object(object_cube_336->ident(), object_cube_336);

SceneObject *object_cube_337 = new SceneObject("object_cube_337");
object_cube_337->load_obj("primitives/monkey/monkey.obj");
object_cube_337->build_vbo();
Scene::instance().add_object(object_cube_337->ident(), object_cube_337);

SceneObject *object_cube_338 = new SceneObject("object_cube_338");
object_cube_338->load_obj("primitives/torus/torus.obj");
object_cube_338->build_vbo();
Scene::instance().add_object(object_cube_338->ident(), object_cube_338);

SceneObject *object_cube_339 = new SceneObject("object_cube_339");
object_cube_339->load_obj("primitives/monkey/monkey.obj");
object_cube_339->build_vbo();
Scene::instance().add_object(object_cube_339->ident(), object_cube_339);

SceneObject *object_cube_340 = new SceneObject("object_cube_340");
object_cube_340->load_obj("primitives/cube/cube.obj");
object_cube_340->build_vbo();
Scene::instance().add_object(object_cube_340->ident(), object_cube_340);

SceneObject *object_cube_341 = new SceneObject("object_cube_341");
object_cube_341->load_obj("primitives/torus/torus.obj");
object_cube_341->build_vbo();
Scene::instance().add_object(object_cube_341->ident(), object_cube_341);

SceneObject *object_cube_342 = new SceneObject("object_cube_342");
object_cube_342->load_obj("primitives/torus/torus.obj");
object_cube_342->build_vbo();
Scene::instance().add_object(object_cube_342->ident(), object_cube_342);

SceneObject *object_cube_343 = new SceneObject("object_cube_343");
object_cube_343->load_obj("primitives/torus/torus.obj");
object_cube_343->build_vbo();
Scene::instance().add_object(object_cube_343->ident(), object_cube_343);

SceneObject *object_cube_344 = new SceneObject("object_cube_344");
object_cube_344->load_obj("primitives/torus/torus.obj");
object_cube_344->build_vbo();
Scene::instance().add_object(object_cube_344->ident(), object_cube_344);

SceneObject *object_cube_345 = new SceneObject("object_cube_345");
object_cube_345->load_obj("primitives/sphere/sphere.obj");
object_cube_345->build_vbo();
Scene::instance().add_object(object_cube_345->ident(), object_cube_345);

SceneObject *object_cube_346 = new SceneObject("object_cube_346");
object_cube_346->load_obj("primitives/torus/torus.obj");
object_cube_346->build_vbo();
Scene::instance().add_object(object_cube_346->ident(), object_cube_346);

SceneObject *object_cube_347 = new SceneObject("object_cube_347");
object_cube_347->load_obj("primitives/monkey/monkey.obj");
object_cube_347->build_vbo();
Scene::instance().add_object(object_cube_347->ident(), object_cube_347);

SceneObject *object_cube_348 = new SceneObject("object_cube_348");
object_cube_348->load_obj("primitives/torus/torus.obj");
object_cube_348->build_vbo();
Scene::instance().add_object(object_cube_348->ident(), object_cube_348);

SceneObject *object_cube_349 = new SceneObject("object_cube_349");
object_cube_349->load_obj("primitives/torus/torus.obj");
object_cube_349->build_vbo();
Scene::instance().add_object(object_cube_349->ident(), object_cube_349);

SceneObject *object_cube_350 = new SceneObject("object_cube_350");
object_cube_350->load_obj("primitives/sphere/sphere.obj");
object_cube_350->build_vbo();
Scene::instance().add_object(object_cube_350->ident(), object_cube_350);

SceneObject *object_cube_351 = new SceneObject("object_cube_351");
object_cube_351->load_obj("primitives/sphere/sphere.obj");
object_cube_351->build_vbo();
Scene::instance().add_object(object_cube_351->ident(), object_cube_351);

SceneObject *object_cube_352 = new SceneObject("object_cube_352");
object_cube_352->load_obj("primitives/sphere/sphere.obj");
object_cube_352->build_vbo();
Scene::instance().add_object(object_cube_352->ident(), object_cube_352);

SceneObject *object_cube_353 = new SceneObject("object_cube_353");
object_cube_353->load_obj("primitives/sphere/sphere.obj");
object_cube_353->build_vbo();
Scene::instance().add_object(object_cube_353->ident(), object_cube_353);

SceneObject *object_cube_354 = new SceneObject("object_cube_354");
object_cube_354->load_obj("primitives/monkey/monkey.obj");
object_cube_354->build_vbo();
Scene::instance().add_object(object_cube_354->ident(), object_cube_354);

SceneObject *object_cube_355 = new SceneObject("object_cube_355");
object_cube_355->load_obj("primitives/sphere/sphere.obj");
object_cube_355->build_vbo();
Scene::instance().add_object(object_cube_355->ident(), object_cube_355);

SceneObject *object_cube_356 = new SceneObject("object_cube_356");
object_cube_356->load_obj("primitives/sphere/sphere.obj");
object_cube_356->build_vbo();
Scene::instance().add_object(object_cube_356->ident(), object_cube_356);

SceneObject *object_cube_357 = new SceneObject("object_cube_357");
object_cube_357->load_obj("primitives/sphere/sphere.obj");
object_cube_357->build_vbo();
Scene::instance().add_object(object_cube_357->ident(), object_cube_357);

SceneObject *object_cube_358 = new SceneObject("object_cube_358");
object_cube_358->load_obj("primitives/sphere/sphere.obj");
object_cube_358->build_vbo();
Scene::instance().add_object(object_cube_358->ident(), object_cube_358);

SceneObject *object_cube_359 = new SceneObject("object_cube_359");
object_cube_359->load_obj("primitives/cube/cube.obj");
object_cube_359->build_vbo();
Scene::instance().add_object(object_cube_359->ident(), object_cube_359);

SceneObject *object_cube_360 = new SceneObject("object_cube_360");
object_cube_360->load_obj("primitives/torus/torus.obj");
object_cube_360->build_vbo();
Scene::instance().add_object(object_cube_360->ident(), object_cube_360);

SceneObject *object_cube_361 = new SceneObject("object_cube_361");
object_cube_361->load_obj("primitives/cube/cube.obj");
object_cube_361->build_vbo();
Scene::instance().add_object(object_cube_361->ident(), object_cube_361);

SceneObject *object_cube_362 = new SceneObject("object_cube_362");
object_cube_362->load_obj("primitives/cube/cube.obj");
object_cube_362->build_vbo();
Scene::instance().add_object(object_cube_362->ident(), object_cube_362);

SceneObject *object_cube_363 = new SceneObject("object_cube_363");
object_cube_363->load_obj("primitives/sphere/sphere.obj");
object_cube_363->build_vbo();
Scene::instance().add_object(object_cube_363->ident(), object_cube_363);

SceneObject *object_cube_364 = new SceneObject("object_cube_364");
object_cube_364->load_obj("primitives/cube/cube.obj");
object_cube_364->build_vbo();
Scene::instance().add_object(object_cube_364->ident(), object_cube_364);

SceneObject *object_cube_365 = new SceneObject("object_cube_365");
object_cube_365->load_obj("primitives/torus/torus.obj");
object_cube_365->build_vbo();
Scene::instance().add_object(object_cube_365->ident(), object_cube_365);

SceneObject *object_cube_366 = new SceneObject("object_cube_366");
object_cube_366->load_obj("primitives/cube/cube.obj");
object_cube_366->build_vbo();
Scene::instance().add_object(object_cube_366->ident(), object_cube_366);

SceneObject *object_cube_367 = new SceneObject("object_cube_367");
object_cube_367->load_obj("primitives/sphere/sphere.obj");
object_cube_367->build_vbo();
Scene::instance().add_object(object_cube_367->ident(), object_cube_367);

SceneObject *object_cube_368 = new SceneObject("object_cube_368");
object_cube_368->load_obj("primitives/torus/torus.obj");
object_cube_368->build_vbo();
Scene::instance().add_object(object_cube_368->ident(), object_cube_368);

SceneObject *object_cube_369 = new SceneObject("object_cube_369");
object_cube_369->load_obj("primitives/sphere/sphere.obj");
object_cube_369->build_vbo();
Scene::instance().add_object(object_cube_369->ident(), object_cube_369);

SceneObject *object_cube_370 = new SceneObject("object_cube_370");
object_cube_370->load_obj("primitives/monkey/monkey.obj");
object_cube_370->build_vbo();
Scene::instance().add_object(object_cube_370->ident(), object_cube_370);

SceneObject *object_cube_371 = new SceneObject("object_cube_371");
object_cube_371->load_obj("primitives/cube/cube.obj");
object_cube_371->build_vbo();
Scene::instance().add_object(object_cube_371->ident(), object_cube_371);

SceneObject *object_cube_372 = new SceneObject("object_cube_372");
object_cube_372->load_obj("primitives/sphere/sphere.obj");
object_cube_372->build_vbo();
Scene::instance().add_object(object_cube_372->ident(), object_cube_372);

SceneObject *object_cube_373 = new SceneObject("object_cube_373");
object_cube_373->load_obj("primitives/cube/cube.obj");
object_cube_373->build_vbo();
Scene::instance().add_object(object_cube_373->ident(), object_cube_373);

SceneObject *object_cube_374 = new SceneObject("object_cube_374");
object_cube_374->load_obj("primitives/cube/cube.obj");
object_cube_374->build_vbo();
Scene::instance().add_object(object_cube_374->ident(), object_cube_374);

SceneObject *object_cube_375 = new SceneObject("object_cube_375");
object_cube_375->load_obj("primitives/monkey/monkey.obj");
object_cube_375->build_vbo();
Scene::instance().add_object(object_cube_375->ident(), object_cube_375);

SceneObject *object_cube_376 = new SceneObject("object_cube_376");
object_cube_376->load_obj("primitives/monkey/monkey.obj");
object_cube_376->build_vbo();
Scene::instance().add_object(object_cube_376->ident(), object_cube_376);

SceneObject *object_cube_377 = new SceneObject("object_cube_377");
object_cube_377->load_obj("primitives/cube/cube.obj");
object_cube_377->build_vbo();
Scene::instance().add_object(object_cube_377->ident(), object_cube_377);

SceneObject *object_cube_378 = new SceneObject("object_cube_378");
object_cube_378->load_obj("primitives/cube/cube.obj");
object_cube_378->build_vbo();
Scene::instance().add_object(object_cube_378->ident(), object_cube_378);

SceneObject *object_cube_379 = new SceneObject("object_cube_379");
object_cube_379->load_obj("primitives/sphere/sphere.obj");
object_cube_379->build_vbo();
Scene::instance().add_object(object_cube_379->ident(), object_cube_379);

SceneObject *object_cube_380 = new SceneObject("object_cube_380");
object_cube_380->load_obj("primitives/monkey/monkey.obj");
object_cube_380->build_vbo();
Scene::instance().add_object(object_cube_380->ident(), object_cube_380);

SceneObject *object_cube_381 = new SceneObject("object_cube_381");
object_cube_381->load_obj("primitives/torus/torus.obj");
object_cube_381->build_vbo();
Scene::instance().add_object(object_cube_381->ident(), object_cube_381);

SceneObject *object_cube_382 = new SceneObject("object_cube_382");
object_cube_382->load_obj("primitives/cube/cube.obj");
object_cube_382->build_vbo();
Scene::instance().add_object(object_cube_382->ident(), object_cube_382);

SceneObject *object_cube_383 = new SceneObject("object_cube_383");
object_cube_383->load_obj("primitives/monkey/monkey.obj");
object_cube_383->build_vbo();
Scene::instance().add_object(object_cube_383->ident(), object_cube_383);

SceneObject *object_cube_384 = new SceneObject("object_cube_384");
object_cube_384->load_obj("primitives/sphere/sphere.obj");
object_cube_384->build_vbo();
Scene::instance().add_object(object_cube_384->ident(), object_cube_384);

SceneObject *object_cube_385 = new SceneObject("object_cube_385");
object_cube_385->load_obj("primitives/sphere/sphere.obj");
object_cube_385->build_vbo();
Scene::instance().add_object(object_cube_385->ident(), object_cube_385);

SceneObject *object_cube_386 = new SceneObject("object_cube_386");
object_cube_386->load_obj("primitives/cube/cube.obj");
object_cube_386->build_vbo();
Scene::instance().add_object(object_cube_386->ident(), object_cube_386);

SceneObject *object_cube_387 = new SceneObject("object_cube_387");
object_cube_387->load_obj("primitives/cube/cube.obj");
object_cube_387->build_vbo();
Scene::instance().add_object(object_cube_387->ident(), object_cube_387);

SceneObject *object_cube_388 = new SceneObject("object_cube_388");
object_cube_388->load_obj("primitives/sphere/sphere.obj");
object_cube_388->build_vbo();
Scene::instance().add_object(object_cube_388->ident(), object_cube_388);

SceneObject *object_cube_389 = new SceneObject("object_cube_389");
object_cube_389->load_obj("primitives/monkey/monkey.obj");
object_cube_389->build_vbo();
Scene::instance().add_object(object_cube_389->ident(), object_cube_389);

SceneObject *object_cube_390 = new SceneObject("object_cube_390");
object_cube_390->load_obj("primitives/cube/cube.obj");
object_cube_390->build_vbo();
Scene::instance().add_object(object_cube_390->ident(), object_cube_390);

SceneObject *object_cube_391 = new SceneObject("object_cube_391");
object_cube_391->load_obj("primitives/monkey/monkey.obj");
object_cube_391->build_vbo();
Scene::instance().add_object(object_cube_391->ident(), object_cube_391);

SceneObject *object_cube_392 = new SceneObject("object_cube_392");
object_cube_392->load_obj("primitives/monkey/monkey.obj");
object_cube_392->build_vbo();
Scene::instance().add_object(object_cube_392->ident(), object_cube_392);

SceneObject *object_cube_393 = new SceneObject("object_cube_393");
object_cube_393->load_obj("primitives/cube/cube.obj");
object_cube_393->build_vbo();
Scene::instance().add_object(object_cube_393->ident(), object_cube_393);

SceneObject *object_cube_394 = new SceneObject("object_cube_394");
object_cube_394->load_obj("primitives/monkey/monkey.obj");
object_cube_394->build_vbo();
Scene::instance().add_object(object_cube_394->ident(), object_cube_394);

SceneObject *object_cube_395 = new SceneObject("object_cube_395");
object_cube_395->load_obj("primitives/monkey/monkey.obj");
object_cube_395->build_vbo();
Scene::instance().add_object(object_cube_395->ident(), object_cube_395);

SceneObject *object_cube_396 = new SceneObject("object_cube_396");
object_cube_396->load_obj("primitives/sphere/sphere.obj");
object_cube_396->build_vbo();
Scene::instance().add_object(object_cube_396->ident(), object_cube_396);

SceneObject *object_cube_397 = new SceneObject("object_cube_397");
object_cube_397->load_obj("primitives/monkey/monkey.obj");
object_cube_397->build_vbo();
Scene::instance().add_object(object_cube_397->ident(), object_cube_397);

SceneObject *object_cube_398 = new SceneObject("object_cube_398");
object_cube_398->load_obj("primitives/sphere/sphere.obj");
object_cube_398->build_vbo();
Scene::instance().add_object(object_cube_398->ident(), object_cube_398);

SceneObject *object_cube_399 = new SceneObject("object_cube_399");
object_cube_399->load_obj("primitives/monkey/monkey.obj");
object_cube_399->build_vbo();
Scene::instance().add_object(object_cube_399->ident(), object_cube_399);

SceneObject *object_cube_400 = new SceneObject("object_cube_400");
object_cube_400->load_obj("primitives/monkey/monkey.obj");
object_cube_400->build_vbo();
Scene::instance().add_object(object_cube_400->ident(), object_cube_400);

SceneObject *object_cube_401 = new SceneObject("object_cube_401");
object_cube_401->load_obj("primitives/sphere/sphere.obj");
object_cube_401->build_vbo();
Scene::instance().add_object(object_cube_401->ident(), object_cube_401);

SceneObject *object_cube_402 = new SceneObject("object_cube_402");
object_cube_402->load_obj("primitives/torus/torus.obj");
object_cube_402->build_vbo();
Scene::instance().add_object(object_cube_402->ident(), object_cube_402);

SceneObject *object_cube_403 = new SceneObject("object_cube_403");
object_cube_403->load_obj("primitives/cube/cube.obj");
object_cube_403->build_vbo();
Scene::instance().add_object(object_cube_403->ident(), object_cube_403);

SceneObject *object_cube_404 = new SceneObject("object_cube_404");
object_cube_404->load_obj("primitives/sphere/sphere.obj");
object_cube_404->build_vbo();
Scene::instance().add_object(object_cube_404->ident(), object_cube_404);

SceneObject *object_cube_405 = new SceneObject("object_cube_405");
object_cube_405->load_obj("primitives/torus/torus.obj");
object_cube_405->build_vbo();
Scene::instance().add_object(object_cube_405->ident(), object_cube_405);

SceneObject *object_cube_406 = new SceneObject("object_cube_406");
object_cube_406->load_obj("primitives/torus/torus.obj");
object_cube_406->build_vbo();
Scene::instance().add_object(object_cube_406->ident(), object_cube_406);

SceneObject *object_cube_407 = new SceneObject("object_cube_407");
object_cube_407->load_obj("primitives/cube/cube.obj");
object_cube_407->build_vbo();
Scene::instance().add_object(object_cube_407->ident(), object_cube_407);

SceneObject *object_cube_408 = new SceneObject("object_cube_408");
object_cube_408->load_obj("primitives/sphere/sphere.obj");
object_cube_408->build_vbo();
Scene::instance().add_object(object_cube_408->ident(), object_cube_408);

SceneObject *object_cube_409 = new SceneObject("object_cube_409");
object_cube_409->load_obj("primitives/sphere/sphere.obj");
object_cube_409->build_vbo();
Scene::instance().add_object(object_cube_409->ident(), object_cube_409);

SceneObject *object_cube_410 = new SceneObject("object_cube_410");
object_cube_410->load_obj("primitives/sphere/sphere.obj");
object_cube_410->build_vbo();
Scene::instance().add_object(object_cube_410->ident(), object_cube_410);

SceneObject *object_cube_411 = new SceneObject("object_cube_411");
object_cube_411->load_obj("primitives/cube/cube.obj");
object_cube_411->build_vbo();
Scene::instance().add_object(object_cube_411->ident(), object_cube_411);

SceneObject *object_cube_412 = new SceneObject("object_cube_412");
object_cube_412->load_obj("primitives/monkey/monkey.obj");
object_cube_412->build_vbo();
Scene::instance().add_object(object_cube_412->ident(), object_cube_412);

SceneObject *object_cube_413 = new SceneObject("object_cube_413");
object_cube_413->load_obj("primitives/monkey/monkey.obj");
object_cube_413->build_vbo();
Scene::instance().add_object(object_cube_413->ident(), object_cube_413);

SceneObject *object_cube_414 = new SceneObject("object_cube_414");
object_cube_414->load_obj("primitives/torus/torus.obj");
object_cube_414->build_vbo();
Scene::instance().add_object(object_cube_414->ident(), object_cube_414);

SceneObject *object_cube_415 = new SceneObject("object_cube_415");
object_cube_415->load_obj("primitives/cube/cube.obj");
object_cube_415->build_vbo();
Scene::instance().add_object(object_cube_415->ident(), object_cube_415);

SceneObject *object_cube_416 = new SceneObject("object_cube_416");
object_cube_416->load_obj("primitives/sphere/sphere.obj");
object_cube_416->build_vbo();
Scene::instance().add_object(object_cube_416->ident(), object_cube_416);

SceneObject *object_cube_417 = new SceneObject("object_cube_417");
object_cube_417->load_obj("primitives/torus/torus.obj");
object_cube_417->build_vbo();
Scene::instance().add_object(object_cube_417->ident(), object_cube_417);

SceneObject *object_cube_418 = new SceneObject("object_cube_418");
object_cube_418->load_obj("primitives/cube/cube.obj");
object_cube_418->build_vbo();
Scene::instance().add_object(object_cube_418->ident(), object_cube_418);

SceneObject *object_cube_419 = new SceneObject("object_cube_419");
object_cube_419->load_obj("primitives/sphere/sphere.obj");
object_cube_419->build_vbo();
Scene::instance().add_object(object_cube_419->ident(), object_cube_419);

SceneObject *object_cube_420 = new SceneObject("object_cube_420");
object_cube_420->load_obj("primitives/cube/cube.obj");
object_cube_420->build_vbo();
Scene::instance().add_object(object_cube_420->ident(), object_cube_420);

SceneObject *object_cube_421 = new SceneObject("object_cube_421");
object_cube_421->load_obj("primitives/cube/cube.obj");
object_cube_421->build_vbo();
Scene::instance().add_object(object_cube_421->ident(), object_cube_421);

SceneObject *object_cube_422 = new SceneObject("object_cube_422");
object_cube_422->load_obj("primitives/sphere/sphere.obj");
object_cube_422->build_vbo();
Scene::instance().add_object(object_cube_422->ident(), object_cube_422);

SceneObject *object_cube_423 = new SceneObject("object_cube_423");
object_cube_423->load_obj("primitives/torus/torus.obj");
object_cube_423->build_vbo();
Scene::instance().add_object(object_cube_423->ident(), object_cube_423);

SceneObject *object_cube_424 = new SceneObject("object_cube_424");
object_cube_424->load_obj("primitives/sphere/sphere.obj");
object_cube_424->build_vbo();
Scene::instance().add_object(object_cube_424->ident(), object_cube_424);

SceneObject *object_cube_425 = new SceneObject("object_cube_425");
object_cube_425->load_obj("primitives/monkey/monkey.obj");
object_cube_425->build_vbo();
Scene::instance().add_object(object_cube_425->ident(), object_cube_425);

SceneObject *object_cube_426 = new SceneObject("object_cube_426");
object_cube_426->load_obj("primitives/monkey/monkey.obj");
object_cube_426->build_vbo();
Scene::instance().add_object(object_cube_426->ident(), object_cube_426);

SceneObject *object_cube_427 = new SceneObject("object_cube_427");
object_cube_427->load_obj("primitives/sphere/sphere.obj");
object_cube_427->build_vbo();
Scene::instance().add_object(object_cube_427->ident(), object_cube_427);

SceneObject *object_cube_428 = new SceneObject("object_cube_428");
object_cube_428->load_obj("primitives/monkey/monkey.obj");
object_cube_428->build_vbo();
Scene::instance().add_object(object_cube_428->ident(), object_cube_428);

SceneObject *object_cube_429 = new SceneObject("object_cube_429");
object_cube_429->load_obj("primitives/cube/cube.obj");
object_cube_429->build_vbo();
Scene::instance().add_object(object_cube_429->ident(), object_cube_429);

SceneObject *object_cube_430 = new SceneObject("object_cube_430");
object_cube_430->load_obj("primitives/monkey/monkey.obj");
object_cube_430->build_vbo();
Scene::instance().add_object(object_cube_430->ident(), object_cube_430);

SceneObject *object_cube_431 = new SceneObject("object_cube_431");
object_cube_431->load_obj("primitives/torus/torus.obj");
object_cube_431->build_vbo();
Scene::instance().add_object(object_cube_431->ident(), object_cube_431);

SceneObject *object_cube_432 = new SceneObject("object_cube_432");
object_cube_432->load_obj("primitives/torus/torus.obj");
object_cube_432->build_vbo();
Scene::instance().add_object(object_cube_432->ident(), object_cube_432);

SceneObject *object_cube_433 = new SceneObject("object_cube_433");
object_cube_433->load_obj("primitives/cube/cube.obj");
object_cube_433->build_vbo();
Scene::instance().add_object(object_cube_433->ident(), object_cube_433);

SceneObject *object_cube_434 = new SceneObject("object_cube_434");
object_cube_434->load_obj("primitives/monkey/monkey.obj");
object_cube_434->build_vbo();
Scene::instance().add_object(object_cube_434->ident(), object_cube_434);

SceneObject *object_cube_435 = new SceneObject("object_cube_435");
object_cube_435->load_obj("primitives/torus/torus.obj");
object_cube_435->build_vbo();
Scene::instance().add_object(object_cube_435->ident(), object_cube_435);

SceneObject *object_cube_436 = new SceneObject("object_cube_436");
object_cube_436->load_obj("primitives/torus/torus.obj");
object_cube_436->build_vbo();
Scene::instance().add_object(object_cube_436->ident(), object_cube_436);

SceneObject *object_cube_437 = new SceneObject("object_cube_437");
object_cube_437->load_obj("primitives/cube/cube.obj");
object_cube_437->build_vbo();
Scene::instance().add_object(object_cube_437->ident(), object_cube_437);

SceneObject *object_cube_438 = new SceneObject("object_cube_438");
object_cube_438->load_obj("primitives/monkey/monkey.obj");
object_cube_438->build_vbo();
Scene::instance().add_object(object_cube_438->ident(), object_cube_438);

SceneObject *object_cube_439 = new SceneObject("object_cube_439");
object_cube_439->load_obj("primitives/torus/torus.obj");
object_cube_439->build_vbo();
Scene::instance().add_object(object_cube_439->ident(), object_cube_439);

SceneObject *object_cube_440 = new SceneObject("object_cube_440");
object_cube_440->load_obj("primitives/torus/torus.obj");
object_cube_440->build_vbo();
Scene::instance().add_object(object_cube_440->ident(), object_cube_440);

SceneObject *object_cube_441 = new SceneObject("object_cube_441");
object_cube_441->load_obj("primitives/monkey/monkey.obj");
object_cube_441->build_vbo();
Scene::instance().add_object(object_cube_441->ident(), object_cube_441);

SceneObject *object_cube_442 = new SceneObject("object_cube_442");
object_cube_442->load_obj("primitives/torus/torus.obj");
object_cube_442->build_vbo();
Scene::instance().add_object(object_cube_442->ident(), object_cube_442);

SceneObject *object_cube_443 = new SceneObject("object_cube_443");
object_cube_443->load_obj("primitives/torus/torus.obj");
object_cube_443->build_vbo();
Scene::instance().add_object(object_cube_443->ident(), object_cube_443);

SceneObject *object_cube_444 = new SceneObject("object_cube_444");
object_cube_444->load_obj("primitives/cube/cube.obj");
object_cube_444->build_vbo();
Scene::instance().add_object(object_cube_444->ident(), object_cube_444);

SceneObject *object_cube_445 = new SceneObject("object_cube_445");
object_cube_445->load_obj("primitives/cube/cube.obj");
object_cube_445->build_vbo();
Scene::instance().add_object(object_cube_445->ident(), object_cube_445);

SceneObject *object_cube_446 = new SceneObject("object_cube_446");
object_cube_446->load_obj("primitives/monkey/monkey.obj");
object_cube_446->build_vbo();
Scene::instance().add_object(object_cube_446->ident(), object_cube_446);

SceneObject *object_cube_447 = new SceneObject("object_cube_447");
object_cube_447->load_obj("primitives/torus/torus.obj");
object_cube_447->build_vbo();
Scene::instance().add_object(object_cube_447->ident(), object_cube_447);

SceneObject *object_cube_448 = new SceneObject("object_cube_448");
object_cube_448->load_obj("primitives/monkey/monkey.obj");
object_cube_448->build_vbo();
Scene::instance().add_object(object_cube_448->ident(), object_cube_448);

SceneObject *object_cube_449 = new SceneObject("object_cube_449");
object_cube_449->load_obj("primitives/torus/torus.obj");
object_cube_449->build_vbo();
Scene::instance().add_object(object_cube_449->ident(), object_cube_449);

SceneObject *object_cube_450 = new SceneObject("object_cube_450");
object_cube_450->load_obj("primitives/monkey/monkey.obj");
object_cube_450->build_vbo();
Scene::instance().add_object(object_cube_450->ident(), object_cube_450);

SceneObject *object_cube_451 = new SceneObject("object_cube_451");
object_cube_451->load_obj("primitives/sphere/sphere.obj");
object_cube_451->build_vbo();
Scene::instance().add_object(object_cube_451->ident(), object_cube_451);

SceneObject *object_cube_452 = new SceneObject("object_cube_452");
object_cube_452->load_obj("primitives/monkey/monkey.obj");
object_cube_452->build_vbo();
Scene::instance().add_object(object_cube_452->ident(), object_cube_452);

SceneObject *object_cube_453 = new SceneObject("object_cube_453");
object_cube_453->load_obj("primitives/monkey/monkey.obj");
object_cube_453->build_vbo();
Scene::instance().add_object(object_cube_453->ident(), object_cube_453);

SceneObject *object_cube_454 = new SceneObject("object_cube_454");
object_cube_454->load_obj("primitives/cube/cube.obj");
object_cube_454->build_vbo();
Scene::instance().add_object(object_cube_454->ident(), object_cube_454);

SceneObject *object_cube_455 = new SceneObject("object_cube_455");
object_cube_455->load_obj("primitives/torus/torus.obj");
object_cube_455->build_vbo();
Scene::instance().add_object(object_cube_455->ident(), object_cube_455);

SceneObject *object_cube_456 = new SceneObject("object_cube_456");
object_cube_456->load_obj("primitives/torus/torus.obj");
object_cube_456->build_vbo();
Scene::instance().add_object(object_cube_456->ident(), object_cube_456);

SceneObject *object_cube_457 = new SceneObject("object_cube_457");
object_cube_457->load_obj("primitives/torus/torus.obj");
object_cube_457->build_vbo();
Scene::instance().add_object(object_cube_457->ident(), object_cube_457);

SceneObject *object_cube_458 = new SceneObject("object_cube_458");
object_cube_458->load_obj("primitives/monkey/monkey.obj");
object_cube_458->build_vbo();
Scene::instance().add_object(object_cube_458->ident(), object_cube_458);

SceneObject *object_cube_459 = new SceneObject("object_cube_459");
object_cube_459->load_obj("primitives/sphere/sphere.obj");
object_cube_459->build_vbo();
Scene::instance().add_object(object_cube_459->ident(), object_cube_459);

SceneObject *object_cube_460 = new SceneObject("object_cube_460");
object_cube_460->load_obj("primitives/torus/torus.obj");
object_cube_460->build_vbo();
Scene::instance().add_object(object_cube_460->ident(), object_cube_460);

SceneObject *object_cube_461 = new SceneObject("object_cube_461");
object_cube_461->load_obj("primitives/sphere/sphere.obj");
object_cube_461->build_vbo();
Scene::instance().add_object(object_cube_461->ident(), object_cube_461);

SceneObject *object_cube_462 = new SceneObject("object_cube_462");
object_cube_462->load_obj("primitives/monkey/monkey.obj");
object_cube_462->build_vbo();
Scene::instance().add_object(object_cube_462->ident(), object_cube_462);

SceneObject *object_cube_463 = new SceneObject("object_cube_463");
object_cube_463->load_obj("primitives/sphere/sphere.obj");
object_cube_463->build_vbo();
Scene::instance().add_object(object_cube_463->ident(), object_cube_463);

SceneObject *object_cube_464 = new SceneObject("object_cube_464");
object_cube_464->load_obj("primitives/monkey/monkey.obj");
object_cube_464->build_vbo();
Scene::instance().add_object(object_cube_464->ident(), object_cube_464);

SceneObject *object_cube_465 = new SceneObject("object_cube_465");
object_cube_465->load_obj("primitives/sphere/sphere.obj");
object_cube_465->build_vbo();
Scene::instance().add_object(object_cube_465->ident(), object_cube_465);

SceneObject *object_cube_466 = new SceneObject("object_cube_466");
object_cube_466->load_obj("primitives/sphere/sphere.obj");
object_cube_466->build_vbo();
Scene::instance().add_object(object_cube_466->ident(), object_cube_466);

SceneObject *object_cube_467 = new SceneObject("object_cube_467");
object_cube_467->load_obj("primitives/monkey/monkey.obj");
object_cube_467->build_vbo();
Scene::instance().add_object(object_cube_467->ident(), object_cube_467);

SceneObject *object_cube_468 = new SceneObject("object_cube_468");
object_cube_468->load_obj("primitives/torus/torus.obj");
object_cube_468->build_vbo();
Scene::instance().add_object(object_cube_468->ident(), object_cube_468);

SceneObject *object_cube_469 = new SceneObject("object_cube_469");
object_cube_469->load_obj("primitives/sphere/sphere.obj");
object_cube_469->build_vbo();
Scene::instance().add_object(object_cube_469->ident(), object_cube_469);

SceneObject *object_cube_470 = new SceneObject("object_cube_470");
object_cube_470->load_obj("primitives/cube/cube.obj");
object_cube_470->build_vbo();
Scene::instance().add_object(object_cube_470->ident(), object_cube_470);

SceneObject *object_cube_471 = new SceneObject("object_cube_471");
object_cube_471->load_obj("primitives/sphere/sphere.obj");
object_cube_471->build_vbo();
Scene::instance().add_object(object_cube_471->ident(), object_cube_471);

SceneObject *object_cube_472 = new SceneObject("object_cube_472");
object_cube_472->load_obj("primitives/cube/cube.obj");
object_cube_472->build_vbo();
Scene::instance().add_object(object_cube_472->ident(), object_cube_472);

SceneObject *object_cube_473 = new SceneObject("object_cube_473");
object_cube_473->load_obj("primitives/monkey/monkey.obj");
object_cube_473->build_vbo();
Scene::instance().add_object(object_cube_473->ident(), object_cube_473);

SceneObject *object_cube_474 = new SceneObject("object_cube_474");
object_cube_474->load_obj("primitives/monkey/monkey.obj");
object_cube_474->build_vbo();
Scene::instance().add_object(object_cube_474->ident(), object_cube_474);

SceneObject *object_cube_475 = new SceneObject("object_cube_475");
object_cube_475->load_obj("primitives/cube/cube.obj");
object_cube_475->build_vbo();
Scene::instance().add_object(object_cube_475->ident(), object_cube_475);

SceneObject *object_cube_476 = new SceneObject("object_cube_476");
object_cube_476->load_obj("primitives/sphere/sphere.obj");
object_cube_476->build_vbo();
Scene::instance().add_object(object_cube_476->ident(), object_cube_476);

SceneObject *object_cube_477 = new SceneObject("object_cube_477");
object_cube_477->load_obj("primitives/torus/torus.obj");
object_cube_477->build_vbo();
Scene::instance().add_object(object_cube_477->ident(), object_cube_477);

SceneObject *object_cube_478 = new SceneObject("object_cube_478");
object_cube_478->load_obj("primitives/torus/torus.obj");
object_cube_478->build_vbo();
Scene::instance().add_object(object_cube_478->ident(), object_cube_478);

SceneObject *object_cube_479 = new SceneObject("object_cube_479");
object_cube_479->load_obj("primitives/sphere/sphere.obj");
object_cube_479->build_vbo();
Scene::instance().add_object(object_cube_479->ident(), object_cube_479);

SceneObject *object_cube_480 = new SceneObject("object_cube_480");
object_cube_480->load_obj("primitives/torus/torus.obj");
object_cube_480->build_vbo();
Scene::instance().add_object(object_cube_480->ident(), object_cube_480);

SceneObject *object_cube_481 = new SceneObject("object_cube_481");
object_cube_481->load_obj("primitives/torus/torus.obj");
object_cube_481->build_vbo();
Scene::instance().add_object(object_cube_481->ident(), object_cube_481);

SceneObject *object_cube_482 = new SceneObject("object_cube_482");
object_cube_482->load_obj("primitives/sphere/sphere.obj");
object_cube_482->build_vbo();
Scene::instance().add_object(object_cube_482->ident(), object_cube_482);

SceneObject *object_cube_483 = new SceneObject("object_cube_483");
object_cube_483->load_obj("primitives/torus/torus.obj");
object_cube_483->build_vbo();
Scene::instance().add_object(object_cube_483->ident(), object_cube_483);

SceneObject *object_cube_484 = new SceneObject("object_cube_484");
object_cube_484->load_obj("primitives/monkey/monkey.obj");
object_cube_484->build_vbo();
Scene::instance().add_object(object_cube_484->ident(), object_cube_484);

SceneObject *object_cube_485 = new SceneObject("object_cube_485");
object_cube_485->load_obj("primitives/monkey/monkey.obj");
object_cube_485->build_vbo();
Scene::instance().add_object(object_cube_485->ident(), object_cube_485);

SceneObject *object_cube_486 = new SceneObject("object_cube_486");
object_cube_486->load_obj("primitives/monkey/monkey.obj");
object_cube_486->build_vbo();
Scene::instance().add_object(object_cube_486->ident(), object_cube_486);

SceneObject *object_cube_487 = new SceneObject("object_cube_487");
object_cube_487->load_obj("primitives/cube/cube.obj");
object_cube_487->build_vbo();
Scene::instance().add_object(object_cube_487->ident(), object_cube_487);

SceneObject *object_cube_488 = new SceneObject("object_cube_488");
object_cube_488->load_obj("primitives/cube/cube.obj");
object_cube_488->build_vbo();
Scene::instance().add_object(object_cube_488->ident(), object_cube_488);

SceneObject *object_cube_489 = new SceneObject("object_cube_489");
object_cube_489->load_obj("primitives/sphere/sphere.obj");
object_cube_489->build_vbo();
Scene::instance().add_object(object_cube_489->ident(), object_cube_489);

SceneObject *object_cube_490 = new SceneObject("object_cube_490");
object_cube_490->load_obj("primitives/cube/cube.obj");
object_cube_490->build_vbo();
Scene::instance().add_object(object_cube_490->ident(), object_cube_490);

SceneObject *object_cube_491 = new SceneObject("object_cube_491");
object_cube_491->load_obj("primitives/torus/torus.obj");
object_cube_491->build_vbo();
Scene::instance().add_object(object_cube_491->ident(), object_cube_491);

SceneObject *object_cube_492 = new SceneObject("object_cube_492");
object_cube_492->load_obj("primitives/monkey/monkey.obj");
object_cube_492->build_vbo();
Scene::instance().add_object(object_cube_492->ident(), object_cube_492);

SceneObject *object_cube_493 = new SceneObject("object_cube_493");
object_cube_493->load_obj("primitives/torus/torus.obj");
object_cube_493->build_vbo();
Scene::instance().add_object(object_cube_493->ident(), object_cube_493);

SceneObject *object_cube_494 = new SceneObject("object_cube_494");
object_cube_494->load_obj("primitives/torus/torus.obj");
object_cube_494->build_vbo();
Scene::instance().add_object(object_cube_494->ident(), object_cube_494);

SceneObject *object_cube_495 = new SceneObject("object_cube_495");
object_cube_495->load_obj("primitives/torus/torus.obj");
object_cube_495->build_vbo();
Scene::instance().add_object(object_cube_495->ident(), object_cube_495);

SceneObject *object_cube_496 = new SceneObject("object_cube_496");
object_cube_496->load_obj("primitives/torus/torus.obj");
object_cube_496->build_vbo();
Scene::instance().add_object(object_cube_496->ident(), object_cube_496);

SceneObject *object_cube_497 = new SceneObject("object_cube_497");
object_cube_497->load_obj("primitives/sphere/sphere.obj");
object_cube_497->build_vbo();
Scene::instance().add_object(object_cube_497->ident(), object_cube_497);

SceneObject *object_cube_498 = new SceneObject("object_cube_498");
object_cube_498->load_obj("primitives/monkey/monkey.obj");
object_cube_498->build_vbo();
Scene::instance().add_object(object_cube_498->ident(), object_cube_498);

SceneObject *object_cube_499 = new SceneObject("object_cube_499");
object_cube_499->load_obj("primitives/cube/cube.obj");
object_cube_499->build_vbo();
Scene::instance().add_object(object_cube_499->ident(), object_cube_499);

Camera *object_cam = new Camera();
object_cam->set_depth(1000);
object_cam->set_direction(0, 0, 1);
object_cam->set_position(0, 0, -7);
Scene::instance().add_camera("object_cam", object_cam);
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

object_setup->add_action(ANIM_TRANSLATE, "object_cube_0", 6.28817394249, 7.8148095574, 6.45158475111);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_1", 8.4731821344, 7.74965677554, 6.75609281804);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_2", -0.336267067578, -3.34815278815, 5.25057630309);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_3", 2.3172251456, 1.51708082579, 8.21907036195);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_4", -2.35682980597, -0.542315159437, 6.72898593089);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_5", 0.531440053327, -8.34512176859, 7.87794567228);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_6", 2.54262813113, -0.208069950458, 8.27124007562);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_7", -2.59772532142, -7.54966986726, 3.35802204629);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_8", -9.27162691137, 8.30023452693, 0.6443725481);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_9", 5.52197092609, -9.07375266749, 4.7126285504);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_10", 1.25241921368, -4.22601558419, 6.30804368195);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_11", 3.14174377071, 6.05736801381, 8.54065460477);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_12", 5.8646082174, -9.64082617482, 4.19268980112);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_13", 1.20781442884, 4.46108342118, 9.07640194596);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_14", -6.14735709919, -2.16458110507, 3.80992403683);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_15", 2.40096390002, 8.65770550578, 9.77897101772);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_16", 3.37360601665, -5.40842374818, 7.49817228011);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_17", -5.02279042952, -6.60063427647, 7.1099339746);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_18", 0.859257846817, -3.53818722474, 6.06029627377);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_19", -7.39411662516, -1.45284973423, 5.82270166306);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_20", 6.23733488175, 6.18642218781, 6.66516668839);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_21", -9.75323713495, -6.46538118584, 7.35796589554);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_22", -2.73421737008, -8.23462026434, 1.69776397443);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_23", 6.79709467953, -4.0660901742, 0.618918056559);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_24", 2.09343263476, 3.01481952751, 9.33809658721);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_25", -3.33803903718, -7.04436006021, 9.70522747999);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_26", -9.8231281712, -7.50201960213, 8.20951817942);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_27", -5.24285217523, 6.66625843175, 9.28049777206);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_28", -1.47503696342, -5.25311614848, 8.32569869303);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_29", 9.03674897309, -2.62463986414, 6.8545681697);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_30", -3.87152794801, 7.98142915822, 7.10563917694);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_31", -6.23601624001, 1.73451414776, 8.73790163137);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_32", 6.32842310533, -1.53508619672, 8.54191174072);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_33", -0.321359679683, -3.54596801161, 1.93145502407);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_34", -4.71915145428, -7.95103457949, 3.63112786552);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_35", 1.46937260658, -2.01274923178, 1.3277874734);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_36", -1.10128094318, -3.11485130309, 7.67099974971);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_37", 2.8206651272, -1.29038189811, 1.84017944443);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_38", 6.16766458251, 5.61298232551, 8.56655486778);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_39", -9.00805140322, 1.56473124004, 8.81007147505);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_40", 6.74011228264, 5.68988586892, 8.07714993493);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_41", 6.8394780241, -0.992255678575, 2.86836526118);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_42", 8.86498147698, -7.3432894606, 3.05591916942);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_43", 6.25893754295, -0.550004636427, 1.01070824076);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_44", -8.53195910876, -2.46171317329, 1.79166863048);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_45", -7.93354931695, -5.90977299773, 9.83725341155);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_46", -7.48400676411, -6.90551075348, 7.70490250347);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_47", 2.66787526897, 8.31900768195, 7.28098115134);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_48", 2.68785540096, 6.12510326495, 2.97364603649);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_49", -3.19924621632, -0.307839394268, 5.66918442027);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_50", 0.535937328548, -5.97064270097, 8.620268508);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_51", 5.06954821779, -8.12548450218, 8.64710445096);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_52", 9.93391697088, 3.8750623942, 2.63022612209);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_53", 2.28322367478, 6.4860681779, 1.20291942162);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_54", 2.02301682323, -3.93303362938, 3.14316451384);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_55", -8.09101509231, 8.93437578502, 3.55408128436);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_56", 5.30957964617, 1.73795470264, 2.60639118246);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_57", 9.10958313905, -3.53401139898, 7.53473912855);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_58", -3.35141097306, -1.5573381182, 5.74829539033);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_59", -1.24372821737, -2.68928166074, 2.37750582083);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_60", 8.80551890326, 9.17715198351, 2.88654395858);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_61", 5.25457225092, 5.95265582935, 2.4315895599);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_62", -3.13372884907, -1.85201160259, 3.07770947623);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_63", -8.05166557602, 7.24170561121, 5.17658037444);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_64", -2.30755708185, -9.15471801793, 7.6359673279);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_65", -1.57509186959, 9.28660414834, 9.7097698939);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_66", 1.9771836811, 5.49859592304, 0.806689573041);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_67", -0.808202474453, -4.18563104459, 2.92000634084);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_68", -0.728523712678, 7.566112208, 6.80023206506);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_69", 2.52733979471, -1.93436209804, 2.97914228457);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_70", 7.05317085228, 5.29391748966, 6.05977977666);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_71", 1.9370329615, 1.57696012302, 7.20455134502);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_72", -2.8974242515, 8.29346662492, 6.02618699078);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_73", 4.75340488376, 5.90190934012, 0.925390757834);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_74", 0.398510326175, -4.77380258442, 3.99502269047);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_75", -1.5622919556, 5.03382256004, 0.388287893477);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_76", -0.945750795287, -5.796589895, 8.47909553025);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_77", 1.41744026762, 7.94001238292, 7.59080713184);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_78", -6.83906703905, -0.85325343811, 4.32476744292);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_79", 3.58969867954, 7.29296564638, 7.35091740557);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_80", 1.65457983488, -2.68191804982, 2.37817060285);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_81", -7.1144089936, 8.47147811454, 6.98431387175);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_82", 5.86171351716, 1.72500079311, 2.07861358243);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_83", 8.02150978364, -4.79138086144, 1.44105405049);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_84", -0.612239830493, -2.4425651269, 5.3421272157);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_85", 3.99305756945, 8.96788323429, 2.64046745837);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_86", 0.17054785835, 5.89505907045, 8.95733600643);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_87", -6.68155613297, -6.50623402377, 0.96750051563);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_88", 9.29738814135, 4.01240346445, 2.41887271641);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_89", -7.72210364771, 1.26898245173, 2.35358778186);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_90", 0.587758654935, -1.51656170442, 8.13201892152);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_91", 1.35068055837, -3.48528897151, 7.84491173303);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_92", -8.81550035634, 4.82557362301, 7.26167606343);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_93", -7.29089922504, 3.54191900635, 7.78930816694);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_94", 5.51881793882, 2.58639063142, 3.43313895068);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_95", -5.93993351492, 2.6010838717, 6.3154882246);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_96", 3.38213457922, -1.24176066389, 6.52109373014);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_97", -9.74616999562, 1.71017071204, 1.26273618857);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_98", -7.33837134028, -8.38329182997, 7.91225438028);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_99", 0.655799554571, 1.94510686526, 3.01359975815);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_100", -2.8066970683, -4.09493837439, 6.10172906111);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_101", -8.40524729442, 6.09318909818, 8.94012242176);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_102", -1.22850732208, -1.4882847502, 7.40816829483);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_103", 8.42222737601, -4.31898368781, 7.44825843527);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_104", 0.219991323738, 1.22722610844, 9.77154464177);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_105", -0.684111449939, 9.39249203317, 8.3590842806);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_106", -4.03793997591, 0.759013012439, 7.17563214851);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_107", -6.16791990613, -0.471962496278, 5.57599525951);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_108", 0.884530103583, 2.96039385113, 2.28649223699);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_109", -2.38656591065, -9.27023566611, 6.39030766427);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_110", 1.47367647559, -0.161910583158, 9.82153455191);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_111", -4.69080676912, 5.32376681154, 6.17757541163);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_112", -3.63734661775, -0.92140887954, 3.54228679536);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_113", 6.33505727142, 1.97602865427, 5.04485879051);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_114", 3.32911582643, 5.63874477258, 5.01733190042);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_115", 3.25539057648, 2.39625116814, 7.88864095447);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_116", -1.97340539466, -5.11575984057, 5.24688606378);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_117", -1.06831383337, 4.11215381856, 9.9193411806);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_118", 6.01856382765, 5.0650034536, 9.4568038714);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_119", -5.98083324007, 8.71037639763, 4.14836544686);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_120", 2.85254133393, 8.21910455635, 3.11066982018);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_121", 2.77366662278, 1.82713498115, 8.05935576673);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_122", 9.73725325603, 9.93844118256, 8.38824171211);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_123", -0.0821391099033, -7.38658561128, 7.08171430454);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_124", -5.893234243, 7.98164039507, 1.10811441942);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_125", -9.9829928186, -8.61822419176, 4.04818208645);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_126", 6.52897802762, 3.94040164822, 9.57117628203);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_127", -6.13006286618, 9.22991802733, 1.50721594874);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_128", -9.63064512357, -9.90186112635, 9.16585541308);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_129", -9.05461665836, -7.43979303146, 7.03790291459);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_130", -4.96785718995, -4.09617034032, 9.21721021606);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_131", 2.37426976914, 1.67297905874, 7.39041540532);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_132", 3.11121641321, -7.7219298266, 2.1309541223);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_133", -1.22150081791, 9.12636865595, 9.23668700368);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_134", 3.72592438102, 1.33576207076, 3.8520406354);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_135", -1.58337610592, -1.48391358202, 0.042732501521);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_136", 0.558465277386, 5.66269001764, 6.49646949851);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_137", 6.84463137012, -2.5226987799, 1.60046414926);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_138", 8.42557016094, -5.45602676734, 1.14722873063);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_139", -5.75531594396, 0.784153147773, 0.145993423952);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_140", -0.262522697312, 4.23182098912, 1.69695552982);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_141", 6.2996884772, -9.09176973693, 3.7571791372);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_142", 3.0983773744, -0.423138216686, 4.2681722589);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_143", 9.41424708876, 8.53656251585, 3.88480107716);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_144", -9.72873713213, -4.79119431633, 3.80374324954);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_145", -2.56345402059, 8.73988081195, 6.76749897257);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_146", 7.63306168285, -7.27077070155, 4.19886600007);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_147", -5.94973996488, 6.72562025812, 7.02328613077);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_148", 2.80981892211, -8.76009908621, 9.13557016661);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_149", -5.49204258326, -3.51817930988, 9.19234958673);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_150", 2.18326373836, 6.81235724964, 2.0395087374);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_151", -9.52851127387, -3.03050077529, 2.49666662102);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_152", 7.05126697754, 6.83009218505, 0.697225739573);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_153", -0.947749149747, -6.72339109893, 5.77116764183);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_154", 8.53423158059, -5.51169004115, 5.17500547649);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_155", -8.07608783506, 2.81755185616, 0.192007912504);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_156", -8.67297106172, -1.17428181908, 0.0835011744364);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_157", -8.13955923519, 1.91695889785, 0.0254681750186);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_158", 0.69123098538, -6.26411457939, 0.268741955526);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_159", 9.44067301337, 2.4274102565, 3.89830261575);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_160", -4.13261392494, 1.07349947572, 9.57130545523);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_161", 6.35162846524, 6.59353985012, 5.55638420225);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_162", -4.76166198927, -3.81482004006, 7.40876312588);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_163", 3.583959211, 0.870106645736, 2.34581847336);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_164", 6.83166210787, -9.35055304319, 1.39305714923);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_165", 7.69179429779, -0.00265504462918, 9.30549167621);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_166", 1.27839591889, 8.58498802239, 5.31941795125);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_167", 8.41668542767, 6.24180406454, 1.77823188349);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_168", 6.14364398591, -3.71595295092, 5.15610019009);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_169", -9.84099520899, -7.24074788378, 0.696770442288);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_170", 8.06859434782, -4.17576525447, 4.931141063);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_171", -9.66659421815, -4.72398068961, 6.81319482899);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_172", -7.19811406963, 5.63761585167, 1.880752692);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_173", -0.305217814089, 7.40848303, 4.24966984375);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_174", 3.65662408429, -3.58005132966, 5.06218800757);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_175", 9.63697967742, -5.34951654091, 0.0701215290404);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_176", -5.80166033057, 6.23712206773, 6.27154945026);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_177", 9.22719844659, 1.79553501768, 5.80015960351);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_178", -0.307377896733, -6.74113641484, 2.68459671363);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_179", -7.97577670502, -9.84282593178, 2.75884724197);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_180", 8.78210033065, 8.24958852759, 1.45868189612);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_181", -2.5324249921, -1.18696776643, 3.96589691412);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_182", -5.32397418418, 6.9458093407, 4.14731007159);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_183", -6.46717415297, 5.0425766999, 9.45079591026);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_184", 9.73097454686, 8.61059684387, 9.66985762542);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_185", -7.51975755101, 9.71759028665, 2.65869578813);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_186", -2.83703471367, -5.81517009084, 3.38791818108);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_187", -0.470268716466, 8.13825573499, 2.6891156436);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_188", 0.668133224165, -4.41549366394, 7.91767500375);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_189", 6.13545450887, -6.26766813445, 1.67910721828);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_190", 3.41909746196, -1.82475644695, 0.0125788569793);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_191", -4.31454332156, -1.9467138698, 1.636771291);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_192", -1.62989619399, 7.1716499431, 0.323827988713);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_193", -8.46614451764, -4.85764016846, 3.73415430711);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_194", -9.21386251172, 3.07965255967, 1.41619302782);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_195", -5.23428174277, -8.55850165568, 6.00473072988);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_196", 7.05896474889, 0.956494039806, 7.37463395894);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_197", 3.92915769418, 4.02077208398, 2.71990422746);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_198", 5.51191986774, -7.35225264287, 3.97750858849);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_199", 0.252666404603, -6.271739, 9.27738496412);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_200", -1.06031918711, -3.67757809118, 0.691508178079);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_201", 9.50745318694, 5.98783557802, 4.79770218352);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_202", -1.23960112067, -4.49162464067, 1.10175447134);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_203", -6.5499927649, 5.89572397224, 3.78139642096);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_204", 8.68733239027, 8.84904229467, 7.56636546358);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_205", 7.97320291522, -2.71422214107, 1.58213273303);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_206", -2.89213181626, 3.49058032882, 1.05891264028);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_207", -1.57478492832, -9.25637579328, 3.29012049499);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_208", -6.11885544868, -7.46316235318, 7.27026595794);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_209", -4.32015378824, -1.26860946033, 7.62107900268);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_210", 4.74707606696, 2.80954398947, 0.965161029853);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_211", -1.57156359396, 6.0451291795, 1.34171217547);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_212", 5.70478114863, 2.3572026505, 0.873187796112);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_213", -5.13810863609, -0.557363569043, 8.27527912467);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_214", -7.48011285448, 9.27042734983, 2.70940727817);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_215", -6.98570587814, -3.006800231, 1.51678592602);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_216", 8.20406891642, -4.35643493184, 6.30111775515);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_217", -6.87497012504, 3.97996536907, 5.09897451393);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_218", 4.60861276659, -0.405148604724, 7.62831178928);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_219", -7.26858323112, 7.89573853865, 5.24709794326);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_220", -7.73655027849, -2.20202224119, 5.22698534128);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_221", -7.70365482687, 2.49341331551, 9.27192958841);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_222", 5.34082137594, 6.60811738572, 3.96784313814);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_223", -8.01801775545, -7.9935037915, 8.25794556788);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_224", -6.24410082006, -5.30010153369, 8.86170872187);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_225", 9.03636728283, -9.31505308141, 6.12604563171);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_226", -3.5391078971, -4.22547465257, 7.70842384077);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_227", 3.28431948303, 7.17121855437, 1.97116702537);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_228", 0.273511231111, -6.52566833616, 0.774163895623);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_229", 7.48160045349, 0.265325124747, 8.96690957769);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_230", -0.431078766424, 4.83351867467, 3.54995436438);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_231", -4.9806996119, -0.0601714601053, 3.52241699309);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_232", 2.58913492324, -7.43607706344, 5.71739940664);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_233", 2.64851486972, 1.52245296438, 3.06119800266);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_234", -3.55324716343, 3.16091723745, 9.24048193437);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_235", -0.721818639163, -1.49144040757, 3.61548427149);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_236", 1.41528816307, 4.4896975803, 1.0472536586);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_237", -0.854584929505, 1.97565578595, 8.97471842704);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_238", 2.93190176403, -1.03306271188, 5.60662762665);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_239", -8.02652676585, -6.17493758674, 6.71937910471);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_240", 2.3092033971, 8.71747167193, 1.03365519599);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_241", -4.89121061147, -0.388737529388, 8.22201463007);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_242", 6.84540911447, -6.88871333708, 7.31818818448);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_243", 0.0595263643816, 1.7412832642, 1.53840356901);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_244", -0.973482996567, 2.75922818997, 8.83679109381);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_245", 1.28198665355, 4.7551743225, 4.62590628753);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_246", -2.51880421129, 5.57690282334, 4.23122608269);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_247", 1.13838905423, -9.4097988369, 8.32811429384);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_248", -0.841358374663, -6.70268994232, 4.18726434159);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_249", 6.25761507214, -5.95865501684, 7.38562045686);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_250", 1.98386867718, -1.68885575498, 8.65537863269);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_251", 7.79759704576, -5.29367390564, 2.34590080479);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_252", -1.76425087625, -4.63929130223, 5.92174240214);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_253", 2.14369830685, 8.68146172185, 4.68540700751);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_254", -6.52108690891, -7.26005679433, 9.817825922);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_255", -9.87680268743, -0.961378743413, 2.27613829318);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_256", 1.18117374053, 2.71011319972, 7.71213458806);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_257", -0.582713501134, -9.85266273251, 3.06533125363);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_258", -1.0411273866, -5.15519677441, 3.79096712471);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_259", -2.35102905317, 3.37006069226, 6.36759372897);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_260", 7.7796463447, -5.78916347855, 4.64542092483);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_261", -5.90168303925, -4.60088794632, 0.996743850204);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_262", -4.82663270803, 2.93745850129, 7.52005134139);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_263", -5.79038365283, 0.967509064693, 4.4031394108);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_264", -4.3444364834, -6.41725679667, 7.94370722722);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_265", 7.48384811378, -2.12774886023, 9.93311420631);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_266", -6.32850519237, 7.72043482735, 4.65826735051);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_267", -5.96958021441, 5.37522343084, 4.02387465357);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_268", -7.33281115444, -1.55154635331, 8.18969808972);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_269", -0.990342370044, -7.37708229571, 2.60445962152);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_270", -3.71511187927, -4.14262745276, 4.35682123626);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_271", 7.51544128831, -8.62884876785, 9.03182101152);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_272", 5.87695002226, 2.87818565901, 9.97221583502);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_273", -3.46429459966, -0.782292930045, 7.30415470953);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_274", 5.3060006932, 1.98243440956, 3.48093266413);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_275", -0.669589898542, -9.50505014425, 4.23011071998);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_276", -0.812923397649, -7.06944133364, 9.21626509904);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_277", 4.87905434739, 2.45775155312, 0.161281839364);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_278", 4.54663975257, 0.570782705763, 0.0958546308422);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_279", 7.41122216386, -9.76603589519, 6.5530125579);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_280", -0.212649838404, -4.76583079568, 0.97222377161);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_281", -1.01782098976, -5.97812990634, 4.17380436719);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_282", 9.2734979367, 7.47183340645, 5.98861069666);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_283", -2.48457342866, -9.20491796633, 2.56105154922);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_284", -8.50364624337, 2.32303552448, 6.06435825412);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_285", 6.0034978031, -4.67905848551, 1.18155053752);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_286", 5.19699219283, 0.386827388912, 9.05342659793);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_287", -1.93596684884, -5.01046498693, 4.23572194272);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_288", -9.72004643405, 7.88532192659, 6.21111009463);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_289", -1.42107509756, 0.816832161077, 7.89020152909);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_290", 1.2294896116, -6.40646864132, 3.63069282867);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_291", 4.63936649521, -7.91293854703, 4.85120260614);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_292", 9.55449359992, 5.00063484314, 6.18518569566);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_293", -6.00211496071, -8.15988312267, 6.29512282323);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_294", -2.22312451074, 1.42137321992, 7.46002861496);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_295", 8.05725366697, 2.47256057008, 0.730771529469);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_296", 4.84984183196, -6.82266926093, 8.39283899495);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_297", 9.58411424747, -9.14803496407, 0.234271024632);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_298", 4.9112803262, 4.69939039292, 0.75834923072);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_299", -1.70571643892, -5.61541775015, 8.31950503772);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_300", 6.86578353103, -8.05002859644, 6.54136830304);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_301", 3.1402937337, 8.65055107102, 4.3229731162);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_302", -5.46211276325, -7.44603872155, 8.62115024967);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_303", -8.34553016083, 2.05057075424, 9.74324536116);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_304", -9.65147021555, -0.829784442937, 5.21428346335);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_305", -3.65906514344, 9.86361004528, 0.583131501461);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_306", 0.462820331689, -2.95720587664, 1.74385293287);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_307", 1.76796871583, 7.70188066758, 2.76508001882);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_308", -3.62449560881, -3.74026286554, 8.18593255984);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_309", -2.34567316983, -9.23587043576, 1.99023981637);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_310", 2.75290025514, -7.1573539773, 5.54308483136);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_311", -4.95164168135, -6.13972764408, 7.09391620856);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_312", 0.945088847263, -7.40039773727, 3.1776764484);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_313", -3.28807335967, -7.87365816322, 3.253960618);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_314", 0.18935301574, 3.09039331684, 0.10425721892);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_315", -9.91702984887, -8.50018393148, 8.54618112133);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_316", -7.49294028831, -6.00089161348, 1.75386295412);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_317", -0.0643965337945, 5.39456154603, 6.46776300755);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_318", 8.21903472056, -5.69561765176, 2.2459991075);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_319", 3.94788122063, 9.9387207863, 2.51515660247);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_320", -7.32278315762, 8.13648656574, 4.91981827311);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_321", -2.41906862348, -4.10378774295, 4.46885347838);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_322", -8.98701406007, 6.51665094372, 0.868595207074);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_323", -9.77397058706, -7.79826859369, 5.61867273974);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_324", 7.18070185268, 6.74009780115, 1.47503473985);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_325", -7.68636753858, 0.18383771109, 3.5260641221);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_326", -0.627011047735, -3.42861223129, 1.33130476709);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_327", -2.61447430336, 7.76703968735, 0.646118254469);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_328", 8.81861347208, -6.62948156101, 3.72633671004);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_329", 2.25211158977, -4.35182901555, 5.73261874535);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_330", 5.79055994573, 0.326465028199, 8.72863334433);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_331", -1.86845962658, 8.70611162995, 4.23848642133);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_332", 1.01352977116, -4.24176244571, 7.41371155144);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_333", -5.51164636286, 8.95219366776, 8.75104349085);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_334", 2.26333412502, 8.5871104564, 5.39254318105);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_335", 5.10787793412, -9.73023338656, 4.20440622866);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_336", -0.374780084784, -0.977881938, 1.48196475973);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_337", -7.48946630984, 1.74224946986, 3.35740403076);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_338", -8.2331908366, 6.64752406847, 7.67641741198);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_339", 2.68432712048, 7.06021409874, 7.5941287114);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_340", -9.31782482835, -5.75446259409, 2.56407426913);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_341", -0.0177662566478, -2.17568726596, 9.28335697965);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_342", 9.90358372731, 2.71407358181, 8.81422258082);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_343", 1.38433340029, -1.70172320555, 1.00851871249);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_344", 8.45868134179, 9.47466349438, 2.43405158997);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_345", 5.14336404985, 1.73761837537, 8.80951435193);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_346", -3.56481025064, -6.7727310021, 6.06756369026);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_347", 0.39196509381, 4.30229469045, 1.0208665087);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_348", -4.31056661563, -2.92302673382, 3.97492069461);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_349", 2.32780383141, 8.61589791659, 2.5920350712);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_350", -4.95033526511, -8.0928779261, 8.51806121019);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_351", -8.91626146819, -4.86970341946, 4.93211304943);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_352", -5.45249587795, 0.346050426019, 2.43504354885);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_353", -1.90497363362, 6.44510751265, 4.32176310551);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_354", -1.38321228377, -5.8588392225, 4.56029866283);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_355", -1.79228544459, 4.4750141606, 0.585318113289);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_356", 1.08407860647, -0.160461785324, 2.15056359164);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_357", 5.90266494308, 8.54956438013, 2.22314174507);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_358", -8.70201527496, 2.41841343496, 6.33550005481);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_359", -9.0114837692, 6.50731910184, 2.30936909628);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_360", 2.08539175926, -6.48670847505, 5.10010959292);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_361", 0.663350153853, -9.52993342279, 8.94984523113);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_362", -8.33858298906, 8.91081144136, 3.17207157787);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_363", 3.18656150636, 0.219959596658, 5.69235181706);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_364", 5.69587741398, 3.32347876151, 4.72670285438);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_365", 9.94075330704, 4.60687755257, 1.1900930961);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_366", 8.44942780185, 0.610035207072, 3.42372864525);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_367", 4.32694491521, 4.37082226839, 8.87655385773);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_368", 2.77416364742, 9.9437103421, 8.31221073972);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_369", 9.14230225556, -4.66459919075, 9.42093968126);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_370", 7.24639566608, 0.727167621598, 6.47345310229);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_371", 6.35346381843, 3.09836206106, 8.16574528515);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_372", 5.29794807909, 8.53513564179, 6.57511051378);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_373", 2.40160370827, -2.43710389332, 4.5922348548);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_374", -9.31120696761, 1.37186797286, 9.42014776079);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_375", 5.49225636943, 6.60219841644, 9.06525626754);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_376", 9.82243680782, -7.25051928544, 1.99946677528);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_377", 6.23065486612, 5.59543947318, 3.29459072272);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_378", 0.387427472758, 9.18874135991, 7.1682524565);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_379", 3.80288225777, -1.55721315163, 6.29041912634);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_380", 9.11552624013, 4.28039364713, 2.286548074);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_381", 3.59399630325, 7.08643110754, 2.4087356432);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_382", 7.78274816841, -0.834521183992, 7.07276482205);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_383", 7.85528439249, 3.73928205247, 9.29576709312);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_384", 2.17260501514, -5.89219441335, 5.24070146838);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_385", -7.18937692472, -3.51788300725, 9.08676534404);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_386", -2.61317241265, 8.93252739024, 2.1627931658);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_387", -9.26811188932, 5.84411526121, 9.94217927333);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_388", 4.04917588771, 1.02500538896, 8.82356646677);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_389", -0.455733034705, -9.2545055558, 7.99495513455);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_390", -9.45025342677, -0.555219349541, 2.83300791355);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_391", -0.387289264844, -4.056055636, 0.822401314559);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_392", 9.04561911975, -9.25140067195, 2.12325949376);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_393", 1.24123569548, -5.69633058773, 8.73001916286);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_394", -5.808278074, -7.83235882856, 1.58707133201);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_395", 3.11111057811, 6.20732774878, 3.59729219898);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_396", -4.96480854049, 1.34037416667, 1.71766139584);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_397", 9.29620032366, 6.30660915127, 5.61117169418);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_398", 5.54450909955, -2.65268155571, 2.71174313372);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_399", -2.17722226269, 7.615431594, 4.59558287164);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_400", -1.64474360235, 2.09585482832, 5.58485747885);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_401", -6.85499378149, -5.94154409486, 9.00285184232);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_402", 3.85228817306, -8.82238805729, 5.17116904324);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_403", 8.37597679505, 3.67863758407, 7.38220131844);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_404", 9.10987738691, -3.65054894181, 2.1071806344);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_405", -9.73506103571, 7.21347038562, 0.635825048276);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_406", 0.360127169986, 6.54904672387, 9.19361015884);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_407", 4.61122977312, -0.479565473936, 3.83277041185);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_408", 5.59759030469, -2.82185685344, 3.22119570346);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_409", -0.241922372929, 2.53572233471, 0.700839289844);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_410", 0.0654105863182, -4.11888251964, 7.83417492682);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_411", -6.17251352131, -5.13828306557, 6.33201333291);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_412", -5.02324739055, 9.53314665085, 1.19357094437);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_413", -6.77842935125, 9.59688723806, 5.81406635712);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_414", -2.35998125986, 6.2001939606, 4.47343692518);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_415", 6.44036601614, -7.11500232435, 1.05207847233);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_416", -4.71499976882, -2.53625776973, 9.17183245887);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_417", -1.29792993759, 5.8011047599, 2.21475977662);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_418", -6.99720938694, 1.01354991524, 9.29529740002);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_419", 1.74258721226, -3.03369416185, 6.64782973234);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_420", -6.1175591182, 6.87814629453, 1.92115718892);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_421", 2.06646785773, -4.56906369186, 2.42650873094);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_422", -0.531672816899, 9.9670402684, 6.72854793233);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_423", 7.04517196781, 2.71518717042, 5.66708145202);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_424", -9.48159496368, -9.14662802808, 2.61288546062);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_425", -6.55607863828, 8.26224014038, 1.23708175);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_426", -9.73554124348, -9.17688446542, 9.47145314407);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_427", -5.183787633, -1.62960927517, 5.47681271752);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_428", -0.697466898615, -4.5283840964, 6.81785929938);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_429", -3.01455901917, -8.13982633409, 6.77263940571);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_430", 3.32540235653, -4.86246727438, 8.72582577462);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_431", 5.84262771114, 5.17055453604, 5.8252069452);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_432", -5.02446857332, -2.20192134562, 4.35981000667);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_433", 9.69158996109, 3.83363533767, 1.83691909874);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_434", 6.51606217415, -4.3335390586, 7.39578335899);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_435", -2.09643562187, -5.46434789317, 9.77305782742);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_436", 2.82129928985, 5.81174929839, 7.45022140573);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_437", 1.23969466366, 8.6019303355, 2.71941660259);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_438", -5.30219784138, 1.77412708579, 7.49109991412);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_439", -7.5198843614, 5.90128812342, 8.86234860922);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_440", 5.23825014692, -6.62077278839, 9.42228814918);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_441", 9.01509816752, -8.66149764167, 4.4521345614);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_442", -3.81668717223, 4.24678651858, 3.24197407958);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_443", -2.61228341198, -8.78484929192, 2.43994216123);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_444", -7.45839809925, 9.74546744999, 8.24478792696);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_445", 4.61649205404, -5.61141915667, 8.81419296053);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_446", 6.65357395345, -7.82861892765, 4.9575457245);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_447", -5.98092005298, 4.61923049, 8.10106733181);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_448", 1.47229237332, 8.66033926144, 5.49583491955);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_449", -2.71085062627, 6.38730049278, 9.89100853246);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_450", -7.53786878486, -1.96369399845, 9.98807534005);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_451", -1.61496855983, -2.69412534179, 7.86308241568);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_452", 5.75761198401, -7.34517432213, 4.4615296806);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_453", 0.541859582606, 5.89380067898, 6.84200952336);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_454", -7.86093248734, -9.31432758787, 3.78988578086);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_455", -2.01958505987, 1.00445620149, 4.53959108176);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_456", 7.67306351126, -6.97037877253, 4.17718600433);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_457", -2.18198840872, 1.73151947824, 6.02652817381);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_458", 1.66371154318, 0.723927350506, 0.362443857699);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_459", -2.76950079628, -8.45791259488, 8.39512549489);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_460", -3.26383010906, 6.82123263189, 3.48240190969);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_461", -1.25416414844, -2.55752683041, 3.8485523929);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_462", -5.27717849393, 7.33076460171, 0.220905614543);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_463", 6.79931728715, 0.420436619395, 3.15844789951);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_464", 1.89635635649, -2.04872039549, 9.81898472534);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_465", -1.19464717988, -9.80477184221, 2.17135920961);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_466", 8.2703475967, -4.66723724583, 0.235173789935);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_467", -6.49093372855, -9.46735947537, 3.11039747274);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_468", -6.62769998122, 5.02136813484, 3.20330738171);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_469", 6.39475738202, 2.94108722363, 6.02901878905);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_470", -2.29860204354, -7.50975322098, 5.96557213238);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_471", -9.57823890622, -8.12660844168, 2.98439673527);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_472", -1.84555336218, 9.64793857579, 0.751871781791);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_473", -7.71778058274, 4.13473822096, 7.93893305375);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_474", 1.35040633262, -4.1467618669, 3.21229605108);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_475", 3.22273409991, -8.71095079371, 8.69735765031);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_476", -0.774571964451, 4.59730816694, 6.69404778351);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_477", 3.87755087967, 2.39469588423, 9.15484007336);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_478", 1.28910716904, 8.99312417679, 8.17668930922);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_479", -4.9299195037, -9.6010788081, 0.416334196767);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_480", -2.023876321, 3.94730926483, 1.30964876378);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_481", -3.88503457446, 4.3986996671, 4.2246363191);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_482", 4.19513921398, 3.14950498368, 7.13484710976);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_483", 7.13762665592, -2.60049572709, 3.8702406104);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_484", 8.74864250357, 2.32060304684, 1.023132102);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_485", -6.2032291739, -5.87083516658, 1.35459628045);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_486", 0.911341471824, 4.90433376233, 4.7284196479);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_487", 1.01535147504, 5.70145801859, 7.64971371582);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_488", 3.23507336512, 4.79796452379, 2.07486073779);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_489", 3.40239786301, -0.121187419939, 1.92703508802);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_490", 4.93816401308, -8.88698180694, 9.15732733587);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_491", -7.88198580761, -2.94831208143, 5.95154890443);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_492", -1.26726962258, -6.20470169322, 3.54548973341);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_493", 1.481285305, 1.8294549231, 4.18845090053);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_494", -3.50342794523, -1.34530950695, 3.71154013201);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_495", 0.903746211764, 5.72209254323, 6.65154511429);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_496", -8.94849331385, -4.25905240866, 0.444685700193);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_497", -8.68661964838, -6.66027915833, 4.4987483038);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_498", 5.66801059953, 9.24802322511, 3.62215350705);

object_setup->add_action(ANIM_TRANSLATE, "object_cube_499", 6.59563171662, -5.18560052315, 5.26654958978);

Animation *object_mess = new Animation("object_mess");

Interpolation *interpolation_0 = object_mess->add_interp();
interpolation_0->set_time(20);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_0", -9.32310878676, 3.89784958606, 3.49817184112);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_0", 1864.30589453, 1521.65885846, 1021.0512067);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_1", 9.11902835317, -6.23682661824, 2.24557389437);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_1", 1015.34986628, -460.882270472, -807.333074315);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_2", -7.79992188969, -5.657605684, 7.61947802165);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_2", -173.078952198, -1434.52230255, 174.178178827);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_3", -3.61364496695, 4.82502583144, 1.13534601369);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_3", -1184.05397787, 340.417111195, -1372.87035281);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_4", -0.564568081317, -4.22697663979, 7.68722404734);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_4", 1988.19483997, 343.98302042, -969.220730299);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_5", -0.581001283919, -7.48845292014, 1.79618392806);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_5", 122.839890734, 949.334509346, 404.637585235);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_6", -9.59710570237, -0.491208892129, 8.0458242567);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_6", 1052.53670002, 1360.45439027, 1459.38484193);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_7", 4.86702352993, 5.58650921465, 1.67409588306);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_7", 592.5833401, -1300.88842095, 1283.7477758);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_8", -3.20770963959, -5.67800002185, 7.88178476096);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_8", -921.180602374, -1260.14707753, 905.601543229);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_9", -8.58115458186, 3.44169379099, 4.8284289743);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_9", -1572.76233414, -410.272788465, 456.930693514);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_10", -8.03456907416, -5.71595409852, 4.49917696081);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_10", -1709.65739747, 273.507117992, -1393.91824476);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_11", -8.52371081384, 8.32280256392, 1.55057756727);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_11", -1133.61499428, 1481.18024507, 1939.06440068);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_12", 9.45350622512, -9.06205864089, 6.66412906395);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_12", 1500.23114085, 684.569329679, -1549.48569386);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_13", -0.48945903344, 6.26727919092, 7.85204391553);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_13", -637.942311965, 1938.10857932, 1271.25409089);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_14", -3.51357563274, 9.75151875147, 7.29229726034);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_14", 66.8724140325, 1787.61404317, -364.986937678);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_15", -4.51403081582, 3.23741199371, 7.1294005615);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_15", 1836.44783284, 1294.44287612, 74.1414008857);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_16", 3.64074589463, -2.7847458108, 7.6116392911);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_16", -776.200068469, 1238.68952952, -916.452407068);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_17", -1.76551023755, 8.46339031532, 5.79355653856);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_17", 1519.87503356, -233.677538389, -308.657577363);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_18", -9.3768851167, -1.55907376097, 3.27197080514);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_18", -1923.88419538, -1287.90273764, 1693.21538762);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_19", 3.33682481411, 4.74278272894, 1.65221763906);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_19", -1168.42511084, 1245.34686426, 757.428036313);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_20", -3.45215765152, -9.34196939274, 3.25785070854);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_20", -1729.86912782, -1643.87277877, -77.0025564018);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_21", 8.22635150097, -5.5791859387, 4.87354617006);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_21", 949.330111211, -1873.35785276, -628.287799124);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_22", -5.0273743676, -1.59694015139, 5.37959792145);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_22", -968.709984578, 1239.73230954, -575.365754271);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_23", 2.19879173131, 9.44861921064, 2.26300698754);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_23", 1568.00802629, 1251.18081037, -1441.9903235);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_24", 4.77904937999, -1.22478675685, 9.8097173951);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_24", -877.658920724, -439.926426287, 226.657580525);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_25", 9.63815025999, -3.94007932991, 7.07333622866);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_25", -474.479939093, -1071.44315878, 1186.74253441);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_26", 9.93464577306, 6.05765325923, 5.61868583819);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_26", 868.290425907, -742.287109325, 153.58074952);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_27", -0.0993307960142, 0.544904567302, 2.07763146704);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_27", 886.502823507, 1875.69225434, 54.2316014039);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_28", 4.96601554429, 4.11936103938, 2.44708089685);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_28", -1373.06549751, 745.097907078, -938.239233503);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_29", 2.12487548338, -5.63326791632, 6.83075186299);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_29", -1884.5501744, -1999.18496711, -1548.55815998);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_30", -8.39381084553, 6.0876510974, 0.773223865471);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_30", -1383.58014, -587.191817779, 671.468213791);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_31", -9.84298287388, 9.88777456602, 8.31823112275);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_31", 875.762204351, -570.012610396, 788.769758496);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_32", -7.46816118831, -0.482512356011, 9.15195834047);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_32", 1544.6506738, 92.0112812963, -423.775688958);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_33", 2.45086206411, -4.39007809211, 3.97546384798);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_33", 465.438948285, -1282.72709773, -1042.18197409);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_34", -5.56758488089, 9.66019945379, 0.426329320578);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_34", -685.262196333, 1118.92134482, -1633.97657325);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_35", 5.88551560016, -5.19213557178, 9.30275887813);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_35", 1528.08200321, -1079.2880485, -1896.46358811);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_36", -0.0383938183946, 0.839797835398, 2.57646265626);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_36", -242.193816389, -1187.3639704, 497.079919628);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_37", 5.87923947554, -3.55308232059, 7.79665543613);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_37", 1610.43718719, 1673.60647487, -1793.60377473);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_38", -6.91468894718, -8.45842591427, 5.53010020288);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_38", 499.166008034, -984.34154204, -1168.33756604);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_39", 6.17971912673, -5.96927767648, 8.85730410502);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_39", -786.20742166, -691.163121692, 703.86230249);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_40", -2.72733573035, -2.1507942652, 6.3575079236);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_40", 1224.60892954, -931.383565913, 536.55422891);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_41", 1.55876109786, 2.46508612048, 3.86497238713);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_41", 1163.99727689, -1720.08426654, 760.021321365);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_42", 6.80035741969, 0.546214837581, 2.41479225472);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_42", 1988.01293817, -1842.79694479, -504.328267048);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_43", -5.54599558907, 4.67168575597, 5.748347717);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_43", -405.54282715, 1927.36483161, -246.317318119);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_44", 7.8956530541, 8.72155334833, 4.12873453065);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_44", -1998.33963355, 932.918124759, -853.894484844);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_45", -8.55919217071, -1.17347509385, 0.306095655555);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_45", 70.2049998816, 99.4021548511, -1178.18301801);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_46", 9.2618447546, 5.91913524868, 7.83286576127);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_46", 470.083316266, 1236.96327036, 1656.24548374);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_47", 4.49146976389, -8.48777247446, 7.97706029857);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_47", 885.367809762, -465.62414872, -224.343336915);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_48", -9.56197674265, 0.667002107434, 4.98998361665);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_48", -299.566694133, 1362.19833115, -950.267984313);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_49", -9.69317260874, 1.46244369524, 4.58025835345);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_49", 538.495930312, -1946.74717909, 1239.77755914);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_50", -8.75679457444, -4.97296718002, 6.07278244403);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_50", -1006.70764677, -1020.08612728, 518.70959484);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_51", 6.56080546801, -1.38096946608, 4.56511515476);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_51", 1414.42143197, -1459.58807761, 564.855771977);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_52", -8.15942487683, 8.83266951189, 0.617202492007);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_52", -76.9418816398, 1017.34663643, 1420.24404409);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_53", -8.05822879244, -3.75420915902, 9.16700536647);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_53", -1812.8645286, -1088.0042987, 440.084666747);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_54", 0.609193355736, -3.98287791953, 4.91265055125);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_54", -117.84848751, 1119.83696751, 1264.536788);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_55", 2.4206344728, 9.41872503036, 1.38013071439);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_55", -188.309794899, 244.351465449, -634.257961034);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_56", 5.54439709163, 9.85562666984, 2.86664352984);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_56", -444.849025923, 935.135389441, -1.98767205221);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_57", 0.472648608153, 1.45930079048, 5.65073752571);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_57", -1666.54275259, 1022.24632961, 419.331898655);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_58", 9.45491669896, -4.69652003478, 1.68690242649);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_58", -1281.21881451, 1681.23128207, 1643.37592071);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_59", 7.32215230679, 2.07150731462, 3.97046326636);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_59", 729.38290075, -873.006560516, -1890.15389899);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_60", 8.44638570305, 7.52380326487, 0.0340873529068);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_60", -325.424798173, 97.4432786204, -1290.03770204);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_61", -1.31907201599, 4.66643801636, 6.76354443571);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_61", 243.880183616, -302.711722305, 438.051858355);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_62", -5.22298609577, 1.59401162101, 0.753072669044);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_62", -1994.90846784, 37.3017307927, 1879.55631426);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_63", -5.87532089126, 2.62921772734, 4.41472445467);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_63", -935.841111482, 1823.50857932, -1527.61388892);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_64", 1.70614506432, -6.69848391483, 3.6728498518);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_64", 1459.32894087, -1550.51099581, -1972.66370238);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_65", 0.641916960029, -7.76322538869, 3.97089340268);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_65", -1563.2088389, -902.648414883, -1989.91672319);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_66", 0.552684236834, -8.85275491273, 5.08549972174);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_66", -206.516747908, 498.325020088, 1658.1518652);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_67", 0.59654673357, 3.25555003736, 6.22707656345);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_67", -85.7686283897, -833.676552204, -965.096610107);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_68", -2.47187117704, 7.69317178339, 3.95927453005);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_68", 1127.10638273, -1357.02949061, -1972.99642459);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_69", 8.42382715158, 0.573950115071, 1.89361631178);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_69", 666.377401986, -1488.49242532, -1211.06018049);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_70", -4.7381286743, 3.7005109506, 3.74376479881);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_70", 1738.52769801, 13.2248141373, 1257.87397691);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_71", 6.4486112605, -5.12433798744, 7.04243495765);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_71", -1886.68646388, 1040.03345296, 1449.36631822);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_72", 3.42884374186, 1.32300204488, 9.95575961318);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_72", 287.765607969, -1863.59718137, 434.393006531);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_73", -6.26618077532, 3.86946743987, 3.76702072795);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_73", -1995.09281386, 126.998101199, 1490.42548244);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_74", 3.81608822462, -8.29095052781, 6.17007783064);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_74", 580.481912307, -344.990848378, 125.388178554);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_75", -4.20540837627, 3.15575872813, 8.88938681499);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_75", 1764.41473062, 152.677634758, 1478.23184055);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_76", 1.50787151621, 9.59910414783, 6.08574555864);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_76", -1474.90631279, 832.133941311, -743.266735894);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_77", -2.58628699898, -9.08450609223, 6.06821032);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_77", 928.210486968, -802.109370369, -1770.01451319);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_78", -3.18149982515, 2.04695428322, 1.12148828917);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_78", 1107.57179227, 369.739605861, -937.872053813);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_79", 9.61673648486, 4.9369684669, 2.81299616602);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_79", -1341.8406193, 530.147848447, 774.128505279);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_80", 2.4006020756, 4.5130092987, 8.44714383355);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_80", 343.508261862, -1284.59490103, -963.459212292);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_81", 6.835874312, -2.86004750704, 8.21131336644);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_81", 1927.59531357, -1164.01680348, 1305.36785822);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_82", 7.70562816886, 2.30800052858, 0.187706934094);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_82", 181.388292192, -1323.12819556, 971.158208293);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_83", 4.89347479562, -0.794438628415, 2.19378950311);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_83", 1236.6485978, 257.527101105, 177.581305072);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_84", 6.50046118401, 0.938540555357, 9.4084583541);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_84", 1932.45859066, 649.356325457, 507.054993756);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_85", 9.87692805981, 2.22300455048, 5.09140491952);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_85", -1365.03375914, -1985.8183954, 1831.70114372);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_86", 7.16539257603, -2.64444835649, 5.38254713484);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_86", 323.150003217, -1996.31793669, 1901.10906967);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_87", -4.79795423501, -8.54028066552, 4.59971954314);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_87", -1764.15119839, -565.323115173, -1867.48225326);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_88", -3.75966476448, -5.31708820722, 7.65716497518);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_88", 20.5113435928, 1426.56798372, 367.31463466);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_89", 0.991734178826, 7.35495606503, 8.15741394258);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_89", -34.78170228, 1789.30096602, -904.971763385);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_90", -9.78642643192, 2.97646165152, 6.68439166773);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_90", -809.192594172, -1124.11428054, -395.74961252);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_91", -7.66936665395, 8.34226354022, 1.15951629953);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_91", -1285.5925648, -1668.41221975, -1125.62941144);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_92", 3.49542945282, 7.74785577381, 5.04642038872);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_92", -318.605189877, 906.685339777, 1075.03987767);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_93", -8.88706288184, -5.63911635893, 9.28732172674);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_93", -1195.45786762, 1437.11097108, 752.39249642);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_94", -1.68086158688, 2.87295011446, 3.6317665);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_94", 1469.06765427, 381.739637235, 1990.56609973);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_95", 6.46045638948, 8.39854170144, 1.41441055385);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_95", -787.251834878, -1351.36508771, 1907.87669752);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_96", -5.86869161318, -9.20827008369, 0.649837276848);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_96", -591.433468637, -689.060724394, 1822.71694975);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_97", 1.62425225111, 3.10225484597, 4.40797449405);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_97", 699.960272311, -1613.57394571, 1982.61433427);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_98", 5.60077124825, -2.29367420177, 9.63583083703);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_98", -652.325776769, -1230.6639674, -1480.53626358);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_99", 4.34773704491, 8.80226432823, 3.00172301918);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_99", -1124.75677215, -656.635467115, -1140.04008539);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_100", 0.54421095101, -0.974061925917, 3.49296719739);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_100", 1543.93126004, -1999.29111863, -1513.90934431);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_101", -4.50501377252, -9.9953469304, 8.22682622275);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_101", -327.504949883, -1858.8269642, 14.8361423168);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_102", 7.03168289658, -3.28204080026, 6.43406591698);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_102", -812.709258685, 1824.76192244, 1462.08248931);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_103", -2.19494314263, 7.93259994418, 9.54325031335);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_103", -138.450434314, 1299.34690813, 1142.71583266);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_104", 6.66195854755, 3.28138482441, 4.44290685366);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_104", -946.46604468, -1667.77208239, 1152.9718377);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_105", -5.75967743546, 8.28085390746, 5.64425809103);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_105", 958.863868022, -1965.52172552, 1439.71858532);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_106", 5.01370332858, -6.22275896882, 5.96063312932);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_106", -860.027088924, -1484.6314779, -1159.20006131);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_107", -2.60982490975, 7.70287082833, 9.4877547094);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_107", -515.148043325, -1210.84346132, 1057.58380704);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_108", -0.966748910695, -4.12305098191, 0.103493747362);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_108", -550.415948224, 1109.73009946, -805.804896875);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_109", -8.0024043272, 1.95412070941, 8.41893336242);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_109", 1652.34760443, 1536.54895393, 1997.03807658);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_110", -5.57423501503, 8.58125203736, 2.74517377258);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_110", 1946.34200575, 885.080166302, -1492.11803124);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_111", -9.62846821324, 5.919567677, 2.79930686436);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_111", 565.183854245, -804.169447612, -1370.54312767);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_112", -1.62056281509, 9.97044675176, 0.714741702485);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_112", -1935.27168914, -58.6596975367, 498.234016324);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_113", 0.550915143915, -5.88577669057, 9.13445950201);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_113", 458.629726685, 1658.11567632, -1447.23253659);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_114", -7.9687294084, -9.96870174729, 9.9804946096);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_114", -1460.44823686, -1366.29918943, 722.663040341);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_115", 5.03633291143, 2.70391547691, 5.69937255848);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_115", -267.286062604, -1248.72343052, 764.724727412);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_116", -4.03761906625, -2.22723931072, 6.03557965763);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_116", -1983.15391801, -1715.19529768, 707.079396964);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_117", 1.68313685967, -7.79250563522, 5.71386208074);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_117", 716.985155223, 734.332505865, 392.178918739);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_118", 9.08571179183, 3.565857212, 8.26094959933);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_118", 1035.32451669, -1239.35351423, -462.940806748);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_119", 2.38185549355, 9.48934830796, 5.13628315821);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_119", 1572.33239523, -1094.23935186, -959.912615198);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_120", 5.17379035865, -8.86894023594, 2.02745164959);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_120", 1059.48147017, -426.27455435, -1266.32893554);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_121", -2.52290840284, 4.60110015549, 4.07060258445);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_121", 1956.1367016, -711.215896718, 1705.2668703);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_122", 7.71506317884, 1.39605483134, 1.36476069197);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_122", 911.241363391, -1328.47478499, -206.9393573);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_123", 5.53583731444, -6.49738395639, 1.06256881702);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_123", -1882.08562869, -1214.41013647, 181.04391514);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_124", -4.09081658481, -9.94404354868, 6.2611799238);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_124", -1868.73044988, -1233.86188187, -141.61647249);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_125", 6.0846907086, 4.9549939839, 8.37755279814);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_125", 359.400817802, -479.813129595, 1574.52162412);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_126", -5.14336808741, 0.480305794316, 3.34332463531);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_126", 774.967741531, 891.957823293, 562.697297001);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_127", -4.57686366723, -1.34996697925, 4.83320269327);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_127", 191.035673221, 1278.29525592, -1033.83321974);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_128", 7.6405994207, -5.13242189014, 3.49056229467);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_128", -911.940944627, -826.798066383, -1514.85892319);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_129", -5.61512654037, -0.433609446456, 9.6575369077);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_129", -956.18243176, 680.230846743, 1852.92988263);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_130", -5.20931106701, 4.49669217942, 3.02814341401);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_130", -1515.14900283, 58.7434683333, -1988.69603318);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_131", 0.812442472174, 8.39662081307, 8.19403022579);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_131", -396.79838793, -1489.30680418, -1441.93660551);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_132", -1.36292183526, 4.64211795982, 6.30539589725);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_132", 82.1549436603, -532.981189835, 124.142405438);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_133", 6.54552822593, 8.81035573586, 4.54217700444);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_133", 1690.31352847, 169.797772747, -1584.88664965);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_134", 0.703654063396, 2.81499182004, 5.21686756176);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_134", -179.449164228, 279.03020145, -1252.69482864);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_135", 6.49794547097, -0.891314713325, 0.821883419693);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_135", 505.962805784, 1262.52263225, 108.115729336);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_136", 1.88911813654, -3.50013533862, 3.27529069109);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_136", 1889.37924137, 943.264773132, -1689.33505366);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_137", -3.45653729233, 1.16303519855, 2.58592204476);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_137", 1687.03711664, 1711.81392175, 1678.97561269);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_138", 1.08837390978, 6.8773010578, 4.52660478964);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_138", -417.09728142, 1387.98625041, 616.463966939);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_139", -0.00908822357649, -9.41947700202, 1.93113466623);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_139", 1426.96783208, -1879.26206678, -1502.53155626);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_140", 5.95204827379, -2.85913857162, 4.42718172205);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_140", 1508.81700605, 444.932965914, 216.2146608);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_141", -0.118112860456, -7.83459547535, 6.08495355877);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_141", 45.9863116464, 996.945460484, 1085.85062717);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_142", 6.70508180349, -6.93724762649, 6.06703759952);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_142", -239.540943807, 1299.08418556, 245.294119894);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_143", 9.3974457112, -8.97945773642, 1.83884429561);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_143", -1263.18025184, 1120.08874696, -871.748217968);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_144", -4.7163190132, 8.29238419694, 9.86737517625);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_144", 790.082799691, 691.600960669, 481.87124161);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_145", -0.233662567144, 2.35496196775, 8.80779538856);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_145", 367.273519392, 1087.62386015, -1661.5962876);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_146", 2.65724750054, 2.21093896156, 8.9325915198);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_146", 1852.2597952, -282.502727728, -482.554923054);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_147", -1.98219476041, 9.19999209587, 4.7250457141);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_147", 1221.9639985, -478.495331953, -1761.74828006);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_148", 5.41792252789, 0.0870902943007, 2.46577813517);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_148", 952.716497199, 493.298780919, 356.263319381);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_149", 0.138045069072, 6.32825801062, 4.16455657982);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_149", -1046.23318355, 846.119842859, -1802.73916667);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_150", 7.92994419345, -3.74545614987, 4.10644431919);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_150", -316.620916502, -1977.59671525, 685.565026431);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_151", -3.95579734265, 3.24959114001, 4.31727083181);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_151", 1339.22372327, -1310.3603061, -1263.42104496);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_152", -7.05874222224, 7.35043979244, 1.54775847785);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_152", 881.084251438, -1868.58575566, 1434.40356854);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_153", 6.63686480409, -6.24509318093, 1.78211033149);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_153", 1052.26857714, 955.509337882, 6.32004743176);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_154", 7.43585841082, 5.79503005895, 8.5871339954);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_154", 226.371837906, -686.641593513, -1004.22866345);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_155", 9.04487760773, 3.77577513667, 1.50875190863);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_155", 85.5870139263, 1949.43818657, -1600.39519025);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_156", 2.9340984262, 2.66548772534, 6.7633166493);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_156", 1128.30290297, 730.518177123, -1835.96528196);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_157", -8.10856405384, -2.29083431657, 7.28448546572);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_157", 426.348742949, 879.665653236, -1901.1785117);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_158", -5.00048931113, -3.13677697298, 2.90144403278);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_158", -1237.18773976, 588.639292097, 1584.58852387);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_159", 7.58894058433, -7.66479760148, 9.08835242988);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_159", 1608.84265883, 885.609615226, 1743.93324781);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_160", -3.72821921457, 8.60705154555, 0.49923216848);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_160", -711.196480076, -518.961579862, 835.47342412);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_161", -2.61126271308, -9.92742905835, 9.51688165407);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_161", 149.469402659, -1673.56573562, 1303.46035724);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_162", 3.73249840792, 6.65584357934, 5.1132032215);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_162", 1587.80492218, 211.530588908, 271.043718773);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_163", -9.08047947018, 5.25500145928, 7.98579940131);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_163", 1143.79441245, -241.766905618, -1332.13036045);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_164", -7.94545821605, -9.96129426056, 4.61527373379);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_164", 514.567544593, -1800.09050265, -180.410041799);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_165", 1.07595266231, 2.72169791613, 7.12479732558);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_165", 1494.82879491, 1603.53309258, 900.657812925);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_166", -0.357937739184, 4.71657869601, 2.4265840673);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_166", 881.887367477, 165.289177727, 1777.80828758);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_167", 4.85538257783, -1.95089676099, 4.01403517299);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_167", 1929.38173034, -193.763200652, 444.786322063);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_168", 4.27109171313, 2.03562425089, 8.35228008957);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_168", -318.581362731, 1314.05398994, 1548.52231061);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_169", -2.40220928938, -4.84834022973, 5.19954009161);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_169", -277.624147557, 295.95490412, 1977.51497922);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_170", -2.99683117945, -2.03102474343, 9.17035525198);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_170", -963.434517789, -1402.17457381, -1702.50311351);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_171", -1.69921797467, 0.0921885614352, 0.00976570736005);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_171", -1264.29177508, -495.568330093, 1989.40548931);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_172", 5.91136376701, 3.49631683252, 6.47173909172);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_172", 441.371107492, -639.692059819, 1492.549738);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_173", -3.46683465953, -2.57351632117, 5.36636637591);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_173", -64.3072330748, -146.769795058, 188.114435175);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_174", 9.7257535386, -3.16668726441, 9.53160698287);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_174", 1921.15797448, -657.76100144, 1529.9684215);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_175", 0.472453274265, -4.71493507119, 0.177877209299);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_175", 182.249267265, -1381.92824839, -731.955702736);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_176", 8.52984476709, -1.90670650051, 5.82088652536);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_176", -1759.94606967, 1246.61194172, -150.248894743);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_177", 8.14548579141, -4.09735140708, 6.85945582807);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_177", 1957.45331132, 1012.29460447, 114.079371506);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_178", -5.39589733288, -1.61691963722, 0.468396771652);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_178", 1711.31497689, -1329.09495151, 703.058772613);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_179", -8.55477575015, -7.70601903977, 3.90705127856);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_179", -577.63320243, 420.840173977, 1509.05192281);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_180", -6.36074169675, -8.73820892927, 1.1133195553);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_180", -501.880359911, -446.77243411, -1971.40805909);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_181", 9.42367804771, 4.45840309382, 1.16508127013);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_181", 1574.72510542, -252.373034956, 1983.67813162);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_182", -7.87991574787, 4.52833097244, 1.70162281829);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_182", 278.677766347, 616.142210888, -1059.35318334);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_183", -2.08610487027, 8.22274005077, 2.30191235724);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_183", -1721.9401523, -1133.73318731, -464.115937055);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_184", 0.537124383079, 0.945093731947, 3.99640326904);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_184", 1233.79682395, 1796.33160401, -944.487424954);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_185", 5.52149725047, -4.20390535335, 9.33750308919);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_185", -496.925344901, -989.998812521, 1519.9199478);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_186", -4.41706171361, -6.12140130464, 6.99779333125);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_186", -118.854618339, 1135.06294575, 643.259708319);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_187", -7.82763090478, -0.426537271281, 5.71635602528);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_187", 836.642634225, -1276.17625559, 1821.08420634);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_188", -8.82273851568, 1.44473653175, 0.203698886698);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_188", -1380.90150177, 1315.22524394, -1748.50353476);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_189", -0.0730176829022, -8.14928819342, 8.7813738926);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_189", 368.635331016, -20.1283556225, 731.593042639);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_190", -1.94148277074, -0.00712064572794, 1.96252108833);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_190", -1310.30104443, 323.130493845, 22.7335192827);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_191", 0.2499054474, 5.10442461042, 2.78280977534);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_191", -1591.35337409, -754.416748986, 935.74827442);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_192", 3.14363969866, 9.6846361049, 3.03567422566);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_192", 181.490232391, -545.59580584, -838.298164923);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_193", -8.65259738852, -5.90261989676, 7.52682361541);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_193", -1373.94133963, 1135.84156265, -268.192176685);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_194", 5.11882688162, 5.5687663798, 9.61541512497);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_194", -533.290212205, 118.678122427, -543.681377944);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_195", -0.0167833403232, 7.12405087675, 6.08188363808);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_195", -612.658990677, -378.590117584, 160.596756288);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_196", 7.32353657724, -8.48880591281, 7.00250904188);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_196", 85.6999698487, 1942.91373511, -541.705561828);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_197", -2.99245994276, 2.51133722258, 7.80931786234);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_197", 808.037712713, -666.885456025, 1624.2475262);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_198", -7.46898036666, 5.03498297043, 0.257355975153);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_198", -1819.62471502, -313.377892734, 1897.86793468);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_199", -1.86093096165, -4.81569258385, 0.87638184571);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_199", -1819.92409442, 435.947627677, 899.944762534);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_200", -3.64418116172, 4.47100105423, 6.88314625967);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_200", -1827.88938334, 1980.33882564, -1007.27166119);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_201", -6.89660113152, -1.10279505131, 3.29953977002);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_201", 1008.33239905, -91.4525609143, -496.450962362);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_202", -9.22277613537, 2.09300956518, 6.66423274758);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_202", 106.375271663, 1123.15314689, 1109.88132669);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_203", 6.24677011742, 5.9937326605, 3.57366044178);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_203", 395.515652757, 373.810673678, 687.723193746);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_204", -7.05131750171, -0.540633557363, 2.90115430702);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_204", 1780.11685607, 665.182308631, 511.00969088);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_205", 4.00633788359, -5.98422595777, 6.2530118617);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_205", 370.12686942, 630.24632513, 1596.19628164);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_206", -9.02047481019, -6.34185884749, 6.2251426251);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_206", 264.62001849, 1379.04991764, -1387.03611373);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_207", 8.0206732527, 0.0526560126174, 2.87140665788);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_207", 645.120266559, -1172.01502902, -35.1094175298);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_208", 3.33162000945, -4.26204660759, 9.43659681292);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_208", -865.843244761, -1608.15687464, 614.075770202);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_209", 8.46998008214, -3.49577505739, 9.6510603796);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_209", -1978.25905883, 1716.74907093, -982.736240855);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_210", -2.40941393907, 3.26889702283, 3.48023814347);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_210", -1682.5154104, -1560.54811642, -740.938161002);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_211", -8.22910183193, 2.37052475088, 7.18661694942);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_211", -1310.93175325, 57.9424659752, -1034.81149304);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_212", -5.42812548696, 3.36876652452, 5.85635679338);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_212", -615.889512737, -174.875000567, -1181.29438894);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_213", 8.85839121819, -2.76567372605, 3.21492398164);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_213", 964.94884703, -943.591089873, -1588.77894087);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_214", -6.23891838535, -1.11974148035, 7.20825896439);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_214", 508.102192695, 1971.3066373, -343.38047704);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_215", 9.51621419055, -2.53212915903, 7.62399560395);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_215", 1909.64527082, 1831.82264703, -989.895017921);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_216", -6.04339745428, 1.54647947024, 7.12681544052);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_216", -1903.03454034, 35.7929186256, 424.715110306);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_217", -0.271846868536, 3.65411643362, 1.48842681568);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_217", -764.048065136, 1314.74181821, 675.761644021);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_218", -0.138455319614, 0.362382080533, 9.39469252397);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_218", -720.92409873, -578.542377766, -1467.97849877);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_219", 7.75902256779, -2.94237180741, 4.86016661936);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_219", 278.585635105, 1757.79975781, 922.201310803);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_220", 0.674621739372, 9.63127253491, 5.83367745293);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_220", 247.882780138, 887.228420137, 34.1754142333);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_221", -0.239926153401, -6.93814887399, 5.55199335478);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_221", 1097.70761362, -512.104775622, 1690.08202952);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_222", -6.35302873629, 4.82378066678, 1.95867326762);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_222", -1615.95568803, 1006.97012291, 1309.52180088);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_223", 0.889575321073, 5.25032567252, 1.49970431304);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_223", 1904.82067473, 1787.24270189, 1568.11819246);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_224", -4.40040814764, 5.06689342327, 7.59123047924);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_224", -1724.05430783, -1221.93479664, -961.516590837);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_225", -3.01789924435, -8.24086536765, 8.92888674616);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_225", -1401.93380752, 1387.64463109, 1150.47533451);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_226", 7.168708761, -2.87544558514, 5.57575554642);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_226", -411.025371952, 1399.50807563, 1317.33494102);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_227", 2.19560955431, 4.10491163619, 4.02309394359);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_227", 1017.30623257, -1380.67105835, 1140.26040009);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_228", -3.28409261259, -7.05832901358, 7.16103822303);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_228", 1044.47426339, 1603.90041775, -755.500915329);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_229", 5.82957842515, 6.29464716661, 5.31099851908);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_229", -196.007655972, -1485.60764712, -1432.40780758);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_230", 3.68909395848, 6.55359597603, 3.35737756674);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_230", 477.536466538, -1166.16714864, -859.216339501);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_231", 2.75631739432, 5.59139686077, 1.94052487693);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_231", -58.6461128324, 1662.80441115, 1566.32597157);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_232", -4.48491942418, 1.93944080155, 5.2852676002);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_232", 1632.8915109, -1460.89372651, 1679.61066942);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_233", 5.50430846174, 0.999147272059, 4.24976583397);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_233", -346.708878633, 1803.15643089, 44.45314781);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_234", 4.17463751401, 2.71690151853, 8.17675755298);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_234", -1750.80363864, -1675.09602284, -425.153183831);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_235", 0.621934262139, -1.82043467046, 3.51366673293);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_235", -495.483804934, -1144.41844458, 942.210487114);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_236", 6.95843925712, -9.06469071509, 1.25920447531);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_236", 1856.17153294, 1623.16979437, 1884.80572418);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_237", 6.50815070903, 4.69983156176, 6.78703209161);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_237", -230.861027898, -553.490105127, -1507.76395649);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_238", -9.62364537231, 7.57611820734, 3.57210952985);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_238", -65.00019339, 709.961868152, 1099.26536598);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_239", 2.87054041884, -4.49558691732, 4.24973120806);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_239", -771.181564875, -920.749134561, 1917.79732408);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_240", -4.322777427, 7.88262013726, 8.45348318455);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_240", 1895.41137232, 1718.73082359, -10.0713021641);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_241", 3.01088346048, -9.16096798256, 4.71871822888);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_241", 1831.09139473, -1745.56799941, -1259.61687515);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_242", 0.0730773761246, -2.47673709984, 4.9919251778);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_242", -706.572601599, 1659.83255177, -1127.21030996);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_243", -2.53236328131, -3.69865927559, 6.91345118715);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_243", -1487.75775693, 1263.7765377, -1947.38572788);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_244", -4.16092162528, -2.73992241608, 3.09661299531);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_244", 1662.22435765, -1746.49046873, -904.881118298);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_245", -7.91446757843, 7.43613036098, 1.96637595608);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_245", 250.45705232, -422.14033986, 1263.50810517);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_246", 9.36113167438, -2.96816902796, 2.47148306884);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_246", 531.834633096, -1088.22167732, 96.6037850868);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_247", 1.56461834696, -8.7830953915, 5.31276840951);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_247", 147.568269007, -959.350094391, -280.031119988);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_248", 5.39039830078, -4.12974439285, 8.63044002759);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_248", 1893.31265385, 924.116194076, 487.229472551);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_249", -5.09834616565, 5.50898875282, 0.885464031944);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_249", -1729.4888089, -1545.91600838, -718.000760846);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_250", -7.95348585134, 5.44511999316, 7.55339613792);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_250", 1489.10005925, -443.690907158, 102.971204925);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_251", -0.860199827451, 1.90510750774, 4.94735462458);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_251", -439.13666787, -1348.23164398, 1789.18205725);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_252", -7.96009400481, -3.25811095937, 1.78777570946);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_252", -1550.22975082, -1388.91266199, 851.051737428);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_253", -0.700535759853, 9.87403001715, 3.01860328493);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_253", 1846.28275945, 134.391007383, 835.702914118);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_254", 6.62479705268, -2.89403099512, 0.0543786700179);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_254", 680.754973538, 915.454813603, 1696.10539582);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_255", 4.66394715433, 8.45239646976, 6.01493945391);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_255", -1122.29376232, 112.651252217, -1070.02282456);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_256", -9.91165684579, 6.34371018775, 8.26827527077);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_256", -1000.63251264, 867.770288338, 829.907045617);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_257", -0.834541019966, -7.79644903794, 6.36120588652);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_257", 1114.20093224, -614.586808054, 846.995677345);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_258", 9.48604342462, -4.88738283819, 4.33847227879);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_258", 1604.55921942, -724.815222624, 1065.29191928);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_259", -2.23347648306, 2.43908887022, 3.69032311476);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_259", 48.6536886646, 1040.72653962, 531.344347283);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_260", -8.74322075582, -5.99666614119, 2.59899046846);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_260", 1757.81668175, 1696.65867284, -1276.55405914);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_261", -8.70830512298, 0.705995493313, 8.79201656365);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_261", -85.7354193477, 887.623163928, 197.989175723);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_262", 7.04419332018, 5.91019883683, 5.02312327084);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_262", 889.492280885, -341.797826833, -1137.37885084);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_263", -3.90009533567, 9.68339233839, 0.324077875614);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_263", -328.889723882, 1373.75541967, -1705.31885782);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_264", -3.97108017515, -6.91382113281, 0.200101366461);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_264", 523.457456491, 425.840130294, 471.823321099);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_265", -1.6256104567, 1.16864110053, 1.42437129221);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_265", -1384.35253373, 430.782651282, 49.7425830287);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_266", 9.26233709399, 0.50557518388, 9.98399363753);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_266", 198.665731622, -648.548254412, -1489.46316608);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_267", -5.59322436402, -8.1237935016, 6.36628916946);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_267", -1044.66666293, 1680.84930873, 1004.81998057);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_268", 7.18488888261, 2.46784252113, 9.25699051272);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_268", -161.098853647, 1915.69367101, 826.675712792);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_269", 5.32407742624, -6.83403273958, 5.14816759703);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_269", 1252.09024704, -139.886340662, -1599.72444996);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_270", 5.13397055426, -6.68652413616, 7.7256617744);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_270", 1252.33657965, 1996.46197972, 1267.72065426);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_271", 7.3046112302, 4.25262096525, 1.12582385128);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_271", -1765.36416173, 1839.54100371, 1185.84096592);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_272", 4.41090144945, -6.43410707316, 2.2030298009);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_272", -749.620986363, -345.14258672, 90.2488859561);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_273", 2.98310214185, 5.72173679082, 3.85543319411);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_273", -1941.19813369, 1344.57496861, 151.448239022);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_274", -1.77300691956, -6.30976556881, 6.57540106545);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_274", -806.057396119, 326.150632171, 1088.87922353);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_275", -6.05604752777, -0.421824188578, 7.83089821832);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_275", -1093.35805705, 1460.21308592, 432.562422193);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_276", -8.03215710501, -4.03071947572, 9.88097660165);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_276", -777.854791102, 1124.78037069, -520.695380369);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_277", 6.45460787375, -6.65785772592, 5.23949574304);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_277", 1982.15267783, -403.882009457, 956.993913693);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_278", 7.9720336622, 6.98109377057, 5.11862163636);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_278", 1822.49326636, -650.559503445, -1198.85720821);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_279", 7.63129345462, 1.72532701182, 5.72032303385);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_279", 1124.12835609, -26.3944551362, 436.203572998);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_280", 5.00595790556, 5.84223951655, 2.00791944095);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_280", -1290.00644737, 1917.0629654, 1426.01599322);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_281", 2.26376814756, -2.36052323736, 4.22954290896);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_281", 1691.35828973, 1333.16039903, 1817.92602705);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_282", -7.31980094822, -4.61073698626, 6.21921033639);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_282", -336.39152291, 1302.83390491, 275.990190594);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_283", 7.12038976911, -2.44694328229, 5.08512941976);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_283", 1260.91333188, 148.303422269, -121.603711244);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_284", -2.03191012844, 8.03243447746, 1.09363465787);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_284", 775.231558757, 1634.40659775, -864.643050324);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_285", -7.0419191454, 7.63214885172, 6.06076571569);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_285", -1798.83611778, -652.427725356, 369.02129824);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_286", -6.22790518583, -6.24422282843, 6.51659247199);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_286", 750.536869654, -927.549508091, -1511.06966767);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_287", 8.38168329173, 9.81810144913, 0.0613767645548);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_287", -810.999059703, -1292.53126682, -283.973858924);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_288", 9.67922448849, -7.67030670194, 2.18634057525);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_288", -510.527814623, -645.14987486, 1087.7592088);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_289", 1.95415388308, 3.29087099442, 1.49222806457);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_289", -1901.80092899, -48.2018358834, 1888.21054944);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_290", 8.60595651972, -0.776404423783, 7.36234199905);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_290", -1483.26374845, 777.489503987, 185.473481107);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_291", 4.21146706287, 8.10401097273, 0.75458034044);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_291", 902.426526357, -1743.52092886, 186.710494035);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_292", -6.26188860031, -3.06738917604, 5.99220017197);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_292", -1388.02778975, -1294.10474041, 321.389243933);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_293", 2.64933328412, -4.96464061282, 5.44961769642);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_293", 1724.25768301, 768.072653538, 1486.33133666);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_294", -3.4917366661, 5.43689101328, 4.55523203173);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_294", 1279.87672519, 818.048553721, 1637.64772879);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_295", 5.40303000963, -1.75365426962, 3.3650892968);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_295", -1945.97357816, 1435.17329199, 336.061574054);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_296", -4.95835629534, -3.4172381822, 2.32433770513);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_296", -1224.6699134, -1621.79523698, -334.190562096);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_297", 3.73206507416, 7.31077915447, 5.68370396625);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_297", 918.196200921, -1823.48538753, -1472.78540726);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_298", 5.35089017534, 1.65541409778, 6.8915140849);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_298", 1621.46733886, -978.763907795, 575.583907779);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_299", 7.96797342989, 9.98192852617, 9.24951787417);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_299", 405.276498477, 205.080403873, -546.418925412);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_300", -8.99093423396, 1.30292593259, 7.46616333462);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_300", -1872.55439691, 1770.9279051, -1960.26820898);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_301", -1.02640883904, -6.49927325116, 4.19143946938);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_301", 665.922702933, 574.799637249, -371.585703354);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_302", 8.32949026209, -4.82778058716, 4.13078108414);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_302", -504.461733837, 329.661255029, 1641.11789319);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_303", 4.33785211501, 3.07264599837, 9.47302438948);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_303", -241.364295755, -1350.77040317, -1862.20573532);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_304", 9.4583294077, 7.88683792281, 8.25341356313);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_304", 1613.41188834, -146.768283443, 1901.85279143);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_305", 8.09770178352, 1.04537720875, 6.18259308529);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_305", -1870.26848744, -399.315230181, -1480.15372768);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_306", -1.25105073489, -4.7971766489, 3.68209349201);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_306", 1890.27897289, 502.508323498, 905.39532687);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_307", 0.723134812831, -4.80118147006, 6.82116370383);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_307", 63.1112723599, 1688.45120284, 1260.61330823);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_308", -6.37112290109, -0.205961280799, 2.27687029923);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_308", -1944.842521, 698.215388375, 1556.10393036);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_309", -5.36647014814, -6.00711898749, 1.6371292597);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_309", 1689.22252551, -1336.56423401, 515.976429957);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_310", -2.94044097794, 8.18402116125, 9.58506356414);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_310", -1488.98695908, -328.08247062, -707.489192624);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_311", -4.81425907622, -1.8455000465, 9.05134601098);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_311", 1861.04958305, 760.757254693, 1733.71119763);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_312", 3.49153760539, -3.91185875962, 0.861936745096);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_312", -246.659327484, -454.130732764, 1160.13711914);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_313", -2.36830277241, 4.12826641116, 7.84340807192);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_313", 107.267604886, 1359.31132086, -474.924552552);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_314", 3.34637200521, -9.60675780947, 5.93439604922);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_314", 1340.87055511, 1896.80607396, 28.8898349522);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_315", -6.11735733944, 9.2569764749, 4.15279848805);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_315", 123.99273609, 1245.02927337, 175.93637011);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_316", -8.13904618072, 3.73547728106, 8.07905987143);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_316", -1901.97627959, 1348.80002766, 1496.6274658);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_317", 6.25703211957, 3.13560455115, 9.85722665516);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_317", -1778.72898985, -1021.41265211, -330.340579751);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_318", -9.91848953316, -3.65485189743, 6.8522797817);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_318", -1383.41400475, -661.484015872, -7.39092912355);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_319", -6.79728392519, 7.58665155593, 3.75251024925);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_319", -493.273495077, 744.979915482, 781.248053994);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_320", -1.2148417263, -4.98504530774, 9.23153326226);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_320", -853.570700109, 1334.05973082, 1999.21276485);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_321", -6.66940270381, -1.94573914149, 0.485311565628);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_321", 1222.40879866, 1234.96425883, 239.331987493);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_322", 5.58401378453, -2.58754524581, 3.15247440321);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_322", 895.606606456, 491.310269656, -1651.92319636);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_323", 0.695448728688, -7.0557076476, 2.50127719976);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_323", 1535.26953349, -1057.04326128, 817.244957369);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_324", -8.48583887918, 7.08217563918, 0.335157503399);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_324", 238.339122046, -939.903451733, -1888.05552106);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_325", -7.24224222006, -7.64242070555, 3.39579103276);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_325", 453.806654625, 1918.908862, -1714.35060876);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_326", -8.55695608685, 0.662092539884, 5.15331219353);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_326", 424.330199132, -152.787318402, -1304.1362735);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_327", 0.876423683439, 2.62924780636, 6.34062455272);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_327", -730.449839218, -583.643211697, 1888.87203445);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_328", -5.5304235226, 8.35539989757, 1.70566435144);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_328", 637.316110341, 882.073910829, 737.703434454);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_329", 9.87509075404, -4.26804075722, 7.69587134338);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_329", -269.552469219, -1123.50959009, 1527.93665815);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_330", -4.92952993396, 5.68578670573, 7.45759092512);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_330", -1899.12010763, -855.145642729, 1144.45316146);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_331", -8.16142054293, 0.189813425429, 6.93082695865);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_331", -1645.31690023, -1573.32198615, 191.184936808);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_332", 6.44951052747, -6.55697254805, 7.96384874329);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_332", -1537.53497758, -366.532304668, 562.722912799);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_333", -9.40773444114, 2.97854892339, 9.67811329996);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_333", -97.078926576, 557.985251455, -838.948800448);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_334", -1.84033938266, -9.74109442202, 4.99201182054);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_334", 91.5089773835, 554.916390777, 495.377918681);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_335", 3.84798045036, -7.14262040109, 9.67893854187);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_335", 979.947869427, 1720.31711963, -1118.57275527);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_336", 5.06369805959, -1.82083330888, 4.87039950401);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_336", -876.949920417, 1733.42794234, 498.847405338);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_337", -2.46462966071, 5.50167744166, 4.65744519946);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_337", 1516.40317016, 1325.51806323, 584.679751052);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_338", 3.07444026354, 3.44997624849, 4.10730642251);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_338", 101.037911253, -1643.42382771, -998.807007007);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_339", 2.26111397847, 1.22479726447, 4.43740525325);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_339", -350.951408157, 841.663851092, 1123.61662202);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_340", -3.10494903747, -8.71150594218, 6.81266174325);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_340", -741.909568941, 1295.51581202, 480.100706015);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_341", -8.01930449722, -7.58689175867, 5.32347551571);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_341", -808.084119957, -247.656745927, -535.162573357);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_342", -5.8862658104, 0.662724347553, 8.9437011678);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_342", 1562.82825074, -661.540124161, -1746.89288862);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_343", -2.38495451117, 3.69953308831, 0.943597962582);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_343", -1587.16803676, 850.983062994, 1041.49846769);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_344", 4.23923216049, 5.32873520475, 8.21575787932);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_344", 1900.87389065, 558.35494366, -1135.79373085);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_345", -6.69291058491, 9.35473218804, 6.54060115495);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_345", -9.24649314507, -641.3209916, 724.254573791);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_346", -8.49974918401, 9.31688240589, 9.20866837041);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_346", 138.518428212, -151.491893209, -1239.20799698);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_347", 6.56752967932, -6.12077478907, 7.9021095265);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_347", -1507.83808732, 1608.0194099, -1272.31685311);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_348", 4.7757242379, -8.88765988413, 9.1934150268);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_348", -1615.12457722, -63.8887773637, -483.716208693);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_349", -0.989363357527, 4.33626314448, 6.34211455302);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_349", 1386.69514621, -1235.58592863, -953.611757483);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_350", 1.44099079975, -7.64927833994, 2.4744894814);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_350", 1767.13949913, 917.528612943, -1348.58914124);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_351", 6.33574730985, -0.0446011414356, 7.27143225305);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_351", -1402.92314496, 767.868335699, 1845.89430009);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_352", -5.14848236985, 8.47295187557, 7.59368902472);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_352", -1239.69912755, -447.948579201, -1332.61974457);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_353", 0.970964820254, -1.05784823367, 9.22233437301);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_353", 696.236156451, -1421.90683297, 1922.54698953);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_354", 5.8066804362, 4.72270846101, 9.82317076763);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_354", 750.535883729, -612.500461754, 1558.70311733);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_355", -3.21343031558, 4.44394633857, 0.866374260184);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_355", 431.129862472, 1181.71170128, -1109.8905909);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_356", -5.04556042378, -1.24863186659, 8.66367518783);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_356", 536.453920289, 1799.08712662, 873.016884945);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_357", 2.26437046769, -2.28744484613, 7.05879895247);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_357", 949.750127337, 382.305221793, -922.394002354);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_358", 6.90538169007, -4.90823934241, 9.06379678891);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_358", -1652.38098071, -1288.65884367, 1223.81341799);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_359", 4.6459153493, 7.77864087192, 0.470512734724);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_359", 1040.49927735, 494.677410879, -1014.72199793);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_360", -1.09744880694, 6.87158824359, 5.5979821439);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_360", 1166.96269883, 1802.41611101, -1183.29469874);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_361", -8.24982047931, 8.06619302211, 5.37388114955);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_361", -1685.15877856, 296.079275236, 372.958944276);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_362", 2.51750502082, -8.63705245756, 0.738229906565);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_362", 379.401694742, -1809.02567552, 1484.96463889);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_363", 5.57470852768, -1.13234637355, 7.01913935008);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_363", -501.783903959, -434.483130529, 1401.1491587);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_364", -6.73806957413, -0.0587624621021, 8.34670322292);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_364", -1671.17987065, -396.459732414, 1762.51168144);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_365", -7.9330535548, 7.73602970816, 9.55042188104);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_365", -1367.8921447, 461.331580455, 1576.32624708);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_366", 1.16752962584, -8.48721752178, 9.59653811365);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_366", -1898.72821533, 1654.40619886, 1071.69440277);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_367", 3.42236029253, 0.101792479435, 7.89578825437);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_367", 1417.57000147, -357.689866441, -1004.84715959);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_368", 9.75481186924, -3.18583662119, 9.70667231184);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_368", -1627.82844345, -174.863715951, -374.39443444);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_369", -9.33673862353, 6.79647204855, 4.13491812827);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_369", 945.564984511, 1704.5712488, -1315.89586588);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_370", 7.07557913388, 0.302574068206, 5.34650291903);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_370", 927.741918221, -1922.84263153, -830.75595112);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_371", 5.83677387793, 0.386707001836, 4.04018020114);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_371", -1181.10824643, 533.089085609, 231.868596073);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_372", 2.94796738281, -0.660610263334, 9.41154266199);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_372", -248.717433565, 1261.58160368, -950.984349622);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_373", 7.02955573224, -4.66741710755, 2.49307150342);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_373", 1262.96546484, 44.6875194132, -1581.53408987);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_374", 9.49247407919, -6.559442997, 7.15026297797);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_374", -1164.82524665, 1806.23600737, 105.19165974);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_375", -9.57475169858, -1.77336090208, 8.93245431331);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_375", -1157.76624902, -1683.25837298, 852.168870687);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_376", 6.1214690225, -8.16915397426, 1.70162648611);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_376", -1092.53356331, -303.758021577, 1457.11807586);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_377", 7.27969189153, 7.05968105631, 5.80458004564);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_377", 1198.1946868, -332.673670631, -285.377008522);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_378", 1.15039146448, -2.37872944915, 3.18869062943);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_378", -924.988669684, -1863.31962928, 1644.64555272);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_379", -1.29137380284, -4.19571793563, 6.96811577366);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_379", -490.057284171, 1105.62665892, 1323.00316048);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_380", 1.48713859601, 4.43255382809, 0.609876310264);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_380", -268.108269527, 1321.80450112, 153.266134138);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_381", 5.10341103517, 5.35017111352, 0.0293233656863);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_381", -454.858277967, 263.380231849, -1236.41645943);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_382", 8.63405442855, -7.13189827809, 6.00460585474);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_382", -1532.73569536, 1319.66792108, 682.176789135);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_383", 3.24368547042, 8.21650133074, 4.86873273158);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_383", -1250.95018068, -283.997117865, -1286.91709149);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_384", -2.19268224514, -7.53805468391, 3.78721512282);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_384", 1579.14805056, -996.094977572, 294.210263722);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_385", -3.49780835588, -6.47680029127, 1.04131202477);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_385", -1777.63608306, -1034.31901716, 805.457193732);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_386", 8.62113369797, -3.78277561218, 2.85070728271);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_386", -263.343960155, -346.560095007, -232.765732678);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_387", 2.86711155386, 0.803094275782, 0.515594872321);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_387", -231.750401327, 584.199482501, 824.474282312);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_388", -0.795775233742, 0.858889640652, 9.75030247831);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_388", 361.177583795, -1919.84515763, -362.161635455);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_389", -6.18976669588, 8.12429796739, 6.28288298668);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_389", 801.115462374, 478.463653689, -416.982180452);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_390", -8.2755411561, 8.86423025436, 8.06828915712);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_390", 900.631618615, 632.097656379, 318.890552062);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_391", -1.95311614548, -4.07559384243, 5.71687455676);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_391", 1571.09394154, -562.598857145, 1796.83708677);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_392", -7.05929073787, 4.40480572984, 3.34171424119);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_392", 1534.67119327, 1138.25316702, -1011.70919913);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_393", -9.99720408219, 1.25538342499, 2.12965682328);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_393", 1338.40769823, 851.144866914, -1765.80672513);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_394", 4.02319973136, 9.84075164153, 8.79551348641);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_394", 1792.78157476, 300.64024345, 841.565098125);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_395", -2.93019250223, 3.75695603449, 3.58166843443);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_395", -1469.92206106, -1618.17058588, 1907.85412078);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_396", -2.06884879848, -0.0578797486913, 8.50856585018);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_396", 1123.22991663, 401.565825518, 1215.08310385);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_397", 1.22517725979, 1.03021189197, 0.275861678439);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_397", -1192.47866022, -1075.75744062, -1292.69517776);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_398", 4.81902327707, 9.568313169, 0.542764018484);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_398", -332.059067341, -370.764336817, -1551.32554963);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_399", -9.42091015092, 9.04429010217, 0.294007202276);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_399", 794.741298295, -140.90590278, -1235.31337784);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_400", -1.63686763157, -8.22297279485, 1.48627412883);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_400", 1929.32123811, -86.8387746529, -964.03400196);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_401", 1.3503524037, -2.81741468025, 9.22822422439);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_401", -27.2573816822, 130.23705005, -1364.34863262);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_402", 1.20713730147, 8.83449564432, 1.19270132581);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_402", 8.04932397485, -674.620036705, -14.9903246717);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_403", -7.55799093786, 3.34581196258, 9.74511241663);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_403", -1146.98302557, 1661.82087797, -1218.08765398);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_404", -6.53815296087, -6.79324640898, 6.35074860523);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_404", -1298.97431317, 1959.47562714, 1708.09155168);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_405", -7.00349232863, 4.46848761509, 6.89276971948);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_405", 1062.36583456, 1478.67124359, -324.191784676);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_406", 5.77554730601, -2.1998355133, 5.15871303096);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_406", 578.839098315, -613.649145373, 1637.56727036);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_407", 6.47757140549, 0.89308862496, 7.57853510178);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_407", 1038.48452147, -207.279273356, 1969.63621923);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_408", -5.80070782989, -3.23813696184, 7.90353636141);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_408", 888.64658638, -1583.80996788, -548.740560139);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_409", 1.89916459332, -0.651343563954, 6.25243277821);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_409", 266.055486627, -1422.74472903, 931.002179722);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_410", -9.58529265162, -4.67430211608, 3.49995216298);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_410", -1334.63143576, 1797.94573312, 304.814584934);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_411", 4.79360714957, 0.242685431439, 2.74835078624);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_411", 1421.66207839, 1478.87467134, -857.736062373);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_412", 4.45202276919, -0.629046228376, 7.82273308249);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_412", 1822.27704593, 1851.81580355, -1596.34844648);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_413", -6.26170107143, 9.7879575894, 9.21460192906);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_413", -957.745797872, 1156.75783206, 1563.02810108);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_414", -2.31610636277, 0.453882090506, 8.79726700842);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_414", 1754.08264798, 1050.02821109, -1831.53940407);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_415", -5.52330100344, 2.61895505187, 3.37929356318);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_415", 1515.12890615, -207.215851961, -1957.84451038);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_416", 4.53764668016, -7.33945699719, 7.17154653919);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_416", -1297.91794137, -1032.86244939, -773.070689636);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_417", 6.57461929967, -2.76765530639, 6.90606341754);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_417", -653.469680902, 323.698847688, 1337.75907313);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_418", -6.46756250894, -7.64790022969, 6.75621201806);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_418", 1805.2151028, 427.787201197, -113.874320265);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_419", -7.28056260307, -9.34308467642, 9.51887656752);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_419", 226.931258622, -1264.77752121, -1703.68209539);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_420", -0.548954633205, 4.27791826634, 3.63287111905);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_420", 1703.57148168, 10.7501368907, 1689.53729299);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_421", 6.26318037411, -1.8999742911, 5.86967895606);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_421", 1056.10759695, 584.760624585, 1092.74215934);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_422", 4.48496222041, -2.76658961174, 1.80934560383);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_422", 1102.63801345, 165.694189701, 590.477454025);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_423", 1.33713069604, -1.17185026651, 3.28426138257);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_423", -1725.70588565, 1153.23967392, 227.410725745);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_424", -0.817705849392, 8.83451074508, 2.52197352599);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_424", -478.321262791, -1863.98058311, 1065.24865306);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_425", -3.75102747646, 0.141009757564, 9.10496523036);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_425", -892.135128094, -1737.43602039, -1950.19487361);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_426", -4.95977739833, 7.86529859451, 3.98578830232);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_426", -848.041275643, -720.689955539, -1297.7479572);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_427", -0.932788904198, 8.0728405602, 8.14313378904);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_427", 523.278871841, -1105.98163901, 1533.09408391);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_428", -8.57549792094, -8.47717616041, 0.323676185891);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_428", 1722.54824445, 890.212289574, -1801.80557697);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_429", -9.81000634183, 5.90938712888, 9.7633538438);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_429", 1914.87314843, 1633.43400297, -1084.14326787);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_430", -6.6761294775, -7.60829868211, 1.83722400235);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_430", -1548.64840405, -330.585209438, -1151.45532482);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_431", -8.41501967587, 2.65601782058, 9.70095060867);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_431", -924.061505504, 269.509950191, 172.85516025);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_432", -3.3602268825, 8.80564817874, 9.246907416);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_432", -1448.58204836, -1734.28872021, -192.353029907);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_433", 3.79731370169, 3.22098546594, 6.80851778216);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_433", 1499.64965836, 459.716292631, -247.317516757);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_434", -8.14655447711, 7.01331815513, 5.71919629636);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_434", 285.17516866, -629.554210886, 798.040072816);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_435", 8.91309240607, 6.02812936406, 2.10601805733);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_435", 1624.10667318, 1069.45986205, -48.2067076296);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_436", -1.28827636393, 5.75533369958, 6.5302089627);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_436", -1154.1987295, 38.1636792283, -456.545749509);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_437", -2.95755951709, 0.486526366702, 1.03770721416);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_437", 946.778402373, -1843.12431445, 970.526452054);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_438", 5.62869275677, -0.647778135268, 7.04318419242);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_438", -433.726502525, -702.9265626, -713.685071936);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_439", 4.35884515768, -4.97282819956, 1.66930354455);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_439", 1665.0330903, -1212.07706598, -214.836445247);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_440", 6.94981769747, 8.71074958818, 7.7107186111);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_440", -1264.44884061, 563.941792879, -175.673006534);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_441", -2.70598033448, 7.85922785469, 0.124127361476);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_441", 1698.63928292, 1759.57837985, -96.2618729725);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_442", 2.49851969984, -7.91066895748, 1.35452978773);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_442", -150.68100846, -291.454910076, -200.180913009);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_443", 3.45559680579, 9.52982164713, 2.37132485002);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_443", -1801.38487765, 99.3543778921, -1067.64083396);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_444", -5.2911938109, -9.78491578556, 5.52083925256);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_444", -593.917441487, 1225.46743554, -1899.63980303);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_445", 6.09663533654, 7.48651970287, 2.92665489143);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_445", -1828.76979951, -267.301702776, -1374.5208246);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_446", 4.67432409922, -3.78429173286, 3.889752048);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_446", -1872.32351978, -232.463457318, -332.371731004);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_447", 9.20505755118, 2.63034184988, 0.555437501436);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_447", 1148.02650878, -801.126769794, 593.311244067);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_448", -1.47556098887, 7.16707052319, 0.996798178542);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_448", 1415.74112542, 371.070267361, 1624.89977584);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_449", -5.10035203732, -7.37014296065, 5.83365401324);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_449", -682.282478803, 631.422904428, -1780.19365682);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_450", 2.50981454846, -7.09743762709, 4.13490586427);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_450", -1393.08662283, -492.21340546, 52.939988515);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_451", 1.8827630445, -5.11422261917, 4.60708054719);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_451", 1882.16906287, -1503.74782959, 1076.79406691);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_452", 0.0598574426804, 0.117320801585, 1.40746125825);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_452", -119.580236348, -638.355666666, -1578.81503324);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_453", 3.60375876785, -7.59286059567, 0.0858452628887);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_453", -241.62952284, 998.750828757, -1525.65458689);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_454", 6.24782292743, 7.11624820479, 2.78477824368);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_454", -972.24928176, -1806.95149733, -1202.73404969);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_455", -2.3479916296, -2.59342041066, 2.14259625508);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_455", -543.03536762, 361.700534247, -407.058353149);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_456", -1.15698080103, -4.72420245438, 2.84301256781);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_456", -972.32847051, 779.217874922, 153.626770377);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_457", -3.3690259027, 2.24035154987, 7.44606692194);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_457", -810.730102421, 702.783392832, -10.6426531904);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_458", 8.31258822348, -0.189917493265, 9.26062796592);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_458", 713.535931046, -1048.87762945, -1354.24399767);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_459", -7.60533963581, 4.04776659526, 6.77878530625);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_459", 669.641937972, -271.333349044, 1602.24587523);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_460", -0.47488822208, 0.256300325494, 7.44416655436);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_460", 1528.6995902, 1509.74082466, -274.672987523);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_461", -9.76686906513, -5.37512050365, 4.6071199914);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_461", -1763.00513414, -589.318193761, 1495.33417728);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_462", 1.27581744147, 2.19350291239, 7.64806515212);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_462", -1052.3725134, -801.08041994, -290.923237709);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_463", -3.33301078037, -2.54096870957, 0.103784192612);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_463", 933.092549213, 657.353885678, 608.69120785);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_464", -7.71596744404, -8.10053262591, 4.1144712033);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_464", 1825.28406915, 1301.8882182, -1047.74437805);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_465", 6.1210044039, 4.53247095043, 3.40316952678);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_465", -917.562928584, 583.089169704, 1623.7106584);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_466", 3.51771045848, -3.02392345394, 3.92796430396);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_466", 1888.20388126, 1550.45751454, -1433.28855368);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_467", -2.00990714737, 7.97802317681, 8.98200657285);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_467", -64.5258969951, -971.851412688, 319.07298039);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_468", 9.89459250098, -6.32336116829, 9.35239323326);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_468", -319.857118586, 4.96099741799, -912.02690137);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_469", -5.86674723754, 7.51474408997, 6.56548058956);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_469", 92.8573816414, -1926.46260969, 358.822585241);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_470", 1.64956515824, -8.60577777376, 1.17053368858);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_470", -1774.70162682, -1257.72065298, 630.342892382);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_471", -3.26941892407, 1.56034163428, 5.398652808);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_471", 691.273665929, -1961.72916658, -1456.66692106);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_472", 3.64389144806, 8.89309359114, 9.11880242781);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_472", 1894.39441746, 1981.95999952, -1553.9659533);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_473", 3.19665385083, -1.70467406544, 2.43513376706);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_473", 115.730565757, -1758.24048082, -22.9606225967);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_474", -2.68114562998, -7.49826007513, 8.80167073727);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_474", 1044.46608501, 1090.40420187, -317.530227221);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_475", -5.26182135583, 2.1104124926, 3.29922686461);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_475", 1320.4603956, -1571.01399138, 356.088442224);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_476", 9.85281398837, 5.78466140204, 5.44364265827);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_476", 1200.43033219, -391.207109649, -645.539489777);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_477", -3.72307715963, -8.40329566335, 6.87788432572);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_477", 1340.28342893, 1171.44534114, 1387.10362604);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_478", 3.43261488022, -9.05794696889, 3.94396564535);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_478", -312.503820661, -57.4323203216, -47.7250363799);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_479", -7.19529889509, -6.82166573181, 1.7200445077);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_479", 1416.04363669, 111.007939291, -1262.5941729);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_480", -1.99012603502, -4.3856923668, 7.78449093348);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_480", -1591.241813, 1443.42075263, -1318.44146059);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_481", 8.8395931837, -5.04116197943, 1.7466505273);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_481", 704.562892016, 1962.50287619, 926.091158496);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_482", -7.90587416234, -8.01036055806, 3.07982605941);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_482", 1333.544032, -1251.27186129, 1138.42729739);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_483", 5.09974363636, 6.89089343432, 5.2077702098);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_483", 1321.52141579, -1850.98232485, 307.057121734);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_484", -7.08602484619, 8.91486790098, 2.10557792988);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_484", -1480.62066018, -1596.53391661, -335.790837165);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_485", -2.80678604052, 6.55723074539, 3.11051452835);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_485", 1008.05646211, -291.499737565, -1604.98223141);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_486", -3.7118869478, -8.89353153401, 5.52627539335);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_486", 533.160455513, -283.218218656, -379.393614597);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_487", -3.06634859752, -2.8264815827, 8.3160169447);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_487", 1675.6361542, 1503.58497253, -593.667012757);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_488", 7.41032633656, 5.63686017111, 8.11343897965);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_488", -248.780790698, 1423.42186111, 1425.10952176);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_489", 9.00632245253, -4.27539780031, 8.82937039844);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_489", -1264.08837436, 519.004603222, -1345.49343707);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_490", 6.24749385539, -4.73396827827, 8.09694776749);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_490", -1001.26088894, -622.33497708, 21.6940306584);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_491", -4.03295523476, -4.91622222191, 3.22607425343);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_491", 590.128481891, 36.7776615536, 1631.1078188);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_492", -4.47138359295, -3.43148800383, 4.01997602408);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_492", -17.8274698723, -1350.83070778, -1514.15828836);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_493", -0.355368596353, 3.82138535213, 9.61799644629);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_493", -419.758870573, -1570.97981662, -1868.16770884);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_494", 7.42547628648, -2.59524313141, 4.71808547223);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_494", 634.73171564, 121.56417852, -6.91943560678);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_495", 0.173719479649, -2.41098234132, 5.09581070883);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_495", -532.072661086, -1900.84852205, -930.797232354);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_496", -4.7962659512, -7.30102427061, 0.0979179870252);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_496", 151.83150405, -195.828294786, -1818.01615302);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_497", 4.80247746062, 9.02696859889, 5.32522518082);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_497", 320.761769535, -1491.95356581, -1568.35978507);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_498", -7.82184567541, 6.12313791661, 8.97534358881);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_498", -1139.62630678, 1332.36137577, -197.282705335);
interpolation_0->add_action(ANIM_TRANSLATE, "object_cube_499", 3.88322554698, 1.06580669097, 1.70380920349);
interpolation_0->add_action(ANIM_ROTATE, "object_cube_499", 784.899408202, -669.968428971, -488.141217249);

Timeline::instance().add_animation(object_setup, 0);
Timeline::instance().add_animation(object_mess, 0);
Timeline::instance().add_camera(object_cam2, 6.6);
Timeline::instance().add_camera(object_cam3, 13.2);
Scene::instance().set_default_camera("object_cam");

}
