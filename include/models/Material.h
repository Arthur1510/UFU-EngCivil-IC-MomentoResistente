#pragma once

class Material
{
public: 
    double fck;
    double gamaC;

    Material();
    void definirMaterial(double fck, double gamaC);
};