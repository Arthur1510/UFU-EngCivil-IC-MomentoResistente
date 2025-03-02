#include "BancoDeDados.h"

BancoDeDados::BancoDeDados() : proximoId(1) {}

void BancoDeDados::adicionarPessoa(string nome, int idade)
{
	pessoas.push_back(Pessoa(proximoId++, nome, idade));
}

vector<Pessoa> BancoDeDados::listarPessoas() const
{
	return pessoas;
}

bool BancoDeDados::atualizarPessoa(int id, string novoNome, int novaIdade)
{
	for (auto& pessoa : pessoas)
	{
		if (pessoa.getId() == id)
		{
			pessoa.setNome(novoNome);
			pessoa.setIdade(novaIdade);
			return true;
		}
	}
	return false;
}

bool BancoDeDados::deletarPessoa(int id)
{
	for (auto it = pessoas.begin(); it != pessoas.end(); ++it)
	{
		if (it->getId() == id)
		{
			pessoas.erase(it);
			return true;
		}
	}
    return false;
}