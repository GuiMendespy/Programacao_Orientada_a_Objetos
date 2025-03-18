#include "Cupom.h"
#include <iostream>

using std::cin, std::cout, std::endl, std::string;

int main() {
    Cupom cupom;

    cupom.addItem("001", "Café", 2, 5.50);
    cupom.addItem("002", "Leite", 3, 4.30);
    cupom.addItem("003", "Açúcar", 1, 3.20);
    int i;
    
    cupom.imprimirNota();
    
    
    for(i = 4;i<29;i++){
        bool a;
        a = cupom.addItem(std::to_string(i),"aleatorio",1+i,1+i);
        if (a == false){
            cout<<"Não há mais espaço!!"<<endl;
            break;
        }else{
            cupom.imprimirNota();
        }
    }
    return 0;
}