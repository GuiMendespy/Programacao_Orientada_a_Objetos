#include <iostream>
#include "bruxo.h"

int main()
{
    Livro b1{"Guilherme","Corvinal"};
    Livro b2{"Matheus","Corvinal"};
    Livro b3("Guilherme","Corvina");
    b1.display();
    cout<<endl;
    b2.display();
    cout<<endl;
    b3.display();
    return 0;
}