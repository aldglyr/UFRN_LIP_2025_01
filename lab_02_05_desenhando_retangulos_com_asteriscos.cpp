/*

Imagine que você trabalha em uma empresa de design gráfico e seu supervisor pediu que você
criasse um programa para visualizar retângulos simples em uma tela. O programa precisa ler
o comprimento e a altura de um retângulo e, em seguida, exibir esse retângulo formado por 
asteriscos (*). Cada linha do retângulo deve ter o número de asteriscos correspondente ao 
comprimento, e o número total de linhas deve corresponder à altura.
  
Sua tarefa é criar um programa que, dado o comprimento e a altura de um retângulo, imprima
o retângulo correspondente formado por asteriscos.
  
Requisitos:
  
1. O programa deve solicitar dois números inteiros positivos: o comprimento e a altura do 
   retângulo.
2. O programa deve imprimir o retângulo usando asteriscos, com cada linha contendo o 
   número de asteriscos indicado pelo comprimento.
3. O programa deve imprimir o número de linhas indicado pela altura.

*/

#include <iostream>
using namespace std;

int main() {
    int linha = {};
    int coluna = {};
    cin >> linha;
    cin >> coluna;

    for(int i = 1; i <= linha; i++) {

        for(int j = 1; j <= coluna; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}