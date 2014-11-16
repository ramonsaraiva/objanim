#include "general_command.h"

GeneralCommand::GeneralCommand(string cmd)
{
    type = TYPE;
    command = cmd;
}

string GeneralCommand::generate()
{
    return command + "\n";
}
