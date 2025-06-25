/* Imagine que você é um engenheiro de uma fábrica automatizada, onde o processo
 * de montagem de peças segue um padrão específico. A primeira peça que chega à
 * linha de montagem define o tamanho de todas as peças subsequentes. A cada
 * nova peça, o tamanho é dobrado em relação à anterior. Sua tarefa é criar um
 * sistema que, dado o tamanho da primeira peça, calcule o tamanho de todas as
 * seis peças que serão montadas em sequência.
 *
 * Escreva um programa que leia o tamanho da primeira peça e preencha um vetor
 * de seis posições onde o valor de cada posição subsequente seja o dobro do
 * anterior. Ao final, exiba o vetor com os tamanhos das seis peças.
 */

#include <iostream>

using namespace std;

int main()
{
    int pecas[5] = {};

    cin >> pecas[0];

    for (int i = 1; i < 5; i++)
    {
        pecas[i] = pecas[i - 1] * 2;
    }

    for (int j = 0; j <= 5; j++)
    {
        cout << pecas[j];
        if (j < 5)
        {
            cout << ",";
        }
    }

    return 0;
}
