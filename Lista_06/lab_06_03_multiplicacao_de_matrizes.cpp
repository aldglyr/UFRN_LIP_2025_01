/*

Escreva um programa para multiplicar duas matrizes A e B. A primeira linha da entrada de seu programa é constituída de
dois valores inteiros, La e Ca, correspondentes respectivamente ao número de linhas e número de colunas da matriz A. As
La linhas seguintes definem a matriz A, contendo, cada linha, Ca  valores inteiros. Em seguida, haverá uma linha
contendo dois valores inteiros, Lb e Cb, correspondentes respectivamente ao número de linhas e número de colunas da
matriz B. As Lb linhas seguintes definem a matriz B, contendo, cada linha, Cb valores inteiros.

A saída do seu programa deve ser a matriz La x Cb resultante da multiplicação de A e B.

Obs 1: Os valores de Ca e Lb serão sempre iguais.

Obs 2: As dimensões das matrizes serão sempre menores ou igual a 20. 

*/

#include <iostream>

using namespace std;

int main() {
    int linha_a{};
    int coluna_a{};

    int linha_b{};
    int coluna_b{};

    // Definicao e entrada de dados da matriz a
    cin >> linha_a >> coluna_a;
    int matriz_a[linha_a][coluna_a];

    for (int i = 0; i < linha_a; i++) {
        for (int j = 0; j < coluna_a; j++) {
            cin >> matriz_a[i][j];
        }
    }

    // Definicao e entrada de dados da matriz b
    cin >> linha_b >> coluna_b;
    int matriz_b[linha_b][coluna_b]{};

    for (int i = 0; i < linha_b; i++) {
        for (int j = 0; j < coluna_b; j++) {
            cin >> matriz_b[i][j];
        }
    }

    // Definicao e calculo da matriz c
    int linha_c = linha_a;
    int coluna_c = coluna_b;

    int matriz_c[linha_c][coluna_c]{};

    for (int i = 0; i < linha_c; i++) {
        for (int j = 0; j < coluna_c; j++) {
            for (int k = 0; k < linha_b; k++) {
                matriz_c[i][j] += matriz_a[i][k] * matriz_b[k][j];
            }
        }
    }

    for (int i = 0; i < linha_c; i++) {
        for (int j = 0; j < coluna_c; j++) {
            cout << matriz_c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
