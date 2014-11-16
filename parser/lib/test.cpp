#include <iostream>

#include "animation.h"
#include "block.h"
#include "command.h"
#include "move.h"
#include "interpolation.h"
#include "program.h"
#include "camera.h"
#include "model.h"

using namespace std;


int main(int argc, char** argv)
{


    Commands *c = new Commands();
    Move *m = new Move("translate", "test", "0", "0", "0");
    c->push_back(m);
    c->push_back(new Move("rotate", "test", "0", "0", "0"));
    c->push_back(new Move("scale", "test", "0", "0", "0"));

    Interpolation *i = new Interpolation("5");
    i->addBlock(new Block(c));


    Commands *c1 = new Commands();
    Move *m1 = new Move("translate", "test", "0", "0", "0");
    c1->push_back(i);
    c1->push_back(m1);

    Animation *a = new Animation("teste");
    a->addBlock(new Block(c1));

    Commands *all = new Commands();
    all->push_back(new Model("test", "cube", true));
    all->push_back(new Model("test2", "/home/luiz/objs/car.obj", false));
    all->push_back(a);
    all->push_back(new Move("rotate", "test", "0", "0", "0"));
    CamArgs *cas = new CamArgs();
    CamArg *ca = new CamArg("position");
    ca->addArg("0");
    ca->addArg("0");
    ca->addArg("0");
    cas->push_back(ca);
    all->push_back(new Camera("teste", cas));

    Program p(all);

    cout << p.generate();
}
