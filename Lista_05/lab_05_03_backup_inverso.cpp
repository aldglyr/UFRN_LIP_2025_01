/* Você foi contratado para criar um software que ajude na organização de 
 * arquivos em um sistema de backup. Durante o processo de recuperação de dados,
 * os arquivos são carregados em uma ordem inversa àquela em que foram 
 * armazenados, e sua tarefa é criar um programa que reordene essa sequência.
 * 
 * Escreva um programa que leia uma lista de oito arquivos na ordem em que foram
 * carregados (vetor N) e crie uma nova lista (vetor M) onde os arquivos 
 * apareçam na ordem inversa. No final, exiba o vetor M, que representa os 
 * arquivos reordenados.
 */

#include <iostream>

using namespace std;

int main() {
    int arquivos = 7;
    int arquivo_inverso = arquivos;
    int vetor_n[arquivos]{};
    int vetor_m[arquivos]{};

    for (int i = 0; i <= arquivos; i++) {
        cin >> vetor_n[i];
    }

    for (int j = 0; j <= arquivos; j++) {
        vetor_m[j] = vetor_n[arquivo_inverso];
        arquivo_inverso--;
    }

    for (int k = 0; k <= arquivos; k++) {
        cout << vetor_m[k];

        if (k < arquivos) {
            cout << ",";
        }
    }

    return 0;
}
