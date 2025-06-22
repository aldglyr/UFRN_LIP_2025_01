/* O Triângulo de Pascal é um triângulo aritmético infinito onde são dispostos 
 * os coeficientes das expansões binomiais. Os números que compõem o triângulo 
 * apresentam diversas propriedades e relações. Um dessas propriedades é a 
 * chamada relação de Stifel, em que se pode afirmar que um número de uma 
 * determinada linha n corresponde à soma do elemento de mesma do posição da 
 * linha n-1 com o elemento da posição anterior também da linha n-1. Com base 
 * nessa relação, construa um programa que receba com entrada um número inteiro,
 * representando o número de linhas do triângulo e, em seguida, exiba o 
 * triângulo de pascal até a linha informada. Lembre-se que o primeiro elemento 
 * de qualquer linha sempre é 1 e que uma linha n, possui sempre n elementos.
 * 
 * ENTRADA:
 * 
 * Um número inteiro k que representa o número de linhas do triângulo que serão 
 * exibidas.
 * 
 * SAÍDA:
 * 
 * O triângulo de Pascal até a linha k.
 */

#include <iostream>

using namespace std;

int main() {
    int numero{};

    cin >> numero;
    int vetor[numero][numero]{};

    for (int i = 0; i < numero; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                vetor[i][j] = 1;
            } else {
                vetor[i][j] = vetor[i - 1][j - 1] + vetor[i - 1][j];
            }

            cout << vetor[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
