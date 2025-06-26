/* Implemente uma função que receba duas matrizes de números inteiros de mesmo
 * tamanho m x n. A função deve armazenar a subtração matricial em uma matriz
 * que é parâmetro de saída. A função main deve ler do usuário as dimensões das
 * matrizes, cada um dos seus elementos e exibir o resultado computado pela
 * função. Além disso, a função main deve exibir uma mensagem informando
 * quantos elementos não nulos existem na parte triangular inferior da matriz
 * (elementos com índice da linha maior do que o índice da coluna).
 */

#include <iostream>

#define MAX_COLUNAS 20

using namespace std;

void ler_matriz(int matriz[][MAX_COLUNAS], int linha, int coluna)
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cin >> matriz[i][j];
        }
    }
}

void subtrai_matrizes(int matriz_a[][MAX_COLUNAS], int matriz_b[][MAX_COLUNAS],
                      int matriz_c[][MAX_COLUNAS], int linha, int coluna)
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            matriz_c[i][j] = matriz_a[i][j] - matriz_b[i][j];
        }
    }
}

void exibe_matriz(int matriz[][MAX_COLUNAS], int linha, int coluna)
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int elementos_nao_nulos(int matriz[][MAX_COLUNAS], int linha, int coluna)
{
    int nao_nulos = {};
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (i > j && matriz[i][j] != 0)
            {
                nao_nulos++;
            }
        }
    }
    return nao_nulos;
}

int main()
{
    int linhas  = {};
    int colunas = {};

    cin >> linhas >> colunas;

    int matriz_1[linhas][MAX_COLUNAS] = {};
    int matriz_2[linhas][MAX_COLUNAS] = {};
    int matriz_3[linhas][MAX_COLUNAS] = {};

    ler_matriz(matriz_1, linhas, colunas);
    ler_matriz(matriz_2, linhas, colunas);
    subtrai_matrizes(matriz_1, matriz_2, matriz_3, linhas, colunas);
    cout << "Resultado:\n";
    exibe_matriz(matriz_3, linhas, colunas);
    cout << "Elementos não-nulos na região: "
         << elementos_nao_nulos(matriz_3, linhas, colunas);

    return 0;
}