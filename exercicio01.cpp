/*
Escreva um programa em C++ que imprima na tela os números de 1 a 100. Porém,
para múltiplos de 3, o programa deve imprimir "Fizz", e para múltiplos de 5, deve
imprimir "Buzz". Para números que são múltiplos de ambos, imprimir "FizzBuzz".
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}
