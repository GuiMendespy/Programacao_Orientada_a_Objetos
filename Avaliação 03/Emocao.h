#pragma once
#include <iostream>
#include <string>

using namespace std;

class Emocao{
    
public:
    Emocao(string nome, bool estado = false): nome(nome), estado(estado) {}

    string getNome() const { return nome; }
    virtual string analisar(const string& desc) = 0;  
    
    string estaAtiva() const {
        return getNome();
    }

    void setEstado(bool e) { estado = e; }
    
private:
    string nome;
    bool estado; 
};