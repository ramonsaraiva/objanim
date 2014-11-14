all: parser

parser: parser.cpp lexer.cpp main.cpp code_generator.cpp
	g++ -o parser parser.cpp lexer.cpp main.cpp code_generator.cpp
parser.cpp: parser.y
	bison -d -o parser.cpp parser.y
lexer.cpp: parser.cpp lexer.lex
	lex -o lexer.cpp lexer.lex
clean:
	rm -f parser.cpp parser.hpp lexer.cpp parser
