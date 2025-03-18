#pragma once
#include <string>

using namespace std;
class Pokemon{
    
public:
    Pokemon(string nome, string tipo, string som);
    
    void setNome(string nome);
    void setTipo(string tipo);
    void setSom(string som);
    string getNome()const;
    string getTipo()const;
    string emitirSom()const;

private:
    string nome_pok;
    string tipo_pok;
    string som_pok;
};