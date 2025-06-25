/* Você está trabalhando em um sistema que realiza cálculos sobre intervalos
 * numéricos. Sua tarefa é criar um programa em C++ que receba dois números
 * inteiros x e y e calcule a soma de todos os números inteiros no intervalo
 * fechado [x,y]. O programa deve utilizar uma função que realiza esse cálculo e
 * retorna a soma.
 *
 * Requisitos:
 *
 * - O programa deve conter uma função que receba dois inteiros, x e y, e
 *   retorne a soma de todos os inteiros no intervalo [x,y].
 * - O programa principal deve ler os dois inteiros fornecidos pelo usuário e
 *   exibir o resultado da soma.
 */

#include <iostream>

using namespace std;

int Soma(int &numero1, int &numero2)
{
    int soma {};

    for (int i = numero1; i <= numero2; i++)
    {
        soma += i;
    }

    return soma;
}

int main()
{
    int numero1 = {};
    int numero2 = {};

    cin >> numero1 >> numero2;

    cout << Soma(numero1, numero2) << endl;

    return 0;
}
