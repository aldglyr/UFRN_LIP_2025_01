/* Você está desenvolvendo um sistema que compara valores inteiros de sensores 
 * em um experimento. A cada rodada, três valores inteiros são coletados e você 
 * precisa determinar qual deles é o maior. Para simplificar essa tarefa, crie 
 * um programa em C++ que receba três números inteiros e, utilizando uma função,
 * retorne o maior dos três.
 * 
 * Requisitos:
 * 
 * - O programa deve conter uma função que receba três números inteiros como 
 *   parâmetros.
 * - A função deve retornar o maior dos três números.
 * - O programa principal deve ler os três números do usuário e chamar a função 
 *   para determinar o maior valor.
 */

#include <iostream>

using namespace std;

int Maior(int &numero1, int &numero2, int &numero3) {
    if (numero1 > numero2 && numero1 > numero3) {
        return numero1;
    }

    if (numero2 > numero1 && numero2 > numero3) {
        return numero2;
    }

    if (numero3 > numero1 && numero3 > numero2) {
        return numero3;
    }
}

int main() {
    int numero1{};
    int numero2{};
    int numero3{};

    cin >> numero1 >> numero2 >> numero3;

    cout << "Maior número: " << Maior(numero1, numero2, numero3) << endl;

    return 0;
}
