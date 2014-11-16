#include "model.h"

Model::Model(string modelName, string varName, bool isPrimitive)
{
    setName(varName);
    type = TYPE;

    primitive = isPrimitive;
    mName = modelName;
    if (primitive) {
        mName += ".obj";
    }
}

string Model::generate()
{
    string result = "SceneObject *" + getName() + " = new SceneObject(\"" + getName() + "\");\n";

    if (primitive) {
        result += getName() + "->load_obj(\"" + mName + "\");\n";
    } else {
        result += getName() + "->load_obj(" + mName + ");\n";
    }
    result += getName() + "->build_vbo();\n";
    result += "Scene::instance().add_object(" + getName() + "->ident(), " + getName() + ");\n\n";
    return result;
}
