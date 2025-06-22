/* Escreva um programa para somar duas matrizes A e B. A primeira linha da 
 * entrada de seu programa é constituída de dois valores inteiros, 
 * correspondentes respectivamente ao número de linhas L e número de colunas C 
 * das matrizes. As L linhas seguintes definem as linhas das matrizes A, 
 * contendo, cada uma C valores inteiros. Em seguida, haverá as L linhas da
 * matriz B, cada uma contendo também C valores inteiros. A saída do programa 
 * deve ser a matriz L x C resultante da soma de A e B.
 * 
 * Obs: L e C são menores ou igual a 20.
 */

#include <iostream>

using namespace std;

int main() {
    int linha{};
    int coluna{};

    cin >> linha >> coluna;

    int matriz_a[linha][coluna];
    int matriz_b[linha][coluna];
    int matriz_c[linha][coluna];

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cin >> matriz_a[i][j];
        }
    }

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cin >> matriz_b[i][j];
        }
    }

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];
        }
    }

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cout << matriz_c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
