/*

Você está desenvolvendo uma calculadora para ajudar alunos a somarem duas listas de números. Cada lista contém
exatamente dez números, e a soma é feita posição a posição. Sua tarefa é criar um programa que receba duas listas de
números (vetores A e B), some os números em posições correspondentes e armazene os resultados em uma terceira lista
(vetor C). Por fim, o programa deve exibir o vetor C, mostrando os resultados da soma de forma organizada.

*/

#include <iostream>

using namespace std;

int main() {
    int numeros = 9;
    int vetor_a[numeros]{};
    int vetor_b[numeros]{};
    int vetor_c[numeros]{};

    for (int i = 0; i <= numeros; i++) {
        cin >> vetor_a[i];
    }

    for (int j = 0; j <= numeros; j++) {
        cin >> vetor_b[j];
    }

    for (int k = 0; k <= numeros; k++) {
        vetor_c[k] = vetor_a[k] + vetor_b[k];
    }

    for (int m = 0; m <= numeros; m++) {
        cout << vetor_c[m];

        if (m < numeros) {
            cout << " ";
        }
    }

    return 0;
}
