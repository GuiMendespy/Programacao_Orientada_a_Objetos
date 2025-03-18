#include <iostream>
#include "Cpf.h"
using std::cin, std::cout, std::endl;

int main() {
    Pessoa p1("João Silva", "12345678909"); // CPF inválido
    Pessoa p2("Maria Oliveira", "11144477735"); // CPF válido
    

    // Apresentação dos dados
    cout << "Pessoa 1:" << endl;
    p1.apresentar();

    cout << "\nPessoa 2:" << endl;
    p2.apresentar();

    p2.setCpf("22233344405"); // CPF inválido
    p2.setNome("Maria Ferreira");

    cout << "\nPessoa 2 (após alterações):" << endl;
    p2.apresentar();

    return 0;
}