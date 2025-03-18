#include "Pokemon.h"

Pokemon::Pokemon(string nome, string tipo, string som){
    setNome(nome);
    setTipo(tipo);
    setSom(som);
}

void Pokemon::setNome(string nome){
    nome_pok = nome;
}
void Pokemon::setTipo(string tipo){
    tipo_pok = tipo;
}
void Pokemon::setSom(string som){
    som_pok = som;
}
string Pokemon::getNome()const{
    return nome_pok;
}
string Pokemon::getTipo()const{
    return tipo_pok;
}
string Pokemon::emitirSom()const{
    return som_pok;
}