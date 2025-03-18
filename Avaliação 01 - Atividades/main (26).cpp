#include <iostream>
#include "varinha.h"

int main()
{
    Varinha v1("Carvalho","Pelo de Unicórnio",16);
    Varinha v2("Salgueiro","Pena de fenix",15);
    Varinha v3("Teixo","Corda de coração de dragao",18);
    v1.display();
    v2.display();
    v3.display();

    return 0;
}