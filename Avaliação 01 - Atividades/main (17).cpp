#include <iostream>
#include <string>
#include <format>

using std::cin,std::cout,std::string,std::format,std::endl;

class Cupom{
public:
    Cupom(string id,string desc,int qtd, float preco){
        setId(id);
        setDesc(desc);
        setQtd(qtd);
        setPreco(preco);
    }
    void setId(string id){
        id_cupom = id;
    }
    void setDesc(string desc){
        desc_cupom = desc;
    }
    void setQtd(int qtd){
        qtd_cupom = qtd;
    }
    void setPreco(float preco){
        if(preco<0){
            preco_cupom = 0;
        }else{
            preco_cupom = preco;
        }
    }
    string getId()const{
        return id_cupom;
    }
    string getDesc()const{
        return desc_cupom;
    }
    int getQtd()const{
        return qtd_cupom;
    }
    float getPreco()const{
        return preco_cupom;
    }
    
    float calculaCupom(int qtd,float preco){
        float a;
        a = qtd_cupom * preco_cupom;
        return a;
    }
private:
    string id_cupom;
    string desc_cupom;
    int qtd_cupom; 
    float preco_cupom;
};
int main()
{
    Cupom compra("Café02","Coffee",3,7.5);
    cout<<format("Informações da Compra: {} {} {} {}",compra.getId(),compra.getDesc(),compra.getQtd(),compra.getPreco())<<endl;
    cout<<format("O valor da compra final foi de: {}", compra.calculaCupom(3,3.5));


    return 0;
}