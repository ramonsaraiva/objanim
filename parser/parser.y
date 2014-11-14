
%{
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "code_generator.h"

CodeGenerador cg = CodeGenerador();
extern int yylex();
void yyerror(const char *s) { printf("ERROR: %s\n", s); }


%}

%union {
    std::string *string;
}

%token <string> TIDENTIFIER TDOUBLE TPRIMITIVE TCHAR TMV_OP TCAM_3ARGS TCAM_1ARG
%token <token> TEQUAL TEOS TNEGATION TOR TAND TLPARENT TRPARENT TPLUS TMINUS TMUL TDIV TRES TPOW TLBRACE TRBRACE TCOMA TPOINTS TFOR TWHILE TTRUE TFALSE TLOAD_MODEL TLOAD_PRIMITIVE TSET_DEFAULT_CAMERA TANIMATION TINTERPOLATE TIF TADD_TO_TIMELINE TCAMERA

%start program
%%

program : COMMANDS { std::cout << cg.generate();};

ATTRIBUITION :               TIDENTIFIER TEQUAL TDOUBLE TEOS { std::cout << "int " << *$1 << "=" << *$3 << ";" << std::endl; }
                             | TIDENTIFIER TEQUAL TIDENTIFIER TEOS
                             | TIDENTIFIER TEQUAL ARITIMETICAL_EXP
                             ;

LOGICAL_ATTR :               TIDENTIFIER
                             | TNEGATION TIDENTIFIER
                             ;

LOGICAL_OP :                 TOR | TAND
                             ;

LOGICAL_EXP :                LOGICAL_ATTR LOGICAL_OP LOGICAL_ATTR
                             | LOGICAL_ATTR LOGICAL_OP LOGICAL_EXP
                             | TLPARENT LOGICAL_ATTR LOGICAL_OP LOGICAL_ATTR TRPARENT
                             | TLPARENT LOGICAL_ATTR LOGICAL_OP LOGICAL_EXP TRPARENT
                             ;

ARITIMETICAL_OP:             TPLUS | TMINUS | TMUL | TDIV | TRES | TPOW
                             ;
ARITIMETICAL_ATTR:           TIDENTIFIER | TDOUBLE
                             ;
ARITIMETICAL_EXP:            ARITIMETICAL_ATTR ARITIMETICAL_OP ARITIMETICAL_ATTR
                             | ARITIMETICAL_ATTR ARITIMETICAL_OP ARITIMETICAL_EXP
                             | TLPARENT ARITIMETICAL_ATTR ARITIMETICAL_OP ARITIMETICAL_ATTR TRPARENT
                             | TLPARENT ARITIMETICAL_ATTR ARITIMETICAL_OP ARITIMETICAL_EXP TRPARENT
                             ;
FOR_ARG :                    TIDENTIFIER
                             | TDOUBLE
                             ;

BLOCK :                      TLBRACE COMMANDS TRBRACE
                             ;

COMMANDS :                   COMMAND
                             | COMMAND COMMANDS
                             ;

COMMAND :                    ATTRIBUITION
                             | BLOCK
                             | FOR
                             | WHILE
                             | IF
                             | LOAD_MODEL
                             | LOAD_PRIMITIVE
                             | ADD_TIMELINE
                             | ONE_ARG
                             | MV
                             | ANIMATION
                             | INTERPOLATE
                             | CAM
                             ;
FOR :                        TFOR TLPARENT FOR_ARG TCOMA FOR_ARG TCOMA FOR_ARG TRPARENT BLOCK
                             ;

EXPRESSION_ARG:              TTRUE | TFALSE | LOGICAL_EXP
                             ;
WHILE:                       TWHILE TLPARENT EXPRESSION_ARG TRPARENT BLOCK
                             ;

IF:                          TIF TLPARENT EXPRESSION_ARG TRPARENT BLOCK
                             ;
LOAD_MODEL :                 TLOAD_MODEL TCHAR TIDENTIFIER TEOS;

LOAD_PRIMITIVE:  TLOAD_PRIMITIVE TPRIMITIVE TIDENTIFIER TEOS { if (!cg.addPrimitive(*$2, *$3)) yyerror("teste"); };

ADD_TIMELINE: TADD_TO_TIMELINE TIDENTIFIER TDOUBLE TEOS;

ONE_ARG_OPS: TSET_DEFAULT_CAMERA;

ONE_ARG: ONE_ARG_OPS TIDENTIFIER;
MV:             TMV_OP TIDENTIFIER TDOUBLE TDOUBLE TDOUBLE TEOS { cg.move(*$1, *$2, *$3, *$4, *$5) };
ANIMATION:      TANIMATION TIDENTIFIER TLBRACE BLOCK TRBRACE TEOS;
INTERPOLATE:    TINTERPOLATE TDOUBLE TCOMA TIDENTIFIER TEOS | TINTERPOLATE TDOUBLE BLOCK
                ;
CAM_ARG:        TCAM_3ARGS TPOINTS TDOUBLE TDOUBLE TDOUBLE TEOS {std::cout << "3ARGS\n";} | TCAM_1ARG TPOINTS TDOUBLE TEOS
                ;
CAM_ARGS:        CAM_ARG | CAM_ARG CAM_ARGS
                ;
CAM:             TCAMERA TIDENTIFIER TLBRACE CAM_ARGS TRBRACE {std::cout << "CAM\n";}
;
