#pragma once

#include "core/wcs/world.h"

typedef struct WorldRegistry_t{
    int count;
    World_t* Registry;
}WorldRegistry_t;