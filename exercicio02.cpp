/*
Escreva um programa em C++ que leia um número inteiro e verifique se ele é um
palíndromo. Um número é palíndromo se ele permanece o mesmo quando seus
dígitos são invertidos.*/

#include <iostream>
using namespace std;

int main() {
    int num, original, reverso = 0;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    original = num; // Armazena o número original para posterior comparação

    while (num > 0) {
        int digito = num % 10;
        reverso = reverso * 10 + digito;
        num /= 10;
    }

    if (original == reverso) {
        cout << "O numero " << original << " e um palindromo." << endl;
    } else {
        cout << "O numero " << original << " nao e um palindromo." << endl;
    }

    return 0;
}
