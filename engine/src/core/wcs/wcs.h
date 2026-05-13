#pragma once

#include <stdint.h>

typedef uint32_t WorldId_t;


typedef struct WCS_t{
    ActiveWorlds_t active;
    WorldRegistry_t registered;
    
}WCS_t;


int WCS_Init(WCS_t* wcs);