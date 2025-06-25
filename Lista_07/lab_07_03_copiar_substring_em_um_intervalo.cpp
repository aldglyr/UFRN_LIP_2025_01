/* Implemente um programa que leia dois números inteiros p e q, além de uma
 * string s1 possivelmente contendo espaços em branco. O seu programa deve
 * formar a string s2 composta por todos os caracteres de s1 que estão no
 * intervalo [p, q] (considere que q será sempre maior ou igual a p).
 *
 * Importante: após utilizar o comando cin em um programa, o programa deve
 * executar o comando cin.ignore() para que o cin.getline funcione corretamente.
 *
 * As strings do programa têm no máximo 49 caracteres.
 */

#include <iostream>
// #include <cstring>

using namespace std;

int main()
{
    int  numero_1    = {};
    int  numero_2    = {};
    int  aux         = {};
    char texto_1[50] = {};
    char texto_2[50] = {};

    cin >> numero_1 >> numero_2;
    cin.ignore();
    cin.getline(texto_1, 50);

    for (int i = numero_1; i <= numero_2; i++)
    {
        texto_2[aux] = texto_1[i];
        aux++;
    }

    aux = 0;

    while (texto_2[aux] != '\0')
    {
        cout << texto_2[aux];
        aux++;
    }

    return 0;
}
