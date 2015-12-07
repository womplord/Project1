#pragma once

//Include GLEW
#include <GL/glew.h>

//Include GLFW
#include <GLFW/glfw3.h>

//Include GLM
#include <glm/glm.hpp>

//Include the standard C++ headers
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <fstream>

GLuint LoadShaders(const char * vertex_file_path, const char * fragment_file_path);