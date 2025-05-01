/*
A corrida de lesmas é um esporte que vem crescendo nos últimos anos, fazendo com que 
várias pessoas dediquem suas vidas tentando capturar lesmas rápidas. A captura de lesmas 
rápidas não é uma tarefa fácil, visto que quase todas as lesmas são muito lentas. Com o 
objetivo de categorizar as lesmas, uma classificação da lesma é feita com base em sua 
velocidade:

- Level 1: Se a velocidade é menor que 10 cm/h.
- Level 2: Se a velocidade é maior ou igual a 10 cm/h e menor que 20 cm/h.
- Level 3: Se a velocidade é maior ou igual a 20 cm/h.

Sua tarefa é identificar qual o maior level de velocidade de um determinado grupo de 
lesmas. Crie um programa que recebe um inteiro N que indica quantas lesmas o grupo possui,
em seguida o programa irá receber N valores inteiros positivos, que representam a 
velocidade de cada lesma do grupo. Seu programa deve possuir uma função que, dada uma 
velocidade, retorna um inteiro que indica o level em que a lesma se encontra. Sua saída 
deve ser o maior level encontrado no grupo.

*/

#include <iostream>

using namespace std;

int Level(int& l_velocidade){    
    if(l_velocidade < 10){
        return 1;
    }
    
    if(l_velocidade >= 10 && l_velocidade < 20){
        return 2;
    }   
    
    if(l_velocidade >= 20){
        return 3;
    }
}

int main(){
    int quantidade = {};
    int velocidade = {};
    int level = {};
    int maior_level = {};
    
    cin >> quantidade;

    for(int i = 1; i <= quantidade; i++){
        cin >> velocidade;
    
        level = Level(velocidade);
        
        if(level > maior_level){
            maior_level = level;
        }
    }

    cout << "Level " << maior_level << endl;

    return 0;
}