#include<iostream>
#include<string>

using namespace std;

struct Conta 
{
	string numero;
	string cpfTitular;
	string nomeTitular;
	float saldo;

};


void sacar(Conta& conta, float valorASacar)
{
	if (valorASacar < 0) {
		cout << "Nao pode sacar valor negativo" << endl;
		return;
	}
	
	if (valorASacar > conta.saldo) {
		cout << "Saldo insufiente" << endl;
		return;
	}
	conta.saldo -= valorASacar;
}

void depositar(Conta& conta, float valorADepositar) {
	if (valorADepositar < 0) {
		cout << "Nao pode depositar valor negativo" << endl;
		return;
	}
	
	conta.saldo += valorADepositar;
}

int main () {
	Conta umaConta;
	umaConta.numero = "123456";
	umaConta.cpfTitular = "12051081654";
	umaConta.saldo = 100;
	
	Conta umaOutraConta;
	umaOutraConta.saldo = 200;
	
	depositar(umaOutraConta, 500);
	
	cout << "saldo: " << umaOutraConta.saldo << endl;
		
}