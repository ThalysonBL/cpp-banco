#include<iostream>
#include<string>
#include "Conta.hpp"

using namespace std;


int main () {
	Conta umaConta("123456", "Thalyson", "123.456.789-00");
	umaConta.depositar(1000);
	umaConta.sacar(100);
	
	cout << "Uma conta: " << umaConta.recuperaSaldo() << endl;

	return 0;
}