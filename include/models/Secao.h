#pragma once

#include <vector>

using namespace std;

struct Ponto
{
    double x, y;
};

class Secao
{
public:
    vector<Ponto> vertices;

    Secao();

    void adicionarVertices(double x, double y);
};