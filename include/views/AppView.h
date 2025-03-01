#pragma once

#include "raylib.h"
#include "imgui.h"
#include "implot.h"
#include "rlImGui.h"

#include "../include/controllers/AppController.h"
#include "../include/views/SecaoView.h"

class AppView
{
public:
    static void iniciar();
    static void executarLoop();
};