#include <iostream>
#include <string>

using std::cin,std::cout,std::string,std::tolower;

string minuscula(string word){
    int i;
    string a;
    for (i = 0;i<word.length();i++){
        a+=tolower(word[i]);
    }
    return a;
}

int main()
{
    string word;
    cout<<"Digite uma String: ";
    cin>>word;
    cout<<"A string toda minúscula é: "<< minuscula(word);
    
    return 0;
}