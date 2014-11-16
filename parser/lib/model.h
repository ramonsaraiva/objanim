#pragma once

#include <string>

#include "command.h"
#include "object.h"

using namespace std;

class Model : public Command, public Object
{
    public:
        static const int TYPE = 5;
        Model(string modelName, string varName, bool isPrimitive);
        string generate();
    private:
        bool primitive;
        string mName;
};
