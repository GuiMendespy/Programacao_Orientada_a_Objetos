#include <iostream>
#include <cmath>

using std::cin, std::cout, std::endl;

int primo(int num) {
    if (num <= 1) return 0; 
    if (num == 2 || num == 3) return 1; 
    if (num % 2 == 0 || num % 3 == 0) return 0;

    for (int i = 5; i <= std::sqrt(num); i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int verificaNumeroPrimo(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        if (primo(arr[i])) {
            return 1;
        }
    }
    return 0; 
}

int main() {
    int tam;
    cout << "Digite a quantidade de números: ";
    cin >> tam;

    int arr[tam]; 
    for (int i = 0; i < tam; ++i) {
        cout << "Número " << (i + 1) << ": ";
        cin >> arr[i];
    }

    if (verificaNumeroPrimo(arr, tam)) {
        cout << "Esse array tem número primo!" << endl;
    } else {
        cout << "Esse array não tem número primo!" << endl;
    }

    return 0;
}