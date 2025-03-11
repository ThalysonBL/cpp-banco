#pragma once
#include<string>
#include "Titular.hpp"

class Conta 
{
	private:
		static int numeroDeContas;
	
	public:
		int recuperaNumeroContas();
	
	private:
		std::string numero;
		Titular titular;
	float saldo;

	public:
		Conta(std::string numero, Titular titular); // Declaração do construtor
		~Conta();
		void sacar(float valorASacar);
		void depositar(float valorADepositar);
		float recuperaSaldo();
		std::string recuperaNumero();
		void definirNumero(std::string numeroTitular);
};