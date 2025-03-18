#include <iostream>
#include <string>
#include <format>

using std::cout, std::endl, std::string;

class Carro{
public:
    Carro(string marca,string modelo,int ano)
    {
		setMarca(marca);	
		setModelo(modelo);
		setAno(ano);
	}
	
    void setMarca(string marca){
        marca_carro = marca;
    }
    void setModelo(string modelo){
        modelo_carro = modelo;
    }
    void setAno(int ano){
        ano_carro = ano;
    }
    string getMarca()const{
        return marca_carro;
    }
    string getModelo()const{
        return modelo_carro;
    }
    int getAno()const{
        return ano_carro;
    }
    string toString() const {
        return std::format("{} {} ({})", marca_carro, modelo_carro, ano_carro);
    }
private:
    
    string marca_carro;
    string modelo_carro;
    int ano_carro;
};

int main(){
    
    Carro possante("Renault","Duster",2005);
    cout << format("O meu possante eh um {} \n", 
		possante.toString());
    return 0;
}