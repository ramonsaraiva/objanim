#pragma once

#include <string>
#include <vector>

#include "command.h"
#include "object.h"

using namespace std;

class Move : public Command
{
    public:
        static const int TYPE = 3;

        Move(string n, string obj, string x, string y, string z);
        string getName();
        string getObj();
        vector<string> getPoints();
        string generate();

    private:
        string name;
        string object;
        vector<string> points;

};
