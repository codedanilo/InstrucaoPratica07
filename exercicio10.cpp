/*
Escreva um programa em C++ que leia um número inteiro e imprima a sequência de
Fibonacci (Referência abaixo) até o número fornecido pelo usuário.*/

#include <iostream>

using namespace std;

int main() {
    int n;

    // Solicita ao usuário que digite um número inteiro maior que 0
    cout << "Digite um número inteiro maior que 0: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor, digite um número inteiro maior que 0." << endl;
        return 1;
    }

    int primeiro = 1, segundo = 1, proximo;

    cout << "Sequência de Fibonacci até " << n << " (excluindo o zero):\n";

    // Imprime o número 1 (primeiro termo da sequência)
    cout << primeiro << " ";

    // Calcula e imprime os próximos números da sequência de Fibonacci
    while (segundo <= n) {
        cout << segundo << " ";
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    cout << endl;

    return 0;
}
