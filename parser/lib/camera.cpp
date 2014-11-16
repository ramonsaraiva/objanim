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



