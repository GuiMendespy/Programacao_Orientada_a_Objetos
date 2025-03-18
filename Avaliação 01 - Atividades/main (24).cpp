#include "viraTempo.h"
#include <iostream>

int main() {
    ViraTempo vt(5); // Inicializa com num = 5 e estado inicial true

    // Teste básico
    vt.mostrarTempo();
    vt.avancarTempo();
    vt.mostrarTempo();
    vt.viraTempo(); // Alterna o estado
    vt.avancarTempo();
    vt.mostrarTempo();
    vt.viraTempo(); // Alterna o estado novamente

    for (int i = 0; i < 6; ++i) {
        vt.avancarTempo();
        vt.mostrarTempo();
    }

    vt.viraTempo(); // Alterna o estado

    for (int i = 0; i < 7; ++i) {
        vt.avancarTempo();
        vt.mostrarTempo();
    }

    return 0;
}