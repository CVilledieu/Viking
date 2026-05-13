#pragma once

#include "internal/config.h"

typedef struct Asset_t{

}Asset_t;

typedef struct AssetIdStack_t{
    int64_t top;
    AssetId_t* openIds;
} AssetIdStack_t;


typedef struct AssetManager_t{
    uint32_t count;
    AssetIdStack_t* idStack;
    Asset_t* assets;
}AssetManager_t;




uint8_t AssetManager_Init(AssetManager_t* am);
