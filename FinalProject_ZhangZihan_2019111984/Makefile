ifeq ($(OS),Windows_NT)
    uname_s := Windows
else
    uname_s := $(shell uname -s)
endif

CC = g++
Target := Main
GL_PATH =../GL
CCFLAGS = -g -std=c++14 -Wall -Werror -Wno-unused-variable -I$(GL_PATH)/..

ifeq ($(uname_s), Windows)
    Target  := $(Target).exe
    CCFLAGS += -D FREEGLUT_STATIC
    DEPLIB   = -L$(GL_PATH) -lfreeglut_static -lopengl32 -lglu32 -lwinmm -lgdi32
endif

ifeq ($(uname_s), Linux)
    Target := $(Target).out
    DEPLIB  = -lGL -lGLU -lglut
endif

ifeq ($(uname_s), Darwin)
    Target := $(Target).out
    DEPLIB = -L/System/Library/Frameworks -framework GLUT -framework OpenGL
endif

Source = $(wildcard *.cpp)
Objects = $(Source:%.cpp=build/%.o)
Build_Dir = build

all: $(Build_Dir) | $(Target)

$(Target): $(Objects)
	@$(CC) -o $(Build_Dir)/$(Target) $(Objects) $(DEPLIB)
	@echo     run $(Target)

build/%.o: %.cpp *.h
	@$(CC) $(CCFLAGS) -c $< -o $@

clean:
	@rm -rf build $(Target)

$(Build_Dir):
	@mkdir $@
