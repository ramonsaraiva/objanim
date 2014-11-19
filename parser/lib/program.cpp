#include "program.h"

Program::Program(Commands *cmds)
{
    commands = cmds;
}

string Program::generate()
{
    CommandsIterator it = commands->begin();
    string result = "/*\n* ObjAnim - Code Generator\n*/\n\n";

    result += "#include \"camera/camera.h\"\n#include \"scene/scene.h\"\n#include \"animation/animation.h\"\n#include \"setup_scene.h\"\n\n";

    result += "void setup_scene()\n{\n";
    for (; it != commands->end(); ++it) {
        Command *cmd = *it;
        switch (cmd->getType()) {
            case Animation::TYPE:
                result += ((Animation*)cmd)->generate();
                break;
            case Move::TYPE:
                result += ((Move*)cmd)->generate();
                break;
            case Camera::TYPE:
                result += ((Camera*)cmd)->generate();
                break;
            case Model::TYPE:
                result += ((Model*)cmd)->generate();
                break;
            case GeneralCommand::TYPE:
                result += ((GeneralCommand*)cmd)->generate();
                break;
        }

    }

    return result + "\n}\n";
}
