#include "core/renderer/assets/manager.h"


static inline uint8_t AStack_Init(AssetIdStack_t* stack, size_t stackLength){
    stack->openIds = malloc(sizeof(AssetId_t) * stackLength);
    if(!stack->openIds){
        return 0;
    }

    stack->top = (int64_t)stackLength - 1;
    
    for(int64_t i = 0; i <= (int64_t)stackLength; i++){
        stack->openIds[stack->top - i] = i;
    }
    
    return 1;
}


uint8_t AssetManager_Init(AssetManager_t* am){
    if(!AStack_Init(&am->idStack, ASSETS_MAX_COUNT)){
        return 0;
    }

    am->assets = malloc(sizeof(Asset_t) * ASSETS_MAX_COUNT);
    if(!am->assets){
        return 0;
    }
    
    am->count = 0;
    return 1;
}

void AssetManager_NewAsset(AssetManager_t* am){
    
}