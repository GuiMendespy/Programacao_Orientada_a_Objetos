#include <iostream>
#include "Cpf.h"
using std::cin,std::cout,std::string;

int main() {
    Pessoa p1("João Silva", "12345678901", true); 
    Pessoa p2("Maria Oliveira");                 

    // Apresentação dos dados
    cout << "Pessoa 1:" << endl;
    p1.apresentar();

    cout << "\nPessoa 2:" << endl;
    p2.apresentar();

    p2.setCpf("09876543210");
    p2.setCpfValido(false);
    p2.setNome("Maria Ferreira");

    cout << "\nPessoa 2 (após alterações):" << endl;
    p2.apresentar();

    return 0;
}