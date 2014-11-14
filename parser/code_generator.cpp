#include "code_generator.h"
using namespace std;

CodeGenerador::CodeGenerador()
{
    error = false;
    code = "";
}

bool CodeGenerador::addPrimitive(string name, string reference)
{
    if (vars.find(reference) != vars.end()) {
        error = true;
        return false;
    }

    vars.insert(pair<string,string>(reference, "Object"));
    code += "SceneObject " + reference + " = SceneObject(\""+reference+"\");\n";
    code += reference + ".load_obj(\"" + name + ".obj\");\n";
    code += reference + ".build_vbo();\n";

    return true;
}

string CodeGenerador::generate()
{
    return code;
}

string CodeGenerador::hasError()
{
    return error;
}
