#include "object.h"

void Object::setName(string n)
{
    name = makeName(n);
}

string Object::getName()
{
    return name;
}

string Object::makeName(string n)
{
    return "object_" + n;
}
