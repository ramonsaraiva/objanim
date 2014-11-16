#pragma once

#include <string>

#include "command.h"

using namespace std;

class GeneralCommand : public Command
{
    public:
        static const int TYPE = 6;

        GeneralCommand(string cmd);
        string generate();
    protected:
        string command;
};
