#include <iostream>
#include "lib/program.h"

extern int yyparse();
extern bool errors;

int main(int argc, char **argv)
{
    yyparse();
    if (errors) {
        return 1;
    }
    return 0;
}
