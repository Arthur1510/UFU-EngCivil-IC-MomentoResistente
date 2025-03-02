#pragma once

#include <string>
using namespace std;

class Pessoa
{
private:
	int id;
	string nome;
	int idade;

public:
	Pessoa(int id, string nome, int idade);

	int getId() const;
	string getNome() const;
	int getIdade() const;

	void setNome(string nomeNome);
	void setIdade(int novaIdade);
};

