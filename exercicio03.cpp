/*
Escreva um programa em C++ que leia um número inteiro e imprima todos os divisores
desse número.*/

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Digite um número inteiro: ";
    cin >> num;

    cout << "Os divisores de " << num << " são:" << endl;

    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
