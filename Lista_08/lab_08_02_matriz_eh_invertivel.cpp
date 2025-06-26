/* Escreva um programa que leia na função principal uma matriz real 2x2 e que
 * utilize uma função ​para verificar se a matriz é ou não invertível. A
 * função deve retornar true se a matriz for invertível e false caso contrário.
 * A mensagem “Invertível” ou “Não invertível” deve ser emitida na função
 * principal de acordo com o retorno da função implementada. Dica: uma matriz é
 * invertível se seu determinante for diferente de zero.
 */

#include <iostream>

using namespace std;

void LerMatriz(int matriz[2][2], int linha, int coluna)
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cin >> matriz[i][j];
        }
    }
}

bool EhInvertivel(int matriz[2][2], int linha, int coluna)
{
    int determinante = {};
    determinante = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    if (determinante != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int matriz[2][2] = {};

    LerMatriz(matriz, 2, 2);

    if (EhInvertivel(matriz, 2, 2))
    {
        cout << "É invertível";
    }
    else
    {
        cout << "Não é invertível";
    }

    return 0;
}