#include "Titular.hpp"
#include<iostream>

Titular::Titular(Cpf cpf, std::string nome): cpf(cpf), nome(nome)
{
	verificarTamanhoDoNome();
}


void Titular::verificarTamanhoDoNome() {
	if(nome.size() < 3) {
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}


std::string Titular::recuperaNome() {
	return nome;
}

void Titular::definirNomeTitular(std::string nome) {
	nome = nome;
}

