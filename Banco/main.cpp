#include<iostream>
#include<string>
#include "Conta.hpp"

using namespace std;

int main () {
	Conta umaConta;
	umaConta.definirNomeTitular("Thalyson");
	umaConta.definirCpfTitular("12012012054");
	umaConta.definirNumero("0310");
	umaConta.depositar(1000);
	umaConta.sacar(100);
	
	cout  << "Nome: " << umaConta.recuperaNome() << endl
		<< "cpf titular: " << umaConta.recuperaCpf() << endl
		<< "Numero Titular: " << umaConta.recuperaNumero() << endl
		<< "recupera saldo: " << umaConta.recuperaSaldo() << endl;

	return 0;
}