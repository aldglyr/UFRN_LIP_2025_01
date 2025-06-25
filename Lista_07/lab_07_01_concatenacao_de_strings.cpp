/* Implemente um programa que leia duas strings sem espaços em branco do
 * usuário, s1 e s2. O seu programa deve computar e exibir a concatenação da
 * string s1 com astring s2, ou seja, a string s2 deve ser acrescentada ao final
 * da string s1.
 *
 * A única função da biblioteca <cstring> que você pode utilizar é a função
 * strlen.
 *
 * As strings do programa têm no máximo 49 caracteres.
 */

#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char string_1[50] = {};
    char string_2[50] = {};

    cin >> string_1 >> string_2;

    cout << string_1 << string_2;

    return 0;
}
