#include "Pessoa.h"

Pessoa::Pessoa(int id, string nome, int idade) : id(id), nome(nome), idade(idade) {}

int Pessoa::getId() const { return id; }
string Pessoa::getNome() const { return nome; }
int Pessoa::getIdade() const { return idade; }

void Pessoa::setNome(string novoNome) { nome = novoNome; }
void Pessoa::setIdade(int novaIdade) { idade = novaIdade; }