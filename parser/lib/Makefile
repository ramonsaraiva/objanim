CC = g++
CFLAGS =

my_sources:=$(shell find -iname '*.cpp' | grep -v 'test.cpp')
OBJS=$(my_sources:%.cpp=%.o)

all: $(OBJS)

%.o: %.cpp
	g++ -g -c $? -o $@

test: $(OBJS) test.cpp
	$(CC) $(CFLAGS) -o $@ $(OBJS) test.cpp

clean:
	rm -f *.o test
