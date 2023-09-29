/*
Escreva um programa em C++ que simule um jogo de adivinhação. O programa deve
gerar um número aleatório entre 1 e 100, e o usuário deve tentar adivinhar esse
número. O jogo deve informar se o palpite está alto, baixo ou correto, e continuar até
que o usuário acerte o número.
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
 
int main ()
{
      srand((unsigned)time(0)); //para gerar números aleatórios reais.
      int escolhido, recaleatorio;
      int maior = 100;
      int menor = 0;
      
      int aleatorio = rand()%(maior-menor+1) + menor;

      cout << "Numero Aleatorio = " << aleatorio << endl;
      
      cout << "Escolha o numero: ";
      cin >> escolhido;

      recaleatorio = aleatorio;

      if (escolhido == recaleatorio){
        cout << "Voce acertou!" << endl;
        //cout << "Numero Aleatorio = " << recaleatorio << endl;
      }
      while (escolhido != recaleatorio){
        cout << "continue tentando! Escolha outro numero: ";
        cin >> escolhido;
      }
      {

        cout << "Voce acertou! Numero escolhido: " << escolhido << endl;
      }
            
        cout << "Numero Aleatorio = " << aleatorio << endl;

          
        //cout << "Numero Aleatorio = " << aleatorio << endl;
        //cout << "Numero Aleatorio = " << aleatorio << endl;

      return 0;
}
