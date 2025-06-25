/* Escreva um programa que:
 *
 * 1. Atribui o valor 57 a uma variável n do tipo inteiro
 * 2. Imprime n, o quadrado de n e o cubo de n
 */

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int inteiro = 57;

    cout << inteiro << endl;
    cout << pow(inteiro, 2) << endl;
    cout << pow(inteiro, 3) << endl;

    return 0;
}
