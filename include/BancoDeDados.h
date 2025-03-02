#pragma once

#include "Pessoa.h"
#include <vector>

class BancoDeDados
{
private:
	vector<Pessoa> pessoas;
	int proximoId;

public:
	BancoDeDados();

	void adicionarPessoa(string nome, int idade);
	vector<Pessoa> listarPessoas() const;
	bool atualizarPessoa(int id, string novoNome, int novaIdade);
	bool deletarPessoa(int id);
};

