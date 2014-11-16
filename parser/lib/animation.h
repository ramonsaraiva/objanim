#pragma once

#include <string>
#include <vector>

#include "object.h"
#include "command.h"
#include "interpolation.h"
#include "block.h"
#include "move.h"

using namespace std;

class Animation : public Command, public Object
{
    public:
        static const int TYPE = 1;

        Animation(string n);
        void addBlock(Block* bl);
        Block *getBlock();
        string generate();
    private:
        Block *block;
        string name;

        string generateCommands();
        string generateInterpolation(Interpolation *i);
        string generateMove(Move *m);
};
