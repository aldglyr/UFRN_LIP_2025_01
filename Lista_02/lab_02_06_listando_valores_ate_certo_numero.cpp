/*

Você está trabalhando em um sistema que permite aos usuários visualizar números 
ímpares dentro de uma faixa personalizada. Sua tarefa é criar um programa que, 
dado um número inteiro positivo n, exiba todos os números ímpares de 1 até n. O 
programa deve garantir que todos os números ímpares dentro do intervalo 
especificado sejam exibidos em ordem crescente, um por linha.

Requisitos:

1. O programa deve solicitar que o usuário insira um número inteiro positivo n.

2. O programa deve listar todos os números ímpares de 1 até n.

3. Cada número ímpar deve ser exibido em uma linha separada.

*/

#include <iostream>

using namespace std;

int main() {
    int numero {};
    
    cin >> numero;

    for(int i = 1; i <= numero; i++){
        if(i % 2 != 0){
            cout << i << " ";
        }
    }

    return 0;
}