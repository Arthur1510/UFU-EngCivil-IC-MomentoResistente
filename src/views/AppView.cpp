#include "../include/views/AppView.h"

void AppView::iniciar()
{
    int screenWidth = 1280;
    int screenHeight = 800;

    SetConfigFlags(FLAG_MSAA_4X_HINT | FLAG_VSYNC_HINT | FLAG_WINDOW_RESIZABLE);
    InitWindow(screenWidth, screenHeight, "IC - FCO - Momentos Resistentes");
    SetTargetFPS(60);
    rlImGuiSetup(true);
    ImPlot::CreateContext();
}

void AppView::executarLoop()
{
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(DARKGRAY);
        rlImGuiBegin();

        AppController::renderizarMenu();
        SecaoView::renderizar();

        rlImGuiEnd();
        EndDrawing();
    }

    ImPlot::DestroyContext();
    rlImGuiShutdown();
    CloseWindow();
}