/*
Escreva um programa em C++ que leia um número inteiro e verifique se ele é um
número armstrong. Um número armstrong (ou narcisista) é um número que é igual à
soma de seus próprios dígitos elevados à quantidade de dígitos. Por exemplo, 153 é
um número armstrong porque 1³ + 5³ + 3³ = 153.*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numero, original, resto, resultado = 0, n = 0;

    // Solicita ao usuário que digite um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> numero;

    original = numero;

    // Calcula o número de dígitos do número
    while (original != 0) {
        original /= 10;
        n++;
    }

    original = numero;

    // Verifica se o número é um número de Armstrong
    while (original != 0) {
        resto = original % 10;
        resultado += pow(resto, n);
        original /= 10;
    }

    if (resultado == numero) {
        cout << numero << " é um número de Armstrong." << endl;
    } else {
        cout << numero << " não é um número de Armstrong." << endl;
    }

    return 0;
}
