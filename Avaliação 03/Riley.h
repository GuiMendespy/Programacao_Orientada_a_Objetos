#pragma once
#include <iostream>
#include <vector>
#include "Emocao.h"
#include "Alegria.h"
#include "Raiva.h"
#include "Tristeza.h"

using namespace std;

class Riley {
    friend ostream& operator<<(ostream& os, const Riley& obj);

public:
    Riley();

    void processar1(const string& desc);

    Riley& operator<<(Emocao* riley); 

private:
    vector<Emocao*> emoções; 
};