/*
General overview

A single source of truth for all memory allocations.
Instead of many any subsystem allocating mem when needed, they come to the Memory Manager to get memory.

Goals

- Contain all allocation errors to a single point.
- Easier clean up memory as things are added then removed.




*/

#pragma once

#include "core/config.h"
#include <stdlib.h>


typedef uint8_t ArenaIndex_t;

typedef struct ArenaGuide_t{

}ArenaGuide_t;


typedef struct MemoryArena_t{
    size_t maxSize;
    ArenaIndex_t* start;
}MemoryArena_t;



static inline int MArena_Init(MemoryArena_t* arena){

}



static inline void MArena_Shutdown(MemoryArena_t* arena){

}



static inline size_t MArena_GetMaxSize(MemoryArena_t* arena){
    return arena->maxSize;
}


static inline int MArena_NewAllocation(MemoryArena_t* arena){
    
}