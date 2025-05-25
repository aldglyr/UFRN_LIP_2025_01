/* 

Em uma análise financeira de uma matriz de investimentos onde os valores 
representam o retorno entre setores específicos de uma empresa, os analistas 
estão interessados apenas na soma dos retornos que estão localizados acima da 
diagonal principal da matriz de investimentos. Esses valores representam a 
interação entre setores onde o primeiro setor tem mais impacto sobre o segundo, 
uma área de foco para otimização dos investimentos.

Escreva um programa que calcule a soma dos elementos, de uma matriz numérica 
quadrada n x n lida, que estão acima da diagonal principal. A soma calculada 
deve ser exibida. Aceite apenas n maior que zero.

*/

#include <iostream>

using namespace std;

int main(){
    int tamanho = 0;
    int soma = 0;

    while(tamanho <= 0){
        cout << "teste" << endl;
        cin >> tamanho;
    }

    int matriz[tamanho][tamanho] {};

    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            cin >> matriz[i][j];
            if(j > i){
                soma += matriz[i][j];
            }
        }
    }

    cout << soma;

    return 0;
}