/* Escreva um programa que solicite ao usuário, digitar uma frase contendo no
 * máximo 60 caracteres. O programa deve processar a frase sem utilizar a
 * biblioteca cstring e exibir na saída as letras iniciais de cada palavra em
 * maiúsculas e as demais letras em minúsculas. Por exemplo, se o usuário
 * digitar a frase "Todo homem morre, mas nem todo homem vive.", o programa deve
 * exibir a frase resultante como "Todo Homem Morre, Mas Nem Todo Homem Vive."
 */

#include <cstring>
#include <iostream>

using namespace std;

int caracter(char caracter)
{
    if (caracter == 32)
    {
        return 0; // Valur para espaco
    }

    if (caracter > 96 && caracter < 123)
    {
        return 1; // Valur para minusculas
    }

    if (caracter > 64 && caracter < 91)
    {
        return 2; // Valur para maiusculas
    }

    // Retorno necessario caso nao seja atingido nenhum retorno anterior
    return 3;
}

int main()
{
    char string[50] = {};

    cin.getline(string, 50);

    for (int i = 0, j = 1; i < strlen(string); i++, j++)
    {
        // Caso especifico para o primeiro caracter
        if (caracter(string[0]) == 1 && i == 0)
        {
            string[0] = string[0] - 32;
        }

        // Caso onde um caracter espaco eh seguido por uma minuscula
        if (caracter(string[i]) == 0 && caracter(string[j]) == 1)
        {
            string[j] = string[j] - 32;
        }

        // Caso onde o primeiro caracter eh minusculo ou maiusculo,
        // e o segundoos caracter eh maiusculos
        if ((caracter(string[i]) == 1 || caracter(string[i]) == 2) &&
            caracter(string[j]) == 2)
        {
            string[j] = string[j] + 32;
        }
    }

    for (int i = 0; i < strlen(string); i++)
    {
        cout << string[i];
    }

    return 0;
}