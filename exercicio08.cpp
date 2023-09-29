/*
Escreva um programa em c++ que imprima os seguintes padrões de acordo com a entrada,
que define a altura do padrão. Para os exemplos abaixo a entrada foi 4:


a. * * * *    b. *         c.  * * * *   
   * * * *       * *           *     *
   * * * *       * * *         *     *
   * * * *       * * * *       * * * *
*/

#include <iostream>

using namespace std;

int main() {
    int altura;

    // Solicita ao usuário que digite a altura do padrão
    cout << "Digite a altura do padrão: ";
    cin >> altura;

    // a
    cout << "Padrão (a):\n";
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // b
    cout << "\nPadrão (b):\n";
    for (int i = 1; i <= altura; i++) {
        cout << "*\n";
    }

    // c
    cout << "\nPadrão (c):\n";
    for (int i = 1; i <= altura; i++) {
        // Imprime espaços à esquerda
        for (int j = 1; j <= altura - i; j++) {
            cout << " ";
        }
        // Imprime os asteriscos
        for (int j = 1; j <= i * 2 - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
