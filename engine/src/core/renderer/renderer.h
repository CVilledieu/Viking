#pragma once


typedef struct Renderer_t{
    AssetManager_t assets;
    Dispatch_t dispatcher;
}Renderer_t;


void Renderer_Init(Renderer_t* renderer);