/*

Você está desenvolvendo uma ferramenta de análise de dados para um pesquisador. Ele precisa de um programa que analise
uma lista de números, mas está interessado apenas nos valores armazenados em posições de índice par (incluindo o índice
zero). Sua tarefa é criar um programa que, dada uma lista de números, imprima apenas aqueles que estão em posições pares
da lista.

Escreva um programa que leia um número inteiro positivo N, seguido de N números, armazene-os em um vetor e exiba apenas
os elementos cujos índices são pares, separados por espaços.

*/

#include <iostream>

using namespace std;

int main() {
    int numeros{};

    cin >> numeros;

    int lista[numeros]{};

    for (int i = 0; i < numeros; i++) {
        cin >> lista[i];
    }

    for (int j = 0; j < numeros; j++) {
        if (j % 2 == 0) {
            cout << lista[j];

            if (j < numeros - 1) {
                cout << " ";
            }
        }
    }

    return 0;
}
