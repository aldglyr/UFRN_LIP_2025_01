/* Você foi designado para desenvolver uma ferramenta que analisa a popularidade
 * de certos itens em uma pesquisa. A tarefa é identificar qual item foi 
 * selecionado mais vezes. Se dois itens forem selecionados o mesmo número de 
 * vezes, a preferência é sempre pelo menor valor numérico. Seu programa deve 
 * ler uma lista de respostas e determinar qual valor apareceu mais vezes.
 * 
 * Escreva um programa que leia um número inteiro n ≤ 30 e, em seguida, os n 
 * elementos de um vetor. O programa deve exibir o valor que aparece com mais 
 * frequência. Se houver dois ou mais valores com a mesma frequência, exiba o 
 * menor deles.
 */

#include <iostream>

using namespace std;

int main() {
    int numero{};
    int maior_indice = 0;
    int menor_numero{};
    int indice{};

    cin >> numero;

    int lista[numero]{};
    int repeticoes[numero]{};

    for (int i = 0; i < numero; i++) {
        cin >> lista[i];
    }

    menor_numero = lista[0];

    for (int i = 0; i < numero; i++) {
        for (int j = i; j < numero; j++) {
            if (lista[i] == lista[j]) {
                repeticoes[j]++;
            }
        }
    }

    for (int i = 0; i < numero; i++) {
        if (maior_indice < repeticoes[i]) {
            maior_indice = repeticoes[i];
            indice = i;
        }

        if (lista[i] < menor_numero) {
            menor_numero = lista[i];
        }
    }

    if (maior_indice == 1) {
        cout << menor_numero;
    } else {
        cout << lista[indice];
    }

    return 0;
}
