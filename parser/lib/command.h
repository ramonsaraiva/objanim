#pragma once

#include <list>

using namespace std;

class Command {
    public:
        static const int TYPE = -1;
        Command();
        int getType();
    protected:
        int type;
};

typedef list<Command*> Commands;
typedef list<Command*>::iterator CommandsIterator;

