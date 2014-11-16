
%{
/*#include <stdio.h>
#include <stdlib.h>
#include <string>
*/
#include <iostream>

#include "lib/program.h"

extern int yylex();
void yyerror(const char *s) { printf("ERROR: %s\n", s); }

%}

%union {
    Program *program;
    Commands *commands;
    Command *command;
    Move *mv;
    Model *model;
    Animation *anim;
    Camera *cam;
    CamArgs *cArgs;
    CamArg *cArg;
    Block *block;
    Interpolation *interpolation;
    GeneralCommand *general;
    std::string *string;
    int token;
}

%token <string> TIDENTIFIER TDOUBLE TPRIMITIVE TCHAR TMV_OP TCAM_3ARGS TCAM_1ARG
%token <token> TEQUAL TEOS TNEGATION TOR TAND TLPARENT TRPARENT TPLUS TMINUS TMUL TDIV TRES TPOW TLBRACE TRBRACE TCOMA TPOINTS TFOR TWHILE TTRUE TFALSE TLOAD_MODEL TLOAD_PRIMITIVE TSET_DEFAULT_CAMERA TANIMATION TINTERPOLATE TIF TADD_TO_TIMELINE TCAMERA

%type <program> program
%type <commands> COMMANDS;
%type <command> COMMAND;
%type <mv> MV
%type <model> LOAD_MODEL LOAD_PRIMITIVE
%type <cam> CAM
%type <cArgs> CAM_ARGS
%type <cArg> CAM_ARG
%type <anim> ANIMATION
%type <block> BLOCK
%type <interpolation> INTERPOLATE
%type <general> ADD_TIMELINE DEFAULT_CAM

%start program
%%

program : COMMANDS { $$ = new Program($1); std::cout << $$->generate(); };

COMMANDS :                   COMMAND { $$ = new Commands(); $$->push_front($1); }
                             | COMMAND COMMANDS { $$ = $2; $$->push_front($1); }
                             ;


COMMAND :                    LOAD_MODEL { $$ = $1; }
                             | LOAD_PRIMITIVE { $$ = $1; }
                             | MV { $$ = $1; }
                             | ANIMATION { $$ = $1; }
                             | INTERPOLATE { $$ = $1; }
                             | CAM { $$ = $1; }
                             | ADD_TIMELINE {$$ = $1; }
                             | DEFAULT_CAM {$$ = $1; }
                             ;

LOAD_MODEL :                 TLOAD_MODEL TCHAR TIDENTIFIER TEOS { $$ = new Model(*$2, *$3, false); }
                             ;

LOAD_PRIMITIVE:              TLOAD_PRIMITIVE TPRIMITIVE TIDENTIFIER TEOS { $$ = new Model(*$2, *$3, true); }
                             ;

MV:                          TMV_OP TIDENTIFIER TDOUBLE TDOUBLE TDOUBLE TEOS { $$ = new Move(*$1, *$2, *$3, *$4, *$5); }
                             ;

BLOCK :                      TLBRACE COMMANDS TRBRACE { $$ = new Block($2); }
                             ;

ANIMATION:                   TANIMATION TIDENTIFIER BLOCK { $$ = new Animation(*$2); $$->addBlock($3); }
                             ;

INTERPOLATE:                 TINTERPOLATE TDOUBLE BLOCK { $$ = new Interpolation(*$2); $$->addBlock($3); }
                             ;

DEFAULT_CAM:                 TSET_DEFAULT_CAMERA TIDENTIFIER TEOS { $$ = new GeneralCommand("Scene::instance().set_default_camera(\"" + *$2 + "\");"); }
                             ;


ADD_TIMELINE:                TADD_TO_TIMELINE TIDENTIFIER TDOUBLE TEOS { $$ = new GeneralCommand("Timeline::instance().add_animation(" + *$2 + ", " + *$3 + ");"); }
                             ;

CAM_ARG:                     TCAM_3ARGS TPOINTS TDOUBLE TDOUBLE TDOUBLE TEOS { $$ = new CamArg(*$1); $$->addArg(*$3); $$->addArg(*$4); $$->addArg(*$5); }
                             | TCAM_1ARG TPOINTS TDOUBLE TEOS { $$ =  new CamArg(*$1); $$->addArg(*$3); }
                             ;
CAM_ARGS:                    CAM_ARG { $$ = new CamArgs(); $$->push_back($1); } | CAM_ARG CAM_ARGS { $$ = $2; $$->push_back($1); }
                             ;
CAM:                         TCAMERA TIDENTIFIER TLBRACE CAM_ARGS TRBRACE { $$ = new Camera(*$2, $4); }
                             ;
