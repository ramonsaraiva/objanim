#include "block.h"

Block::Block(Commands *commands)
{
    cmds = commands;
}

Commands *Block::getCommands()
{
    return cmds;
}
