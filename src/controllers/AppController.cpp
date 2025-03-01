#include "../include/controllers/AppController.h"

void AppController::renderizarMenu()
{
    if (ImGui::BeginMainMenuBar())
    {
        if (ImGui::BeginMenu("Arquivo"))
        {
            ImGui::MenuItem("Salvar");
            ImGui::MenuItem("Carregar");
            ImGui::EndMenu();
        }

        if (ImGui::BeginMenu("Sobre"))
        {
            ImGui::Text("Versao 1.0");
            ImGui::EndMenu();
        }

        ImGui::EndMainMenuBar();
    }
}