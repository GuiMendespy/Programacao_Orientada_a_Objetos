#include <iostream>
#include <string>
#include <format>

using std::cin,std::cout,std::string,std::endl;

class Bruxo{
public:
    Bruxo(string nome, string casa, string feitico){
        setNome(nome);
        setCasa(casa);
        setFeitico(feitico);
    }
    void setNome(string nome){
        nome_bruxo = nome;
    }
    void setCasa(string casa){
        if ((casa=="Sonserina")||(casa=="Corvinal")||(casa=="Lufa-lufa")||(casa=="Grifinória")){
            casa_bruxo = casa;
        }else{
            casa_bruxo = "Sem Casa";
        }
    }
    void setFeitico(string feitico){
        feitico_bruxo = feitico;
    }
    string getNome()const{
        return nome_bruxo;
    }
    string getCasa()const{
        return casa_bruxo;
    }
    string getFeitico()const{
        return feitico_bruxo;
    }
    void lancarFeitico(){
        string a;
        a = feitico_bruxo;
        cout<<format("Lançando feitiço... {}",a);
    }
    
    
private:
    string nome_bruxo;
    string casa_bruxo;
    string feitico_bruxo;
};

int main()
{
    Bruxo sangueruim ("Guilherme","Grifinória","Avada Kedavra");
    cout<<format("Informações do Bruxo: {} {} {}",sangueruim.getNome(),sangueruim.getCasa(),sangueruim.getFeitico())<<endl;
    sangueruim.lancarFeitico();
    
    return 0;
}