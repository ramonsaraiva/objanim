#pragma once

#include <string>

using namespace std;

class Object
{
    public:
        static string makeName(string n);
        string getName();
        void setName(string n);
    protected:
        string name;
};
