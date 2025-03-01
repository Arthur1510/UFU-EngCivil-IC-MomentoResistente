#include "../include/controllers/SecaoController.h"

Secao SecaoController::secao;

void SecaoController::adicionarPonto(double x, double y)
{
    secao.adicionarVertices(x, y);
}