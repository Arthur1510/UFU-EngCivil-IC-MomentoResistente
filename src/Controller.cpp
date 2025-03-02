#include "Controller.h"
#include <iostream>

void Controller::iniciar()
{
	bool rodando = true;
	while (rodando)
	{
		int opcao = View::solicitarOpcao();

		switch (opcao)
		{
		case 1:
		{
			string nome;
			int idade;

			cout << "Nome: ";
			cin.ignore();
			getline(cin, nome);
			cout << "Idade: ";
			cin >> idade;

			banco.adicionarPessoa(nome, idade);
			View::mostrarMensagem("Pessoa adicionada com sucesso!");
			break;
		}
		case 2:
		{
			View::mostrarPessoas(banco.listarPessoas());
			break;
		}
		case 3:
		{
			int id;
			string novoNome;
			int novaIdade;

			cout << "ID da pessoa: ";
			cin >> id;
			cout << "Novo nome: ";
			cin.ignore();
			getline(cin, novoNome);
			cout << "Nova idade: ";
			cin >> novaIdade;

			if (banco.atualizarPessoa(id, novoNome, novaIdade))
				View::mostrarMensagem("Pessoa atualizada!");
			else
				View::mostrarMensagem("Pessoa nao encontrada.");

			break;
		}
		case 4:
		{
			int id;

			cout << "ID da pessoa";
			cin >> id;

			if (banco.deletarPessoa(id))
				View::mostrarMensagem("Pessoa removida!");
			else
				View::mostrarMensagem("Pessoa nao encontrada");

			break;
		}
		case 5:
		{
			rodando = false;
			break;
		}
		default:
		{
			View::mostrarMensagem("Opcao invalida!");
		}
		}
	}
}