#include "display/canvas.h"


#include "glad/glad.h"
#include <glfw/glfw3.h>



static void ResizeCallBackCanvas(GLFWwindow* window, int width, int height){
    (void)window;
    glViewport(0, 0, width, height);
}



void Canvas_Shutdown(Canvas_t* canvas){
    if(!canvas){
        return;
    }

    glfwDestroyWindow(canvas);

}




uint8_t Canvas_Show(Canvas_t* canvas){
    if(!canvas){
        return 0;
    }
    //Reminder to add Context binding if multiple canvas support is added.
    //glfwMakeContextCurrent(canvas);
    
    glfwShowWindow(canvas);

    return 1;
}




//Canvas starts hidden so remainder of Init can be ran before showing canvas
void Canvas_Init(Canvas_t* canvas){
    if(!glfwInit() || !canvas){
        return;
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);


    glfwWindowHint(GLFW_VISIBLE, GL_FALSE);
    

    canvas = glfwCreateWindow(INIT_WND_WIDTH, INIT_WND_HEIGHT, INIT_WND_TITLE, NULL, NULL);
    glfwMakeContextCurrent(canvas);
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        return;
    }

    glfwSetFramebufferSizeCallback(canvas, ResizeCallBackCanvas);


}
