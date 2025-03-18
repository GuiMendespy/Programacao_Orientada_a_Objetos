#include <iostream>
#include <string>

using std::cin,std::cout, std::string,std::isupper;

string check_maiuscula(string word){
    int i;
    string resp;
    for(i = 0; i<word.length();i++){
         if (isupper((word[i]))) {
            resp = "Sim"; 
        }
    }
    return resp;
}


int main()
{
    string word,a;
    cout<<"Digite uma String: ";
    cin>>word;
    a = check_maiuscula(word);
    if (a == "Sim"){
        cout<<"A string contém uma letra maiúscula!";
    }else{
        cout<<"A string não contém uma letra maiúscula!";
    }

    return 0;
}