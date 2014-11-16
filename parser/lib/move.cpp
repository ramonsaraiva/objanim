#include "move.h"

Move::Move(string n, string obj, string x, string y, string z)
{
    name = n;
    points.push_back(x);
    points.push_back(y);
    points.push_back(z);
    type = TYPE;
    object = Object::makeName(obj);
}
string Move::getName()
{
    return name;
}

string Move::getObj()
{
    return object;
}
vector<string> Move::getPoints()
{
    return points;
}

string Move::generate()
{
    return getObj() + "->set_" + getName() + "(" + points.at(0) + ", "+ points.at(1) + ", "+ points.at(2) + ");\n";
}
