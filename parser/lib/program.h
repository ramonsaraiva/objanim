#pragma once

#include <string>

#include "command.h"
#include "move.h"
#include "animation.h"
#include "camera.h"
#include "model.h"
#include "general_command.h"

class Program
{
    public:
        Program(Commands *cmds);
        string generate();
    private:
        Commands *commands;
};
