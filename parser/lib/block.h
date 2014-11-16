#pragma once

#include "command.h"

class Block
{
    public:
        Block(Commands *commands);
        Commands *getCommands();
    private:
        Commands *cmds;
};
