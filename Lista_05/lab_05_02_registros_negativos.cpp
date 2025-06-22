/* Você foi encarregado de gerenciar um sistema de controle de estoque de uma 
 * pequena loja. Às vezes, erros acontecem durante a entrada de dados, e alguns 
 * produtos são registrados com quantidade nula ou até negativa, o que não faz 
 * sentido para o estoque. Sua tarefa é ajustar o sistema para substituir 
 * qualquer valor de estoque que esteja zerado ou negativo por um valor mínimo 
 * de 1, garantindo que os registros fiquem corretos.
 * 
 * Escreva um programa que leia as quantidades de estoque de seis produtos e, se
 * encontrar valores nulos ou negativos, substitua-os por 1. Após isso, exiba o 
 * vetor atualizado com as quantidades de estoque.
 */

#include <iostream>

using namespace std;

int main() {
    int estoque[5]{};
    int entrada{};

    for (int i = 0; i <= 5; i++) {
        cin >> entrada;

        if (entrada <= 0) {
            estoque[i] = 1;
        } else {
            estoque[i] = entrada;
        }
    }

    for (int j = 0; j <= 5; j++) {
        cout << estoque[j];
        if (j < 5) {
            cout << ",";
        }
    }

    return 0;
}
