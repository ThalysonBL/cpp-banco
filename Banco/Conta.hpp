#pragma once
#include<string>

class Conta 
{
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;
    
	float saldo = 0;

	public:
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