#include <iostream>
#include "retangulo.h"

using namespace std;

int main() {
    Retangulo ret1(5, 10);  
    Retangulo ret2(-3, 25); 

    cout << "Retângulo 1:" << endl;
    cout << "Altura: " << ret1.getAlt() << endl;
    cout << "Largura: " << ret1.getLarg() << endl;
    cout << "Perímetro: " << ret1.perimetro() << endl;
    cout << "Área: " << ret1.area() << endl;

    ret1.desenhoRet();
    
    cout << "\nRetângulo 2 (com valores corrigidos):" << endl;
    cout << "Altura: " << ret2.getAlt() << endl;
    cout << "Largura: " << ret2.getLarg() << endl;
    cout << "Perímetro: " << ret2.perimetro() << endl;
    cout << "Área: " << ret2.area() << endl;

    ret2.desenhoRet();
    return 0;
}