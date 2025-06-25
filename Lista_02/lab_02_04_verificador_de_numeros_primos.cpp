/* Você foi encarregado de desenvolver um programa que ajude a identificar
 * números primos para um projeto de criptografia. Um número primo é um número
 * maior que 1 que só pode ser dividido por 1 e por ele mesmo. Sua tarefa é
 * criar um programa que, dado um número inteiro positivo, verifique se ele é
 * primo ou não.
 *
 * O programa deve ler um número inteiro e determinar se ele é primo. Se o
 * número for primo, o programa deverá exibir O número x é primo, onde x é o
 * número fornecido. Caso contrário, ele deve exibir O número x não é primo.
 *
 * Requisitos:
 *
 * 1. O programa deve solicitar que o usuário insira um número inteiro.
 * 2. O programa deve verificar se o número é primo.
 * 3. Exibir a mensagem correspondente dependendo se o número é primo ou não.
 */

#include <iostream>

using namespace std;

bool EhPrimo(int numero)
{
    bool primo = true;

    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            primo = false;
        }
    }

    if (numero == 1)
    {
        primo = false;
    }

    return primo;
}

int main()
{
    int numero = {};

    cin >> numero;

    if (EhPrimo(numero))
    {
        cout << "O número " << numero << " é primo" << endl;
    }
    else
    {
        cout << "O número " << numero << " não é primo" << endl;
    }

    return 0;
}
