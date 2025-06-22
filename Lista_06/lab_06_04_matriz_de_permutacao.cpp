/* Uma matriz quadrada é chamada matriz de permutaç̧ão se seus elementos são 
 * apenas 0’s e 1’s e se em cada linha e coluna da matriz existe um único valor 
 * 1. Escreva um programa que verifica se uma dada matriz quadrada é de 
 * permutação ou não.
 * 
 * A primeira linha da entrada deve ser um único valor inteiro N com o tamanho 
 * da matriz quadrada. Em seguida, as N linhas seguintes conterão N valores 
 * inteiros, correspondentes aos valores da matriz. Seu programa deve enviar 
 * para a saída padrão 0, se a matriz não for matriz de permutação, ou 1, se 
 * for.
 * 
 * Obs: N será sempre menor ou igual a 20.
 */

#include <iostream>

using namespace std;

int main() {
    int tamanho{};
    bool eh_permutacao = true;
    int soma = 0;
    cin >> tamanho;

    int matriz[tamanho][tamanho]{};

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < tamanho; i++) {
        soma = 0;
        for (int j = 0; j < tamanho; j++) {
            soma += matriz[i][j];
        }
        if (soma != 1) {
            eh_permutacao = false;
        }
    }

    if (eh_permutacao) {
        cout << "1";
    } else {
        cout << "0";
    }

    return 0;
}
