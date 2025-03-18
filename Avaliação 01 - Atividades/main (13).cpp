#include <iostream>
#include <string>
#include <format>

using std::cin,std::cout,std::string,std::endl;

class Empregado{
public:
    Empregado(string nome, string sobrenome, double sal){
        setNome(nome);
        setSobrenome(sobrenome);
        setSal(sal);
    }
    void setNome(string nome){
        nome_emp = nome;
    }
    void setSobrenome(string sobrenome){
        sobrenome_emp = sobrenome;
    }
    void setSal(double sal){
        if (sal>=0){
            sal_emp = sal;
        }else{
            sal_emp = 0;
        }
    }
    string getNome()const{
        return nome_emp;
    }
    string getSobrenome()const{
        return sobrenome_emp;
    }
    double getSal()const{
        return sal_emp;
    }
    void setAumento(){
        sal_emp += (0.1*sal_emp);
    }
    
    
private:
    string nome_emp;
    string sobrenome_emp;
    double sal_emp;
};

int main()
{
    Empregado servidor ("Guilherme","Mendes",7500);
    Empregado servidor2 ("Ysla","Peixoto",17500);
    cout<<format("Informações do Empregado: {} {} {}",servidor.getNome(),servidor.getSobrenome(),servidor.getSal())<<endl;
    cout<<format("Informações do Empregado: {} {} {}",servidor2.getNome(),servidor2.getSobrenome(),servidor2.getSal())<<endl;
    servidor.setAumento();
    servidor2.setAumento();
    cout<<format("Informações do Empregado: {} {} {}",servidor.getNome(),servidor.getSobrenome(),servidor.getSal())<<endl;
    cout<<format("Informações do Empregado: {} {} {}",servidor2.getNome(),servidor2.getSobrenome(),servidor2.getSal())<<endl;
    return 0;
}