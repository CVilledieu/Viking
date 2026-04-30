#include "core/core.h"

int main(void){
    Core_t engineCore = {0};

    if(!Core_Init(&engineCore)){
        return 0;
    }

    Core_Run(&engineCore);

    Core_Shutdown(&engineCore);

    return 1;
}
