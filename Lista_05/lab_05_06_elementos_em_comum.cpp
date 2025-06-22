/* Você foi contratado para desenvolver uma ferramenta de análise de dados que 
 * compara listas de números para encontrar elementos em comum. Sua tarefa é 
 * criar um programa que compare dois conjuntos de números e exiba os elementos 
 * que aparecem em ambos. Se não houver elementos em comum, o programa deverá 
 * exibir a mensagem "Nenhum".
 * 
 * Escreva um programa que leia dois vetores de números inteiros, compare-os e 
 * exiba os elementos em comum. Se não houver nenhum elemento comum, exiba 
 * "Nenhum".
 */

#include <iostream>

using namespace std;

int main() {
    int numeros_a{};
    int numeros_b{};
    int iguais = 0;

    cin >> numeros_a;

    int vetor_a[numeros_a]{};

    for (int i = 0; i < numeros_a; i++) {
        cin >> vetor_a[i];
    }

    cin >> numeros_b;

    int vetor_b[numeros_b]{};

    for (int i = 0; i < numeros_b; i++) {
        cin >> vetor_b[i];
    }

    for (int i = 0; i < numeros_a; i++) {
        for (int j = 0; j < numeros_b; j++) {
            if (vetor_a[i] == vetor_b[j]) {
                cout << vetor_a[i] << " ";
                iguais++;
            }
        }
    }

    if (iguais == 0) {
        cout << "Nenhum";
    }

    return 0;
}
