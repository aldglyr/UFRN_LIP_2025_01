/*

Um cientista de dados está trabalhando com uma matriz que representa características de diferentes amostras em um
experimento. Cada linha representa uma amostra, e cada coluna representa uma característica específica medida para essas
amostras. Para uma análise específica, ele precisa da matriz transposta, onde cada coluna representa uma amostra e cada
linha representa uma característica. Dessa forma, ele pode organizar os dados para processar as amostras individualmente
por característica.

Escreva um programa que recebe o número de linhas l e colunas c, onde l, c < 30, de uma matriz A e cria uma matriz B,
que é a matriz transposta de A. O seu programa deve imprimir a matriz B.

*/

#include <iostream>

using namespace std;

int main() {
    int linha{};
    int coluna{};

    cin >> linha >> coluna;

    int matriz_a[linha][coluna]{};
    int matriz_b[coluna][linha]{};

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cin >> matriz_a[i][j];
        }
    }

    for (int i = 0; i < coluna; i++) {
        for (int j = 0; j < linha; j++) {
            matriz_b[i][j] = matriz_a[j][i];
        }
    }

    cout << "Transposta" << endl;

    for (int i = 0; i < coluna; i++) {
        for (int j = 0; j < linha; j++) {
            cout << matriz_b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
