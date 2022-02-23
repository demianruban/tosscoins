# Makefile for compiling SDL2 C code on linux

# source files
OBJS = monet.c

CC = gcc

# Flags for Windows

INCLUDE_PATHS = -IC:\mingw_libs\include\SDL2

LIBRARY_PATHS = -LC:\mingw_libs\lib

LINKER_FLAGS = -lmingw32 -lSDL2main -lSDL2

COMPILER_FLAGS = -Wall

ifeq ($(OS),Windows_NT)
	CCFLAGS = $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(COMPILER_FLAGS) $(LINKER_FLAGS)
else
	CCFLAGS = $(COMPILER_FLAGS) `sdl2-config --cflags --libs`
endif

# target executable
OBJ_NAME = a

all : $(OBJS)
	$(CC) -Wall $(OBJS)

