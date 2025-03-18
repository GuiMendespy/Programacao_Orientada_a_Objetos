#pragma once
#include <iostream>
#include <string>
#include "Emocao.h"

using namespace std;

class Raiva : public Emocao {
public:
    Raiva(string nome, bool estado = false) : Emocao(nome, estado) {}

    string analisar(const string& desc) override {
        int cont = 0;
        for (char c : getNome()) {
            if (string("aeiouAEIOU").find(c) != string::npos) {
                cont++;
            }
        }

        if (cont % 2 != 0) {
            setEstado(true);  
            return estaAtiva();
        } else {
            setEstado(false);  
            return estaAtiva();
        }
    }
};
