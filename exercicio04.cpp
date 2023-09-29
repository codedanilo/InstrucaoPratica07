/*
Escreva um programa em C++ que imprima todos os números primos de 1 a 100.*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
    
using namespace std;
    
int main(int argc, char *argv[])
{
  int numero;
  bool primo = true;
     
  // vamos solicitar um número inteiro positivo
  cout << "Informe um número inteiro positivo: ";
  cin >> numero;
     
  // o número é negativo?
  if(numero < 0){
    cout << "Número inválido.\n\n";
  }
  // é 0 ou 1?
  else if((numero == 0) || (numero == 1)){
    cout << "Número válido, mas não é primo.\n\n";
  }
  // passou até aqui. Vamos testar se o número é primo
  else{
    for (int i = 2; i <= (numero / 2); i++){
      // se passar no teste, não é primo
      if (numero % i == 0) {
        primo = false;
        break;
      }
    }
       
    if(primo){
      cout << "O número informado é primo\n\n";
    }
    else{
      cout << "O número informado não é primo\n\n";
    }
  }
        
  system("PAUSE"); // pausa o programa
  return EXIT_SUCCESS;
}