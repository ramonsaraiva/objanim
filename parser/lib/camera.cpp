#include "camera.h"

Camera::Camera(string n, CamArgs *ca)
{
    setName(n);
    type = TYPE;
    args = ca;
}

string Camera::generate()
{
    string result = "Camera *" + getName() + " = new Camera();\n";

    for (int i=0; i < (int)args->size(); i++) {
        CamArg *arg = args->at(i);
        result += getName() + "->set_" + arg->getName() + "(";
        vector<string> values = arg->getArgs();
        int size = (int)values.size();
        for (int j=0; j < size; j++) {
            result += values.at(j);
            if (j+1 < size) {
                result += ", ";
            }
        }
        result += ");\n";
    }

    result += "Scene::instance().add_camera(\"" + getName() + "\", " +  getName() + ");\n";
    return result;
}


// CamArg
CamArg::CamArg(string n)
{
    name = n;
}

void CamArg::addArg(string arg)
{
    args.push_back(arg);
}

vector<string> CamArg::getArgs()
{
    return args;
}

string CamArg::getName()
{
    return name;
}



