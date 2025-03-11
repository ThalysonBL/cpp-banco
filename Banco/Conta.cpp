#include "Conta.hpp"
#include<iostream>

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero, Titular titular)
: numero(numero), titular(titular), saldo(0) //lista de inicialização
{
	numeroDeContas++;
}

Conta::~Conta() {
	numeroDeContas--;
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

void Conta::definirNumero(std::string numeroTitular) {
	numero = numeroTitular;
}

int Conta::recuperaNumeroContas() {
	return numeroDeContas;
}
