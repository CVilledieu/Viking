#pragma once



typedef Canvas_t Canvas_t;


typedef struct Core_t{
    Canvas_t* canvas;
    WCS_t wcs;
    Renderer_t renderer;
}Core_t;



int Core_Init(Core_t* core);
int Core_Run(Core_t* core);
void Core_Shutdown(Core_t* core);