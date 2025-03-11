#include "Cpf.hpp"

Cpf::Cpf(std::string cpf): cpf(cpf)
{}

std::string Cpf::recuperaCpf() {
	return cpf;
}
void Cpf::definirCpfTitular(std::string cpf) {
	cpf = cpf;
}
