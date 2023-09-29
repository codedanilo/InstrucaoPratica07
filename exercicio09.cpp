/*
Escreva um programa em C++ que leia um número inteiro e determine se ele é um
número perfeito. Um número perfeito é aquele cuja soma dos seus divisores,
excluindo ele mesmo, é igual ao próprio número.
*/

#include <iostream>

using namespace std;

int main() {
    int num;
    
    // Solicita ao usuário que digite um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> num;

    int somaDiv = 0;

    // Encontra os divisores do número e calcula a soma
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            somaDiv += i;
        }
    }

    // Verifica se o número é perfeito
    if (somaDiv == num) {
        cout << num << " é um número perfeito." << endl;
    } else {
        cout << num << " não é um número perfeito." << endl;
    }

    return 0;
}
