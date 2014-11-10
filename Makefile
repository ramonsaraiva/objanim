#
# Makefile
#

CC = g++

CFLAGS = -I. `pkg-config --cflags-only-I sdl`
LDFLAGS = `pkg-config --libs-only-L sdl`
LIBS = -lGLEW -lGLU `pkg-config --libs-only-l sdl`

OBJDIR = build/objects/
BINDIR = build/bin/

all: $(BINDIR)/objanim

build:
	mkdir -p $(OBJDIR) $(BINDIR)

$(OBJDIR)/camera.o: camera/camera.cpp build
	$(CC) $(CFLAGS) -o $(OBJDIR)/camera.o -c camera/camera.cpp

$(OBJDIR)/camera.o: input/input.cpp build
	$(CC) $(CFLAGS) -o $(OBJDIR)/input.o -c input/input.cpp

$(OBJDIR)/main.o: main.cpp build
	$(CC) $(CFLAGS) -o $(OBJDIR)/main.o -c main.cpp

$(BINDIR)/objanim: $(OBJDIR)/camera.o $(OBJDIR)/input.o $(OBJDIR)/main.o
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(BINDIR)/objanim $(LIBS) $(OBJDIR)/camera.o $(OBJDIR)/input.o $(OBJDIR)/main.o

clean:
	rm -rf build
