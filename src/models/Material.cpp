#include "../include/models/Material.h"

Material::Material() : fck(30), gamaC(1.4) {}

void Material::definirMaterial(double novoFck, double novoGamaC)
{
    fck = novoFck;
    gamaC = novoGamaC;
}