#pragma once
#include <iostream>
#include <string>
#include "Emocao.h"

using namespace std;

class Alegria : public Emocao {
public:
    Alegria(string nome, bool estado = false) : Emocao(nome, estado) {}

    string analisar(const string& desc) override {
        if ((desc.size()) % 2 == 0) {
            setEstado(true);  
            return estaAtiva();  
        } else {
            setEstado(false);  
            return estaAtiva();  
        }
    }
};