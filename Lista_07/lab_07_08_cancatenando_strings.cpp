/* Implemente um programa que solicite ao usuário que insira várias linhas de
 * texto, sendo que cada linha contém uma string. O programa deve concatenar
 * todas as strings inseridas em uma única string, preservando a ordem em que
 * foram digitadas. O programa deve parar de ler as linhas quando uma linha em
 * branco for inserida. Após a leitura, o programa deve exibir na tela a string
 * resultante da concatenação das strings inseridas.
 */

#include <cstring>
#include <iostream>

using namespace std;

void ExibeString(char string[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        cout << string[i];
    }
}

void AdicionaString(char string_1[], int tamanho_1, char string_2[],
                    int tamanho_2)
{
    for (int i = tamanho_1, j = 0; j < tamanho_2; i++, j++)
    {
        string_1[i] = string_2[j];
    }
}

int main()
{
    char string[50]  = {};
    char entrada[50] = {"a"};

    while (strlen(entrada) > 0)
    {
        cin.getline(entrada, 50);
        AdicionaString(string, strlen(string), entrada, strlen(entrada));
    }

    ExibeString(string, strlen(string));

    return 0;
}