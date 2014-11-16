CFLAGS=-std=c++11 -Wall
all: parser


my_sources:=$(shell find lib -iname '*.cpp' | grep -v 'test.cpp')
OBJS=$(my_sources:%.cpp=%.o)

parser: library parser.o lexer.o main.o
	g++ $(CFLAGS) $(OBJS) parser.o lexer.o main.o -o parser

lexer.o: lexer.cpp
	g++ $(CFLAGS) -c lexer.cpp -o lexer.o

parser.o: parser.cpp
	g++ $(CFLAGS) -c parser.cpp -o parser.o

main.o: main.cpp
	g++ $(CFLAGS) -c main.cpp -o main.o

parser.cpp: parser.y
	bison -d -o parser.cpp parser.y


lexer.cpp: parser.cpp lexer.lex
	lex -o lexer.cpp lexer.lex

.PHONY library:
	make -C lib
clean:
	make clean -C lib
	rm -f *.o parser.cpp parser.hpp lexer.cpp parser parser.h
