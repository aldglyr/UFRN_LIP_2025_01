/*

Faça um programa que, dados os números n, m (n,m <=30), lê do usuário os valores
de uma matriz A de inteiros de dimensão n x m. Depois, o programa deve ler um 
número x e imprimir uma mensagem indicando se a matriz possui algum elemento 
cujo valor é x.

*/

#include <iostream>

using namespace std;

int main(){
    int linha {};
    int coluna {};
    int numero {};
    bool tem_elemento = false;

    cin >> linha >> coluna;

    int matriz[linha][coluna] {};

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cin >> matriz[i][j];
        }
    }

    cin >> numero;

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(matriz[i][j] == numero){
                tem_elemento = true;
            }
        }
    }

    if(tem_elemento){
        cout << "Matriz tem elemento " << numero;
    }else{
        cout << "Matriz não tem elemento " << numero;
    }
    
    return 0;
}