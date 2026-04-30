#pragma once

#include "internal/config.h"

typedef struct GLFWwindow Canvas_t;

void Canvas_Init(Canvas_t* canvas);
void Canvas_Shutdown(Canvas_t* canvas);


uint8_t Canvas_Show(Canvas_t* canvas);

