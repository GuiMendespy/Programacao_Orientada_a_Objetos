#include "Riley.h"
#include <iostream>

Riley::Riley() {}

Riley& Riley::operator<<(Emocao* riley) {
    emoções.push_back(riley);  
    return *this;
}

void Riley::processar1(const string& desc) {
    for (Emocao* emo : emoções) {
        cout << emo->analisar(desc) << endl;  
    }
}

ostream& operator<<(ostream& os, const Riley& obj) {
    for (const Emocao* emo : obj.emoções) {
        os << emo->getNome() << " ";
    }
    return os;
}