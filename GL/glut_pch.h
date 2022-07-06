#pragma once
#define GLUT_BUILDING_LIB
#define GLUT_NO_WARNING_DISABLE

#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#include "freeglut.h"
#else
#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#endif
