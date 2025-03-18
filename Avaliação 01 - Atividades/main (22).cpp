#include <iostream>
using std::cout, std::endl;

#include "Time.h"

int main() {
    /*Time t(16, 40,0); // Inicialização explícita

    cout << "Objeto t: ";
    cout << t.toUniversal() << endl;*/

    Time outroTime; // Inicializa com o horário atual

    cout << "Objeto outroTime criado com horário atual: ";
    cout << outroTime.toUniversal() << endl;

    

    return 0;
}