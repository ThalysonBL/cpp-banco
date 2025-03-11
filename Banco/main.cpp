#include<iostream>
#include<string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"

using namespace std;


int main () {
	Conta umaConta("123456", Titular(Cpf("123.456.789-00"), "Thalyson"));
	umaConta.depositar(1000);
	umaConta.sacar(100);
	
	cout << "Uma conta: " << umaConta.recuperaSaldo() << endl;

	return 0;
}