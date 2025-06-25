/* Implemente uma função que receba como parâmetro uma string. A função deve
 * retornar a quantidade de palavras contidas na string. Considere como palavra
 * uma sequência de caracteres que antecede um espaço em branco.
 *
 * A função main deve ler uma string possivelmente contendo espaços em branco e
 * exibir o resultado da função com o texto "String contem N palavra(s)".
 *
 * Como exemplo, a string "isto  e   uma string" (que contém 2 espaços em branco
 * entre "isto" e " e", 3 entre "e" e "uma" e 1 entre "uma" e "string") contém 4
 * palavras.
 *
 * Considere que não exstirão espaços em branco no início e nem no fim da
 * string. A string de entrada contém no máximo 49 caracteres.
 */

#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char string[50] = {};
    int  palavras   = {};

    cin.getline(string, 50);

    for (int i = 0, j = 1; i <= strlen(string); i++, j++)
    {
        if (string[i] > 32 && (string[j] == 32 || string[j] == '\0'))
        { // 32 é o valor do caracter espaço em ASCII
            palavras++;
        }
    }

    cout << "String contem " << palavras << " palavra(s)";
}