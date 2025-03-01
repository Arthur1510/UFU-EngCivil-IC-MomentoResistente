#include "../include/models/Secao.h"

Secao::Secao() {}

void Secao::adicionarVertices(double x, double y)
{
    vertices.push_back({x, y});
}