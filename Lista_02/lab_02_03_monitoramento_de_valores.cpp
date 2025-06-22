/* Imagine que você está desenvolvendo um sistema que monitora os valores 
 * digitados por um usuário. Cada vez que o sistema recebe um número, ele deve 
 * informar que o valor foi recebido. No entanto, quando o número 10 for 
 * digitado, o sistema deve imprimir uma mensagem especial e encerrar.
 * 
 * Sua tarefa é criar um programa que peça continuamente ao usuário para inserir
 * um número. Para cada número diferente de 10, o programa deve imprimir Valor x
 * recebido, onde x é o número fornecido. Se o valor 10 for digitado, o programa
 * deve imprimir "Valor 10 recebido. Programa encerrado." e terminar sua 
 * execução.
 * 
 * Requisitos:
 * 
 * 1. O programa deve solicitar um número indefinidamente.
 * 
 * 2. Para cada número diferente de 10 o programa deve imprimir "Valor x 
 *    recebido".
 * 3. Quando o número 10 for digitado o programa deve imprimir "Valor 10 
 *    recebido. Programa encerrado." e encerrar.
 */

#include <iostream>

using namespace std;

int main() {
    int valor{};

    do {
        cin >> valor;

        if (valor != 10) {
            cout << "Valor " << valor << " recebido" << endl;
        }
    } while (valor != 10);

    cout << "Valor " << valor << " recebido. Programa encerrado." << endl;

    return 0;
}
