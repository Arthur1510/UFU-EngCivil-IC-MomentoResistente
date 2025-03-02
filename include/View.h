#pragma once

#include "Pessoa.h"
#include <vector>

class View
{
public:
	static void mostrarPessoas(const vector<Pessoa>& pessoas);
	static int solicitarOpcao();
	static void mostrarMensagem(string mensagem);
};