%option noyywrap

%{
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "lib/program.h"
#include "parser.hpp"
#define SAVE_TOKEN yylval.string = new std::string(yytext, yyleng)
#define TOKEN(t) (yylval.token = t)

int linenum = 1;
//extern "C" int yywrap(){ }
%}

%%
[ \t] ;
\n {linenum++;} ;
\/\/.* ;
-?[0-9]+(\.[0-9]+)? SAVE_TOKEN; return TDOUBLE;
(cube|cone|sphere|plane) SAVE_TOKEN; return TPRIMITIVE;
"=" return TEQUAL;
";" return TEOS;
"!" return TNEGATION;
"||" return TOR;
"&&" return TAND;
"(" return TLPARENT;
")" return TRPARENT;
"+" return TPLUS;
"-" return TMINUS;
"*" return TMUL;
"/" return TDIV;
"%" return TRES;
"^" return TPOW;
"{" return TLBRACE;
"}" return TRBRACE;
"," return TCOMA;
":" return TPOINTS;
"for" return TFOR;
"while" return TWHILE;
"true" return TTRUE;
"false" return TFALSE;
"load_model" return TLOAD_MODEL;
"load_primitive" return TLOAD_PRIMITIVE;
"add_to_timeline" return TADD_TO_TIMELINE;
"set_default_camera" return TSET_DEFAULT_CAMERA;
"animation" return TANIMATION;
"interpolate" return TINTERPOLATE;
"if" return TIF;
"camera" SAVE_TOKEN; return TCAMERA;
(translate|global_translate|rotate|scale) SAVE_TOKEN; return TMV_OP;
(position|direction) SAVE_TOKEN; return TCAM_3ARGS;
(depth) SAVE_TOKEN; return TCAM_1ARG;

[a-zA-Z][a-zA-Z\_0-9]* SAVE_TOKEN; return TIDENTIFIER;
\"(\\.|[^"])*\" SAVE_TOKEN; return TCHAR;



. printf("Unknown token %s at line %d !\n", yytext, linenum); yyterminate();
%%
