#pragma once
#include <array>
#include <string>
#include "Pokemon.h"
#include <vector>

using namespace std;

class Pokebola{

public:
    Pokebola();

    void setPok(Pokemon *p);
    
private:
    Pokemon *pokemon;
    
};