#pragma once

#include <string>
#include <vector>

#include "object.h"
#include "command.h"

class CamArg
{
    public:
        CamArg(string n);
        string getName();
        void addArg(string arg);
        vector<string> getArgs();
    private:
        string name;
        vector<string> args;
};

typedef vector<CamArg*> CamArgs;

class Camera : public Command, public Object
{
    public:
        static const int TYPE = 4;
        Camera(string n, CamArgs *ca);
        string generate();

    private:
        string name;
        CamArgs *args;
};
