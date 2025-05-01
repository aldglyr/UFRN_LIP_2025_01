/*

Imagine que você trabalha em um armazém que lida com o controle de ingredientes para uma 
fábrica de alimentos. O gerente do armazém quer saber quais ingredientes estão disponíveis
nas primeiras posições do estoque. Cada ingrediente é numerado com um identificador único,
que vai de 1 até um número especificado pelo gerente.

Sua tarefa é criar um programa que, dado um número n, mostre os identificadores dos 
primeiros n ingredientes no estoque. O programa deve ler um valor inteiro positivo n e, em
seguida, imprimir os identificadores dos primeiros n ingredientes, em ordem crescente.

Requisitos:

1. O usuário deve inserir um número inteiro positivo n.

2. O programa deve imprimir os números de 1 até n.

*/

#include <iostream>

using namespace std;

int main() {
    int numero = {};
    cin >> numero;

    for(int i = 1; i <= numero; i++) {
        cout << i << endl;
    }

    return 0;
}