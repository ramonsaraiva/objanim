#pragma once

#include <string>
#include <sstream>

#include "command.h"
#include "block.h"

using namespace std;

class Interpolation : public Command
{

    public:
        static const int TYPE = 2;
        static int counter;
        static string getName();

        Interpolation(string t);
        void addBlock(Block *bl);
        Block *getBlock();
        string getTime();
    private:
        Block *block;
        string time;

};
