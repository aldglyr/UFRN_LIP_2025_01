/*

Você é um professor e precisa de um programa para registrar e exibir as notas de
seus alunos, além de calcular a média da turma. O programa deve começar lendo o 
número de alunos na sala, em seguida, utilizar um laço para solicitar e imprimir
as notas de cada aluno, uma por vez. No final, o programa deve calcular a média 
aritmética das notas e exibi-la com duas casas decimais de precisão.

Requisitos:

1. O programa deve ler um número inteiro n representando a quantidade de alunos 
   na sala.

2. O programa deve solicitar a nota de cada aluno, imprimindo-a logo em seguida,
   utilizando um laço while.

3. O programa deve calcular e exibir a média aritmética das notas com duas casas
   decimais de aproximação.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int alunos = {};
    float nota = {};
    float soma = {};

    int i = 1;

    cin >> alunos;

    while(i <= alunos){
        cout << "Nota do aluno " << i << ": ";
        cin >> nota;

        cout << fixed << setprecision(2) << nota;
        cout << endl;

        soma += nota;
        i++;
    }

    cout << "A média aritmética da turma é: " << soma/alunos << endl;

    return 0;
}