/* Escreva um programa que lê um inteiro n que representa uma quantidade de
 * segundos.
 *
 * Seu programa deve imprimir quantas horas, minutos e segundos há no valor da
 * variável n lida.
 *
 * Imprima a saída no formato hh:mm:ss.
 *
 * Dica: use o comando abaixo para imprimir inteiros sempre com dois algarismos.
 *
 * cout << setfill('0') << setw(2) << variavel;
 *
 * O comando acima exige a inclusão da biblioteca iomanip.
 *
 * #include<iomanip>
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int valor = {};

    cin >> valor;

    cout << setfill('0') << setw(2) << valor / (60 * 60) << ":";

    valor = valor % (60 * 60);
    cout << setfill('0') << setw(2) << valor / 60 << ":";

    valor = valor % 60;
    cout << setfill('0') << setw(2) << valor;

    return 0;
}
