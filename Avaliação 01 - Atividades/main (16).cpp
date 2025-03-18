#include <iostream>
#include <format>

using std::cout,std::format;

class Data {
public:
    Data(int dia, int mes, int ano) {
        setAno(ano);
        setMes(mes);
        setDia(dia, mes);
    }

    void setDia(int dia, int mes) {
        if ((dia < 1) || 
            (dia > 31) || 
            (mes == 2 && dia > 29) || 
            ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) || 
            (mes == 2 && dia == 29 && !isBissexto(ano_data))) { 
            dia_data = -1; 
        } else {
            dia_data = dia;
        }
    }

    void setMes(int mes) {
        if (mes < 1 || mes > 12) {
            mes_data = -1; 
        } else {
            mes_data = mes;
        }
    }

    void setAno(int ano) {
        ano_data = ano;
    }

    int getDia() const {
        return dia_data;
    }

    int getMes() const {
        return mes_data;
    }

    int getAno() const {
        return ano_data;
    }

private:
    int dia_data;
    int mes_data;
    int ano_data;

    bool isBissexto(int ano) const {
        return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
    }
};

int main() {
    Data calendario(21, 11, 2024);
    Data calendario2(33,7,2024);
    Data calendario3(20,13,2024);
    Data calendario4(31,2,2024);

    cout << format("A data é {}/{}/{}\n", 
                        calendario.getDia(), 
                        calendario.getMes(), 
                        calendario.getAno());
    cout << format("A data é {}/{}/{}\n", 
                        calendario2.getDia(), 
                        calendario2.getMes(), 
                        calendario2.getAno());
    cout << format("A data é {}/{}/{}\n", 
                        calendario3.getDia(), 
                        calendario3.getMes(), 
                        calendario3.getAno());
    cout << format("A data é {}/{}/{}\n", 
                        calendario4.getDia(), 
                        calendario4.getMes(), 
                        calendario4.getAno());

    return 0;
}