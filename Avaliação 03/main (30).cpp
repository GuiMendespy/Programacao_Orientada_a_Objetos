#include <iostream>
#include "Riley.h"
#include "Alegria.h"
#include "Raiva.h"
#include "Tristeza.h"

int main() {  
    Riley riley;

    riley << new Alegria("Alegria");
    riley << new Raiva("Raiva");
    riley << new Tristeza("Tristeza");

    riley.processar1("Brincando no parquinho.");
    riley.processar1("Viagem para Disney.");
    riley.processar1("Primeiro encontro.");
    riley.processar1("Uma noite no museu.");
    riley.processar1("O dia em que quebrou um osso.");

    std::cout << riley << std::endl;

    return 0;
}