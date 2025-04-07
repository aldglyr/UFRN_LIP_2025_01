/*
 *   Você é um cientista meteorológico encarregado de analisar a variação de temperatura entre duas cidades vizinhas. As temperaturas dessas cidades são registradas como números inteiros. Sua tarefa é escrever um programa que mostre todos os valores de temperatura que podem ser encontrados entre essas duas cidades, inclusive as extremidades.
 *
 *   Dado dois números inteiros a e b que representam as temperaturas mínimas e máximas registradas nas cidades, o programa deve exibir todos os valores de temperatura entre esses dois números (inclusive os próprios números). Se o valor de a for maior que o de b, o programa ainda deverá funcionar corretamente, exibindo os valores em ordem decrescente.
 *
 *   Requisitos:
 *
 *   1. O usuário deve inserir dois números inteiros a e b.
 *
 *   2. O programa deve imprimir todos os números entre a e b, inclusive os próprios números.
 *
 *   3. O programa deve lidar corretamente com entradas em que a é maior ou menor que b.
 */

#include <iostream>

using namespace std;

int main() {
    int numero1 = {};
    int numero2 = {};
    
    cin >> numero1;
    cin >> numero2;

    if(numero1 <= numero2) {
        for(int i = numero1; i <= numero2; i++) {
            cout << i << " ";
        }
    }else {
        for(int i = numero1; i >= numero2; i--) {
            cout << i << " ";
        }
    }

    return 0;
}