#include "../include/views/SecaoView.h"

void SecaoView::renderizar()
{
    ImGui::Begin("Secao Transversal");

    static double x, y;
    ImGui::InputDouble("x (cm)", &x);
    ImGui::InputDouble("y (cm)", &y);

    if (ImGui::Button("Adicionar Ponto"))
    {
        SecaoController::adicionarPonto(x, y);
    }

    ImVec2 plotSize = ImGui::GetContentRegionAvail();

    // inicialização do gráfico com os eixos
    if (ImPlot::BeginPlot("Grafico", ImVec2(plotSize.x, plotSize.y), ImPlotFlags_Equal))
    {
        // vector<Ponto>& pontos = SecaoController::secao.vertices;
        // if (!pontos.empty())
        // {
        //     vector<float> xData(pontos.size()), yData(pontos.size());
        //     for (size_t i = 0; pontos.size(); i++)
        //     {
        //         xData[i] = pontos[i].x;
        //         yData[i] = pontos[i].y;
        //     }

        //     ImPlot::PlotScatter("Pontos", xData.data(), yData.data(), static_cast<int>(pontos.size()));
        // }
    }

    ImPlot::EndPlot();

    // finaliza a janela no ImGui
    ImGui::End();
}