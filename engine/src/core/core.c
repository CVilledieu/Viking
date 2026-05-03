#include "core/core.h"
#include "internal/config.h"
#include "core/display/canvas.h"
#include "core/renderer/renderer.h"
#include "core/world_comp_sys/wcs.h"





static inline void MainLoopStep_Update(Core_t* core){
    CatchInputEvents();
    AppHook_Events();

    WCS_UpdateStep();
}



static inline void MainLoopStep_Draw(Core_t* core){


}




int Core_Run(Core_t* core){
    Canvas_t* canvas = &core->canvas;

    Canvas_Show(&canvas);
    while(glfwWindowShouldClose(canvas)){

        MainLoopStep_Update(&core);
        
        MainLoopStep_Draw(&core);

    }

    return 1;
}



int Core_Init(Core_t* core){
    if(!core){
        return 0;
    }

    Canvas_Init(&core->canvas);

    Renderer_Init(&core->renderer);
    WCS_Init(&core->wcs);

    return 1;
}



void Core_Shutdown(Core_t* core){

}