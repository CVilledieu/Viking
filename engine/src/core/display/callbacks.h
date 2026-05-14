#pragma once


#include "glad/glad.h"
#include <glfw/glfw3.h>



static void Canvas_Resized(GLFWwindow* window, int width, int height){
    (void)window;
    glViewport(0, 0, width, height);
}