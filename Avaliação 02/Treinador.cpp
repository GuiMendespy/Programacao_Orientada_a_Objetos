#include "Treinador.h"
#include <algorithm>
#include "Pokemon.h"
#include <format>

Treinador::Treinador(string nome){
    setNome(nome);
}
void Treinador::setNome(string nome){
    nome_trei = nome;
}
void Treinador::capturar(Pokemon *pk2){
    pokemons.push_back(pk2->getNome());
}
void Treinador::vai(string pokemon)const{
    if((std::find(pokemons.begin(),pokemons.end(),pokemon) == pokemons.end())){
        cout<<pk2->emitirSom()<<endl;
    }else{
        cout<<format("Ooooops. Ainda não capturei esse pokemon!")<<endl;
    }
}