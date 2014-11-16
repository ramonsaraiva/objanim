
%{
#include <iostream>
#include <stdexcept>
#include <map>

#include "lib/program.h"

extern int yylex();
extern int linenum;

bool errors = false;

std::map<std::string, std::string> variables;

void yyerror(const char *s) {
    errors = true;
    printf("ERROR: %s at line %d\n", s, linenum);
}


std::string *getVar(std::string varName)
{
    string *result;
    try {
        result = &variables.at(varName);
    } catch (std::out_of_range &err) {
        result = NULL;
    }
    return result;
}

bool addVar(std::string varName, std::string varType)
{
    if (getVar(varName) == NULL) {
        variables.insert(std::pair<std::string, std::string>(varName, varType));
        return true;
    } else {
        return false;
    }
}

%}

%error-verbose
%locations

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
%type <commands> COMMANDS ANIMATION_COMMANDS INTERPOLATE_COMMANDS
%type <command> COMMAND ANIMATION_COMMAND INTERPOLATE_COMMAND
%type <mv> MV
%type <model> LOAD_MODEL LOAD_PRIMITIVE
%type <cam> CAM
%type <cArgs> CAM_ARGS
%type <cArg> CAM_ARG
%type <anim> ANIMATION
%type <block> ANIMATION_BLOCK INTERPOLATE_BLOCK
%type <interpolation> INTERPOLATE
%type <general> ADD_TIMELINE DEFAULT_CAM

%start program
%%

program : COMMANDS { $$ = new Program($1); if (!errors) std::cout << $$->generate(); };

COMMANDS :                   COMMAND { $$ = new Commands(); $$->push_front($1); }
                             | COMMAND COMMANDS { $$ = $2; $$->push_front($1); }
                             | error TEOS COMMANDS { $$ = $3; }
                             | error COMMANDS { $$ = $2; }
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

LOAD_MODEL :                 TLOAD_MODEL TCHAR TIDENTIFIER TEOS {
                                                                    if (addVar(*$3, "Model")) {
                                                                        $$ = new Model(*$2, *$3, false);
                                                                    } else {
                                                                        $$ = NULL;
                                                                        std::string msg = "Cannot redeclare var \"" + *$3 + "\"";
                                                                        yyerror(msg.c_str());
                                                                    }
                                                                }
                             ;

LOAD_PRIMITIVE:              TLOAD_PRIMITIVE TPRIMITIVE TIDENTIFIER TEOS {
                                                                            if (addVar(*$3, "Model")) {
                                                                                $$ = new Model(*$2, *$3, true);
                                                                            } else {
                                                                                $$ = NULL;
                                                                                std::string msg = "Cannot redeclare var \"" + *$3 + "\"";
                                                                                yyerror(msg.c_str());
                                                                            }
                                                                         }
                             ;

MV:                          TMV_OP TIDENTIFIER TDOUBLE TDOUBLE TDOUBLE TEOS {
                                                                                $$ = new Move(*$1, *$2, *$3, *$4, *$5);
                                                                                std::string *varType = getVar(*$2);
                                                                                if (varType == NULL) {
                                                                                    std::string msg = "Var \"" + *$2 + "\" has not been declarated";
                                                                                    yyerror(msg.c_str());
                                                                                } else if (varType->compare("Model") != 0 ) {
                                                                                    std::string msg = "Cannot " + *$1 + " a " + *varType;
                                                                                    yyerror(msg.c_str());
                                                                                }
                                                                             }
                             ;

ANIMATION_BLOCK:             TLBRACE ANIMATION_COMMANDS TRBRACE { $$ = new Block($2); }
                             ;

ANIMATION_COMMANDS:          ANIMATION_COMMAND { $$ = new Commands(); $$->push_front($1); }
                             | ANIMATION_COMMAND ANIMATION_COMMANDS { $$ = $2; $$->push_front($1); }
                             ;
ANIMATION_COMMAND:           MV { $$ = $1; }
                             | INTERPOLATE { $$ = $1; }
                             ;

