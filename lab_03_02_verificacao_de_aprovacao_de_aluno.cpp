/*

Você é um professor responsável por calcular a média final dos seus alunos. Para facilitar
esse processo, você deve criar um programa em C++ que receba três notas de um aluno e
utilize uma função para verificar se o aluno foi aprovado ou reprovado. A média mínima
para aprovação é 7.0.

Seu objetivo é implementar uma função que, ao receber as três notas, retorne true se o
aluno está aprovado (média maior ou igual a 7.0) ou false se ele está reprovado (média
abaixo de 7.0).

Requisitos:

- O programa deve conter uma função que receba três notas (números de ponto   flutuante)
  como parâmetros.

- A função deve calcular a média aritmética das três notas e retornar true se o aluno
  estiver aprovado (media ≥ 7) e false caso contrário.
- O programa principal deve ler as três notas do usuário e chamar a função para verificar
  a aprovação.

*/

#include <iostream>
using namespace std;

bool Media(float &m_nota1, float &m_nota2, float &m_nota3){

    if ((m_nota1 + m_nota2 + m_nota3) / 3.00 < 7.00){
        return false;
    }

    if ((m_nota1 + m_nota2 + m_nota3) / 3.00 >= 7.00){
        return true;
    }
}

int main()
{
    float nota1 = {};
    float nota2 = {};
    float nota3 = {};
    cin >> nota1 >> nota2 >> nota3;

    if (Media(nota1, nota2, nota3)){
        cout << "Aprovado" << endl;
    }

    if (!Media(nota1, nota2, nota3)){
        cout << "Reprovado" << endl;
    }

    return 0;
}