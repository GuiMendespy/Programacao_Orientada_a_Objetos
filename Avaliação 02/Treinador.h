#pragma once
#include "Pokebola.h"
#include <iostream>

using namespace std;

class Treinador{
    
public:
    Treinador(string nome);
    
    void setNome(string nome);
    
    void capturar(Pokemon *pk2);
    
    void vai(string pokemon)const;
private:
    string nome_trei;
    Pokebola *pk;
    Pokemon *pk2;
    std::vector<string>pokemons;
};