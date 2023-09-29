/*
Desenvolva um programa que receba a matrícula (apenas números) e 3 notas de um
grupo de alunos. A cada aluno cadastrado o programa deve perguntar se deseja prosseguir com outro. 
Em seguida, calcule a média de cada aluno e imprima os dados
da seguinte forma:

MATRICULA NOTA1 NOTA2 NOTA3 MEDIA
===========================================
123456789 10.0   8.0  9.9   8.5

MATRICULA NOTA1 NOTA2 NOTA3 MEDIA
===========================================
123456789 10.0  8.0   9.9   8.5

MATRICULA NOTA1 NOTA2 NOTA3 MEDIA
===========================================
123456789 10.0  8.0   9.9   8.5

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    std::vector<std::string> matriculas;
    std::vector<double> notas1;
    std::vector<double> notas2;
    std::vector<double> notas3;

    char prosseguir;

    do {
        string matricula;
        double nota1, nota2, nota3;

        cout << "Digite a matrícula do aluno (apenas números): ";
        cin >> matricula;

        cout << "Digite a primeira nota do aluno: ";
        cin >> nota1;

        cout << "Digite a segunda nota do aluno: ";
        cin >> nota2;

        cout << "Digite a terceira nota do aluno: ";
        cin >> nota3;

        matriculas.push_back(matricula);
        notas1.push_back(nota1);
        notas2.push_back(nota2);
        notas3.push_back(nota3);

        cout << "Deseja cadastrar outro aluno? (S/N): ";
        cin >> prosseguir;
    } while (prosseguir == 'S' || prosseguir == 's');

    // Imprime os dados dos alunos e calcula a média
    cout << "\nDados dos alunos e média:" << endl;

    for (size_t i = 0; i < matriculas.size(); ++i) {
        double media = (notas1[i] + notas2[i] + notas3[i]) / 3.0;
        cout << "Matrícula: \t" << matriculas[i] << endl;
        cout << "Nota 1: \t" << notas1[i] << endl;
        cout << "Nota 2: \t" << notas2[i] << endl;
        cout << "Nota 3: \t" << notas3[i] << endl;
        cout << "Média: \t" << media << endl;
        cout << endl;
    }

    return 0;
}
