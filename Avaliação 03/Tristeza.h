#pragma once
#include <iostream>
#include <string>
#include "Emocao.h"

using namespace std;

class Tristeza : public Emocao {
public:
    Tristeza(string nome, bool estado = false) : Emocao(nome, estado) {}

    string analisar(const string& desc) override {
        if ((desc.size()) % 2 != 0) {
            setEstado(true);  
            return estaAtiva();
        } else {
            setEstado(false); 
            return estaAtiva();
        }
    }
};