ANIMATION:                   TANIMATION TIDENTIFIER ANIMATION_BLOCK {
                                                                        if (addVar(*$2, "Animation")) {
                                                                            $$ = new Animation(*$2); $$->addBlock($3);
                                                                        } else {
                                                                            $$ = NULL;
                                                                            std::string msg = "Cannot redeclare var \"" + *$2 + "\"";
                                                                            yyerror(msg.c_str());
                                                                        }
                                                                    }
                             ;

INTERPOLATE:                 TINTERPOLATE TDOUBLE INTERPOLATE_BLOCK { $$ = new Interpolation(*$2); $$->addBlock($3); }
                             ;
INTERPOLATE_BLOCK:           TLBRACE INTERPOLATE_COMMANDS TRBRACE  { $$ = new Block($2); }
                             ;
INTERPOLATE_COMMANDS:        INTERPOLATE_COMMAND { $$ = new Commands(); $$->push_front($1); }
                             | INTERPOLATE_COMMAND INTERPOLATE_COMMANDS { $$ = $2; $$->push_front($1); }
                             ;
INTERPOLATE_COMMAND:         MV { $$ = $1; }
                             ;

DEFAULT_CAM:                 TSET_DEFAULT_CAMERA TIDENTIFIER TEOS {
                                                                    $$ = new GeneralCommand("Scene::instance().set_default_camera(\"" + Object::makeName(*$2) + "\");");
                                                                    std::string *varType = getVar(*$2);
                                                                    if (varType == NULL) {
                                                                        std::string msg = "Var \"" + *$2 + "\" has not been declarated";
                                                                        yyerror(msg.c_str());
                                                                    } else if (varType->compare("Camera") != 0 ) {
                                                                        std::string msg = "Cannot set " + *varType + " as default camera";
                                                                        yyerror(msg.c_str());
                                                                    }
                                                                  }
                             ;


ADD_TIMELINE:                TADD_TO_TIMELINE TIDENTIFIER TDOUBLE TEOS {
                                                                            std::string *varType = getVar(*$2);
                                                                            if (varType == NULL) {
                                                                                $$ = NULL;
                                                                                std::string msg = "Var \"" + *$2 + "\" has not been declarated";
                                                                                yyerror(msg.c_str());
                                                                            } else if (varType->compare("Animation") == 0) {
                                                                                $$ = new GeneralCommand("Timeline::instance().add_animation(" + Object::makeName(*$2) + ", " + *$3 + ");");
                                                                            } else if (varType->compare("Camera") == 0) {
                                                                                $$ = new GeneralCommand("Timeline::instance().add_camera(" + Object::makeName(*$2) + ", " + *$3 + ");");
                                                                            } else {
                                                                                $$ = NULL;
                                                                                std::string msg = "Cannot add a " + *varType + " to time line";
                                                                                yyerror(msg.c_str());
                                                                            }
                                                                        }
                             ;

CAM_ARG:                     TCAM_3ARGS TPOINTS TDOUBLE TDOUBLE TDOUBLE TEOS { $$ = new CamArg(*$1); $$->addArg(*$3); $$->addArg(*$4); $$->addArg(*$5); }
                             | TCAM_1ARG TPOINTS TDOUBLE TEOS { $$ =  new CamArg(*$1); $$->addArg(*$3); }
                             ;

CAM_ARGS:                    CAM_ARG { $$ = new CamArgs(); $$->push_back($1); } | CAM_ARG CAM_ARGS { $$ = $2; $$->push_back($1); }
                             | error { $$ = new CamArgs(); }
                             ;

CAM:                         TCAMERA TIDENTIFIER TLBRACE CAM_ARGS TRBRACE {
                                                                            if (addVar(*$2, "Camera")) {
                                                                                $$ = new Camera(*$2, $4);
                                                                            } else {
                                                                                $$ = NULL;
                                                                                std::string msg = "Cannot redeclare var \"" + *$2 + "\"";
                                                                                yyerror(msg.c_str());
                                                                            }
                                                                          }
                             ;
