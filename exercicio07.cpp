/*
Escreva um programa em C++ que gere e imprima o seguinte padrão de caracteres
alfanuméricos, onde o número fornecido pelo usuário é a altura do padrão:
A
BC
DEF
GHIJ
KLMNO
*/

#include <iostream>

using namespace std;

int main() {
    int altura;

    // Solicita ao usuário que digite a altura do padrão
    cout << "Digite a altura do padrão: ";
    cin >> altura;

    char caractere = 'A'; // Caractere inicial 'A'

    // Laço para gerar e imprimir o padrão
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << caractere;
            caractere++; // Avança para o próximo caractere alfanumérico
        }
        cout << endl;
    }

    return 0;
}
