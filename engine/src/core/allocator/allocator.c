#include "core/allocator/allocator.h"
#include "core/allocator/arena.h"



Allocator_t g_allocator = {0};



int MemoryAllocator_Init(void){

    if(!MArena_Init(&g_allocator.arena)){
        return -1;
    }

    return 0;
}


int MemoryAllocator_Shutdown(void){
    MArena_Shutdown(&g_allocator.arena);
}



int MemoryAllocator_Checkout(MChunk_t* mcTag){
    if(!mcTag){
        return -1;
    }



}



int MemoryAllocator_Return(MChunk_t* mcTag){
    if(!mcTag){
        return -1;
    }

}
