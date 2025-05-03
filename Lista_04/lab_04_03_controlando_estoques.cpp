/*

Imagine que você está desenvolvendo um software de controle de estoques para uma
loja que vende três tipos de produtos: "Produto A", "Produto B", e "Produto C". 
Durante o processo de venda, o estoque de cada produto precisa ser atualizado 
dinamicamente com base nas vendas realizadas.

O problema que você precisa resolver envolve uma função que atualiza o estoque 
de três produtos com base nas quantidades vendidas de cada um. Para otimizar o 
desempenho, os estoques são passados por referência, garantindo que as 
alterações sejam refletidas diretamente nos dados do sistema.

Escreva um programa em C++ que contenha uma função chamada "atualizarEstoque". 
Esta função deve receber três parâmetros por referência: o estoque de 
"Produto A", "Produto B", e "Produto C". Além disso, deve receber três 
parâmetros que representam as quantidades vendidas de cada produto. A função 
deve atualizar o estoque de cada produto, subtraindo as respectivas quantidades 
vendidas.

Se a quantidade vendida de algum produto exceder o estoque disponível, a função 
não deve permitir a atualização e deve retornar "false". Caso contrário, deve 
atualizar os estoques e retornar "true". A função deve ter a assinatura abaixo:

bool atualizarEstoque(int &estoqueA, int &estoqueB, int &estoqueC, int vendA, int vendB, int vendC);

*/

#include <iostream>
using namespace std;

bool atualizarEstoque(int &estoqueA, int &estoqueB, int &estoqueC, int vendA, int vendB, int vendC) {
    if( (estoqueA - vendA < 0) || (estoqueB - vendB < 0) || (estoqueC - vendC < 0) ){
        return false;
    }

    estoqueA = estoqueA - vendA;
    estoqueB = estoqueB - vendB;
    estoqueC = estoqueC - vendC;

    return true;
}

int main() {
    int quantidade = 3;
    int estoque[quantidade];
    int venda[quantidade];
    
    for(int i = 0; i < quantidade; i++){
        cin >> estoque[i];
    }

    for(int i = 0; i < quantidade; i++){
        cin >> venda[i];
    }

    if( atualizarEstoque(estoque[0], estoque[1], estoque[2], venda[0], venda[1], venda[2]) ){
            for(int i = 0; i < quantidade; i++){
                cout << estoque[i] << " ";
            }
        }else{
            cout << "Venda nao permitida" << endl;
        }
    return 0;
}