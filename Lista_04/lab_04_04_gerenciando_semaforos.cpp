/*

Vamos então explorar um problema diferente, sem envolver STL, ordenação, soma ou subtração, e requer a passagem de
quatro parâmetros por referência. A ideia aqui será focar na troca de valores e controle de fluxo, em um contexto de
controle de semáforos.

Você está desenvolvendo um sistema de controle de semáforos inteligentes para uma cidade. Cada cruzamento tem quatro
semáforos (norte, sul, leste e oeste), e cada semáforo pode estar com um dos seguintes estados: "verde", "amarelo", ou
"vermelho". O sistema deve gerenciar o estado de cada semáforo de forma que, em qualquer momento, apenas um semáforo
esteja "verde", enquanto os outros três devem estar "vermelho".

Sua tarefa é implementar uma função que recebe os estados dos quatro semáforos como parâmetros por referência e faz a
troca de estados com base em uma regra definida, onde o próximo semáforo deve passar para o "verde", e todos os outros
para "vermelho". A função deve garantir que essa transição ocorra corretamente.

Escreva um programa em C++ que contenha uma função chamada "trocarSemaforo". Essa função deve receber quatro parâmetros
por referência, representando o estado dos semáforos em um cruzamento (norte, sul, leste e oeste). A função deve
alternar os semáforos conforme a regra, onde o próximo semáforo deve ficar "verde", enquanto os outros três devem ficar
"vermelho".

O ciclo deve ser sempre: norte → leste → sul → oeste → norte, e assim por diante.

- Função "trocarSemaforo": A função recebe quatro semáforos representados pelas letras 'G' (verde) e 'R' (vermelho),
indicando o estado atual de cada um (norte, leste, sul e oeste). Ela alterna o semáforo que está verde para o próximo na
sequência e ajusta os outros três para vermelho.

- Controle de fluxo: O ciclo de troca é definido de forma que, ao encontrar o semáforo que está "verde", o próximo na
sequência é ativado, e os outros são definidos como vermelho. Isso garante que em qualquer momento apenas um semáforo
estará verde.

*/

#include <iostream>

using namespace std;

void trocarSemaforo(char &norte, char &leste, char &sul, char &oeste) {
    char temporario = {};

    temporario = oeste;
    oeste = sul;
    sul = leste;
    leste = norte;
    norte = temporario;
}

int main() {
    char norte = {};
    char leste = {};
    char sul = {};
    char oeste = {};

    cin >> norte >> leste >> sul >> oeste;

    trocarSemaforo(norte, leste, sul, oeste);

    cout << norte << " " << leste << " " << sul << " " << oeste;

    return 0;
}
