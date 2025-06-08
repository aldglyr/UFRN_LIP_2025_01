/*

Uma empresa de análise de dados está coletando informações sobre a presença de produtos em diferentes armazéns,
representados em uma matriz onde cada elemento indica a quantidade do produto em um determinado ponto do estoque. Um
valor "0" indica que o produto está indisponível naquela posição. Seu objetivo é calcular o percentual de posições onde
o produto está ausente, para que o gestor saiba o quanto o estoque está vazio. Esse valor deve ser exibido com precisão
de duas casas decimais.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int linha{};
    int coluna{};
    float itens{};
    float itens_zeros{};
    float percentual{};

    cin >> linha >> coluna;
    int estoque[linha][coluna]{};

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cin >> estoque[i][j];
            itens++;
            if (estoque[i][j] == 0) {
                itens_zeros++;
            }
        }
    }
    percentual = (itens_zeros * 100) / itens;
    cout << fixed << setprecision(2) << percentual << "%";

    return 0;
}
