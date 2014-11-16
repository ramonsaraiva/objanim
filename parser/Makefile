CFLAGS=-std=c++11 -Wall
all: parser


my_sources:=$(shell find lib -iname '*.cpp' | grep -v 'test.cpp')
OBJS=$(my_sources:%.cpp=%.o)

parser: library parser.cpp lexer.cpp main.cpp
	g++ $(CFLAGS)  $(OBJS) parser.cpp lexer.cpp main.cpp -o parser
parser.cpp: parser.y
	bison -d -o parser.cpp parser.y
lexer.cpp: parser.cpp lexer.lex
	lex -o lexer.cpp lexer.lex

.PHONY library:
	make -C lib
clean:
	make clean -C lib
	rm -f parser.cpp parser.hpp lexer.cpp parser
