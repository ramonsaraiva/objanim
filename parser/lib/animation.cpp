#include "animation.h"


Animation::Animation(string n)
{
    setName(n);
    type = TYPE;
}

void Animation::addBlock(Block *bl)
{
    block = bl;
}

string Animation::generate()
{
    string result = "";

    result += "Animation *" + getName() + " = new Animation(\"" + getName() + "\");\n\n";
    result += generateCommands();

    return result;
}


string Animation::generateCommands()
{
    Commands *cmds = block->getCommands();
    CommandsIterator it = cmds->begin();
    string result = "";
    for (; it != cmds->end(); ++it) {
        Command *cmd = *it;
        switch (cmd->getType()) {
            case Interpolation::TYPE:
                result += generateInterpolation((Interpolation*)cmd);
                break;
            case Move::TYPE:
                result += generateMove((Move*)cmd);
                break;
            default:
                //TODO add some error
                break;
        }
    }

    return result;
}

string Animation::generateInterpolation(Interpolation *i)
{
    string iName = Interpolation::getName();
    string result = "Interpolation *" + iName + " = " + getName() + "->add_interp();\n";
    result += iName + "->setTime(" + i->getTime() + ");\n";
    Commands *cmds = i->getBlock()->getCommands();
    CommandsIterator ci = cmds->begin();
    for (; ci != cmds->end(); ++ci) {
        Command *cmd = *ci;
        if (cmd->getType() != Move::TYPE) {
            // TODO add some error
            continue;
        }
        Move *m = (Move*)*ci;
        string action;
        if (m->getName().compare("translate") == 0) {
            action = "ANIM_TRANSLATE";
        } else if (m->getName().compare("rotate") == 0) {
            action = "ANIM_ROTATE";
        } else if (m->getName().compare("scale") == 0) {
            action = "ANIM_SCALE";
        }
        result += iName + "->add_action(" + action + ", \"" + m->getObj() + "\", " + m->getPoints().at(0) + ", " + m->getPoints().at(1) + ", " + m->getPoints().at(2) + ");\n";

    }

    return result + "\n";
}

string Animation::generateMove(Move *m)
{
    vector<string> points = m->getPoints();
    string result = getName() + "->add_action(\"" + m->getName() + "\", \"" + m->getObj() + "\", " + points.at(0) + ", " + points.at(1) + ", " + points.at(2) + ");\n\n";
    return result;
}
