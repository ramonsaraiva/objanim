#ifndef CODE_GENERATOR_H
#define CODE_GENERATOR_H	1
#include <string>
#include <vector>
#include <map>

using namespace std;

typedef map<string, string> vars_t;

class CodeGenerador
{
    public:
        void addPrimitive(string name, string reference);
        string generate();
        void move(string op, string obj, string x, string y, string z);
        bool hasError();
    private:
        vars_t vars;
        string code;
        bool error;
        vector<string> errors;

};
#endif
