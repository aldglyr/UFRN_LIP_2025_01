/* Imagine que você está desenvolvendo um sistema que precisa controlar a troca 
 * de valores de três variáveis, "a", "b" e "c", em resposta a "n" comandos 
 * dados por um usuário. Cada comando indica qual troca deve ser feita entre 
 * essas variáveis.
 * 
 * Este tipo de sistema pode ser útil em cenários como algoritmos de 
 * embaralhamento, manipulação de dados em estruturas de memória ou simplesmente
 * para aprender sobre o conceito de troca de valores entre variáveis.
 * 
 * Você tem três variáveis, "a", "b" e "c", com valores inteiros iniciais, e uma
 * série de n comandos que indicam as trocas que devem ocorrer. Os comandos 
 * podem ser:
 * 
 * 1. Trocar os valores de "a" e "b".
 * 2. Trocar os valores de "a" e "c".
 * 3. Trocar os valores de "b" e "c".
 * 
 * Com base nesses comandos, o programa deve ler os valores iniciais de "a", "b"
 * e "c" e a quantidade de torcas "n" a serem relizadas. Em seguida deve ler "n"
 * comandos de trocas, processá-los e, ao final, exibir os valores resultantes 
 * de "a", "b" e "c".
 * 
 * Você deve obrigatoriamente implementar uma função para realizar a troca de 
 * valores de dois parâmetros recebidos como referência, conforme definição 
 * abaixo:
 * 
 * void trocar(int &x, int &y);
 */

#include <iostream>

using namespace std;

void Trocar(int &valor1, int &valor2) {
    int temporario{};
    temporario = valor1;
    valor1 = valor2;
    valor2 = temporario;
}

int main() {
    int quantidade = 3;
    int valores[quantidade];
    int trocas{};
    int comando{};

    for (int i = 0; i < quantidade; i++) {
        cin >> valores[i];
    }

    cin >> trocas;

    for (int i = 1; i <= trocas; i++) {
        cin >> comando;

        if (comando == 1) {
            Trocar(valores[0], valores[1]);
        }

        if (comando == 2) {
            Trocar(valores[0], valores[2]);
        }

        if (comando == 3) {
            Trocar(valores[1], valores[2]);
        }
    }

    for (int j = 0; j < quantidade; j++) {
        cout << valores[j] << " ";
    }

    return 0;
}
