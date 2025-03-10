#pragma once
#include<string>

class Conta 
{
    std::string numero;
	std::string nomeTitular;
    std::string cpfTitular;
	float saldo;

	public:
		Conta(std::string numero, std::string nomeTitular, std::string cpfTitular); // Declaração do construtor

		void sacar(float valorASacar);
		void depositar(float valorADepositar);
		float recuperaSaldo();
		std::string recuperaNumero();
		std::string recuperaNome();
		std::string recuperaCpf();
		void definirNomeTitular(std::string nome);
		void definirCpfTitular(std::string cpf);
		void definirNumero(std::string numeroTitular);
};