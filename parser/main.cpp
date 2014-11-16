#include <iostream>
#include "lib/program.h"

extern int yyparse();

int main(int argc, char **argv)
{
    yyparse();
    return 0;
}
