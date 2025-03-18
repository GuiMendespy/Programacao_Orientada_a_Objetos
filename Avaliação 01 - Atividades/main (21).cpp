#include <iostream>
using std::cout, std::endl;

#include "Time.h"

int main() {
	Time t(16,40);

	cout << "Objeto t: ";
	cout << t.toUniversal() << endl;

	Time outroTime;

	cout << "Objeto outroTime criado: ";
	cout << outroTime.toUniversal() << endl;

	outroTime = t;  //cada atributo de t C) copiado para o respectivo atributo de outroTime

	cout << "Objeto outroTime pC3s atribuiC'C#o: ";
	cout << outroTime.toUniversal() << endl;

	outroTime.setTime(13,0,0);

	cout << "Objeto outroTime pC3s setTime 13 0 0: ";
	cout << outroTime.toUniversal() << endl;

	cout << "Objeto t original: ";
	cout << t.toUniversal() << endl;
	
	outroTime.setTime(13,21,59);
	
	outroTime.tick();
	
	cout << "Novo horário após 1s: ";
	cout << outroTime.toUniversal() << endl;
	
	outroTime.setTime(13,59,59);
	
	outroTime.tick();
	
	cout << "Novo horário após 1m: ";
	cout << outroTime.toUniversal() << endl;
	
	outroTime.setTime(23,59,59);
	
	outroTime.tick();
	
	cout << "Novo horário após 1h: ";
	cout << outroTime.toUniversal() << endl;

	return 0;
}
