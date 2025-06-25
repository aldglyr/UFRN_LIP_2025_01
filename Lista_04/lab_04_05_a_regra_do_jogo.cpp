/*
 * Imagine que você está criando um jogo de cartas que envolve quatro jogadores.
 * Cada jogador começa com uma pontuação inicial, e durante o jogo, suas
 * pontuações podem ser alteradas com base em diferentes critérios. A função
 * deve ajustar as pontuações conforme as regras do jogo, onde:
 *
 * - Um jogador que tenha mais de 50 pontos ganha 10 pontos adicionais.
 * - Um jogador que tenha menos de 20 pontos perde 5 pontos.
 * - Um jogador com exatamente 35 pontos dobra sua pontuação.
 *
 * Os jogadores não podem ter uma pontuação abaixo de 0, ou seja, caso a
 * pontuação de um jogador fique negativa após uma alteração, ela deve ser
 * ajustada para 0.
 *
 * Escreva um programa em C++ que contenha uma função chamada
 * "ajustarPontuacoes". A função deve receber as pontuações de quatro jogadores
 * como parâmetros por referência e aplicar as regras do jogo descritas acima
 * para ajustar as pontuações. A função não retorna nenhum valor, mas altera
 * diretamente as pontuações dos jogadores através da passagem por referência.
 *
 * - Função "ajustarPontuacoes": A função recebe as pontuações dos quatro
 * jogadores por referência e aplica as regras:
 *
 * > Se a pontuação for maior que 50, adiciona 10 pontos.
 * > Se for menor que 20, subtrai 5 pontos.
 * > Se for exatamente 35, a pontuação é dobrada.
 * > Se, após as alterações, a pontuação de um jogador for negativa, ela é
 *   ajustada para 0.
 *
 * - Regras aplicadas individualmente: Cada jogador passa por essas três regras,
 *   e a pontuação é ajustada diretamente devido à passagem por referência.
 *
 * A função ajustarPontuacoes deve ter a assinatura abaixo:
 *
 * void ajustarPontuacoes(int &jogador1, int &jogador2, int &jogador3,
 *                        int &jogador4);
 */

#include <iostream>

using namespace std;

void calculo_pontos(int &valor)
{
    if (valor > 50)
        valor += 10;

    if (valor < 20)
        valor -= 5;

    if (valor == 35)
        valor += valor;

    if (valor < 0)
        valor = 0;
}

void ajustarPontuacoes(int &jogador1, int &jogador2, int &jogador3,
                       int &jogador4)
{
    calculo_pontos(jogador1);
    calculo_pontos(jogador2);
    calculo_pontos(jogador3);
    calculo_pontos(jogador4);
}

int main()
{
    int jogador1 = {};
    int jogador2 = {};
    int jogador3 = {};
    int jogador4 = {};

    cin >> jogador1 >> jogador2 >> jogador3 >> jogador4;

    ajustarPontuacoes(jogador1, jogador2, jogador3, jogador4);

    cout << jogador1 << " " << jogador2 << " " << jogador3 << " " << jogador4
         << endl;

    return 0;
}
