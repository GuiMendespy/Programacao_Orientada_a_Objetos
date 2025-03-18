#include <iostream>
#include "HugeInteger.h"
#include <format>

using namespace std;

int main() {
    HugeInteger obj1("123456789123456789123456789123");
    HugeInteger obj2("224357256574346753453432345678987");
    HugeInteger obj3("937636738888338822992292929292345678987654323456788765432345678");
    HugeInteger obj4("");
    HugeInteger obj5("");

    cout << "Número 1: ";
    obj1.output();
    cout << endl;
    
    cout << "Número 2: ";
    obj2.output();
    cout << endl;

    cout << "Número 3: ";
    obj3.output();
    cout << endl;
    
    obj4.add(obj1, obj2, obj4);

    cout << "Soma: ";
    obj4.output();
    cout << endl;
    
    cout<<format("O objeto 1 e objeto 2: isEqualTo {}.",obj5.isEqualTo(obj1,obj2));
    cout << endl;
    cout<<format("O objeto 1 e objeto 2: isNotEqualTo {}.",obj5.isNotEqualTo(obj1,obj2));
    cout << endl;
    cout<<format("O objeto 1 e objeto 2: isGreaterThan {}.",obj5.isGreaterThan(obj1,obj2));
    cout << endl;
    cout<<format("O objeto 1 e objeto 2: isLessThan {}.",obj5.isLessThan(obj1,obj2));
    cout << endl;
    cout<<format("O objeto 1 e objeto 2: isGreaterThanOrIqual {}.",obj5.isGreaterThanOrIqual(obj1,obj2));
    cout << endl;
    cout<<format("O objeto 1 e objeto 2: isLessThanOrIqual {}.",obj5.isLessThanOrIqual(obj1,obj2));
    return 0;
}