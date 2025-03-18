#include <iostream>
#include <string>
#include <format>

using std::cin,std::cout,std::string,std::endl;

class ContaBanco{
public:
    ContaBanco(string nome, double saldo){
        setNome(nome);
        setSaldo(saldo);
        if (saldo < 0){
            saldo = 0;
        }
    }
    void setNome(string nome){
        nome_cliente = nome;
    }
    void setSaldo(double saldo){
        saldo_cliente = saldo;
    }
    string getNome()const{
        return nome_cliente;
    }
    double getSaldo()const{
        return saldo_cliente;
    }
    void setCreditar(double creditar_saldo){
        saldo_cliente += creditar_saldo; 
    }
    void setDebitar(double creditar_saldo){
        saldo_cliente -= creditar_saldo; 
    }
    
    
private:
    string nome_cliente;
    double saldo_cliente;
};

int main()
{
    ContaBanco cliente ("Guilherme",7500);
    ContaBanco cliente2 ("Ysla",3467);
    cout<<format("Informações do Cliente: {} {}",cliente.getNome(),cliente.getSaldo())<<endl;
    cout<<format("Informações do Cliente: {} {}",cliente2.getNome(),cliente2.getSaldo())<<endl;

    cliente.setCreditar(800);
    cliente.setDebitar(1200);
    cliente2.setCreditar(800);
    cliente2.setDebitar(1200);
    
    cout<<format("Informações do Cliente: {} {}",cliente.getNome(),cliente.getSaldo())<<endl;
    cout<<format("Informações do Cliente: {} {}",cliente2.getNome(),cliente2.getSaldo())<<endl;

    return 0;
}