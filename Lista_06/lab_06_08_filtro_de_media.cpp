/* Uma instituição de pesquisa está analisando uma matriz de dados coletados em
 * uma região para identificar pontos onde as medições estão acima da média.
 * Eles desejam criar uma matriz filtrada em que apenas os valores acima da
 * média sejam mantidos, enquanto os valores iguais ou menores que a média sejam
 * considerados insignificantes e sejam substituídos por zero. Isso permite que
 * eles se concentrem em áreas com medições excepcionais para análises mais
 * detalhadas.
 *
 * Sua missão é desenvolver um programa que leia uma matriz A, inteira, de ordem
 * m x n e que gere e exiba a matriz B composta pelos elementos da matriz A
 * maiores que a média aritmética dos elementos desta matriz. Os elementos
 * iguais ou menores que à média devem se tornar nulos na matriz B.
 */

#include <iostream>

using namespace std;

int main()
{
    int   linha  = {};
    int   coluna = {};
    int   soma   = {};
    float media  = {};

    cin >> linha >> coluna;

    int matriz_a[linha][coluna] = {};
    int matriz_b[linha][coluna] = {};

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cin >> matriz_a[i][j];
            soma += matriz_a[i][j];
        }
    }

    media = soma / (linha * coluna);

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (matriz_a[i][j] > media)
            {
                matriz_b[i][j] = matriz_a[i][j];
            }
            else
            {
                matriz_b[i][j] = 0;
            }
            cout << matriz_b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
