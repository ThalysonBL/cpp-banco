#include "Conta.hpp"
#include<iostream>

Conta::Conta(std::string numero, std::string nomeTitular, std::string cpfTitular)
: numero(numero), nomeTitular(nomeTitular), cpfTitular(cpfTitular), saldo(0)
{
}


void Conta::sacar(float valorASacar) {
	if (valorASacar < 0) {
			std::cout << "Nao pode sacar valor negativo" << std::endl;
			return;
		}
		
		if (valorASacar > saldo) {
			std::cout << "Saldo insufiente" << std::endl;
			return;
		}
		saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar) {
	if (valorADepositar < 0) {
		std::cout << "Nao pode depositar valor negativo" << std::endl;
		return;
	}
		
	saldo += valorADepositar;
}

float Conta::recuperaSaldo() {
	return saldo;
}

std::string Conta::recuperaNumero() {
	return numero;
}

std::string Conta::recuperaNome() {
	return nomeTitular;
}

std::string Conta::recuperaCpf() {
	return cpfTitular;
}

void Conta::definirNomeTitular(std::string nome) {
	nomeTitular = nome;
}

void Conta::definirCpfTitular(std::string cpf) {
	cpfTitular = cpf;
}

void Conta::definirNumero(std::string numeroTitular) {
	numero = numeroTitular;
}