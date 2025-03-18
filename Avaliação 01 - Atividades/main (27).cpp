#include <iostream>
#include "CapaBruxo.h"

using namespace std;

int main()
{
    CapaBruxo c1(25,"Vermelho","Grifinoria");
    c1.display();
    cout<<endl;
    CapaBruxo c2(21,"Verde","Sonserina");
    c2.display();
    cout<<endl;
    CapaBruxo c3(34,"Azul","Corvinal");
    c3.display();
    cout<<endl;
    CapaBruxo c4(35,"Amarelo","Lufa_lufa");
    c4.display();
    cout<<endl;
    CapaBruxo c5(35,"Verde","Lufa_lufa");
    c5.display();
    cout<<endl;
    CapaBruxo c6(35,"Azul","Sonserina");
    c6.display();
    cout<<endl;

    return 0;
}