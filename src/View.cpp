#include "View.h"
#include <iostream>

void View::mostrarPessoas(const vector<Pessoa>& pessoas)
{
	cout << "\nLista de Pessoas:\n";
	for (const auto& pessoa : pessoas)
	{
		cout << "ID: " << pessoa.getId()
			<< " | Nome: " << pessoa.getNome()
			<< " | Idade: " << pessoa.getIdade() << " anos\n";
	}
}

int View::solicitarOpcao()
{
	int opcao;
	cout << "\n1. Criar Pessoa\n2. Listar Pessoa\n3. Editar Pessoa\n4. Deletar Pessoa\n5. Sair\nEscolha uma opcao: ";
	cin >> opcao;
	return opcao;
}

void View::mostrarMensagem(string mensagem)
{
	cout << mensagem << endl;
}