#pragma once

#include <stdint.h>
#include <stdlib.h>

typedef uint32_t SceneId_t;
typedef uint32_t AssetId_t;

typedef uint8_t Result_t;




// Stack type
typedef uint32_t StackId_t;

//Sizes are going to be an issue
typedef struct Stack_t{
    int64_t top;
    size_t cap;
    StackId_t* ids;
}Stack_t;




static inline uint8_t Stack_New(Stack_t* stack, size_t indexCount){
    if(!stack || !indexCount){
        return 0;
    }

    stack->cap = indexCount;
    stack->top = -1;


    stack->ids = (StackId_t*)malloc(sizeof(StackId_t) * indexCount);
    if(!stack->ids){
        return 0;
    }

    
    for(int i = 0; i < (int)indexCount; i++){
        stack->ids[i] = 0;
    }
    
    return 1;
}



static inline uint8_t Stack_Push(Stack_t* stack, StackId_t id){
    if(!stack || stack->top + 1 >= (int64_t)stack->cap){
        return 0;
    }

    stack->top++;
    stack->ids[stack->top] = id;

    return 1;
}



static inline StackId_t Stack_Pop(Stack_t* stack){
    if(!stack || stack->top < 0){
        return 0;
    }

    StackId_t id = stack->ids[stack->top];
    stack->top--;

    return id;
}



static inline StackId_t Stack_Peak(Stack_t* stack){
    if(!stack || stack->top < 0){
        return 0;
    }
    
    StackId_t id = stack->ids[stack->top];

    return id;
}



static inline void Stack_Free(Stack_t* stack){
    if(!stack){
        return;
    }

    free(stack->ids);
    stack->ids = NULL;
    stack->top = -1;
    stack->cap = 0;
}