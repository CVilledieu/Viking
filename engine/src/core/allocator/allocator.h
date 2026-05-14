#pragma once


typedef struct MChunk_t{
    size_t currentSize;
    size_t maxSize;
    ArenaIndex_t* start;
}MChunk_t;

// Come back and rename
typedef struct Allocator_t{
    MemoryArena_t* arena;
}Allocator_t;


int MemoryAllocator_Init(void);
int MemoryAllocator_Shutdown(void);

int MemoryAllocator_Checkout(MChunk_t* mcTag);
int MemoryAllocator_Return(MChunk_t* mcTag);
