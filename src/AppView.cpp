#include "AppView.h"

void AppView::initialize()
{
    int screenWidth = 1280;
    int screenHeight = 800;

    SetConfigFlags(FLAG_MSAA_4X_HINT | FLAG_VSYNC_HINT | FLAG_WINDOW_RESIZABLE);
    InitWindow(screenWidth, screenHeight, "IC - FCO - Momentos Resistentes");
    SetTargetFPS(60);
    rlImGuiSetup(true);
    ImPlot::CreateContext();   
}

void AppView::mainLoop()
{
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        BeginDrawing();
        ClearBackground(DARKGRAY);

        // start ImGui Conent
        rlImGuiBegin();

        bool janelaSecao = true;
        if (janelaSecao)
        {
            // inicia a janela no ImGui
            ImGui::Begin("Secao Transversal", &janelaSecao);

            ImVec2 plotSize = ImGui::GetContentRegionAvail();

            // inicialização do gráfico com os eixos
            if (ImPlot::BeginPlot("Grafico", ImVec2(plotSize.x, plotSize.y), ImPlotFlags_Equal))
            {
                
            }

            ImPlot::EndPlot();

            // finaliza a janela no ImGui
            ImGui::End();
        }
        // end ImGui Content
        rlImGuiEnd();

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    ImPlot::DestroyContext();
    rlImGuiShutdown();

    // De-Initialization
    //--------------------------------------------------------------------------------------   
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
}