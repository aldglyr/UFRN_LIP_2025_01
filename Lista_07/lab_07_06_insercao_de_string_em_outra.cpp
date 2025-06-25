/* Implemente uma função que possua 4 parâmetros, sendo eles 3 strings e 1
 * número inteiro. Chame os parâmetros do tipo string de s1, s2 e s3 e o número
 * inteiro de p. A função deve inserir a string s2 na posição p de s1 e
 * armazenar este resultado em s3. A inserção deve ser feita sem sobrescrever
 * os caracteres originais de s1.
 *
 * A função main do seu programa deve ler, na ordem, as strings s1, s2 e o
 * número inteiro p. Após chamar a função solicitada, a função main deve exibir
 * o resultado da função.
 *
 * Como exemplo se s1 é a string "aula lip", s2 é a string " de" e o inteiro p é
 * 4, então a string resultante s3 é "aula de lip". Utilize funções auxiliares
 * para fazer o que for pedido na função main caso julgue necessário.
 *
 * Considere que a posição p será sempre válida (dentro dos limites da string
 * s1) e que as strings lidas devem ter tamanho máximo igual a 20.
 */

#include <cstring>
#include <iostream>

using namespace std;

void insere_string(char string_1[], int tamanho_1, char string_2[],
                   int tamanho_2, char string_3[], int tamanho_3, int posicao)

{
    for (int i = 0, j = 0, k = 0; i < (tamanho_1 + tamanho_2);)
    {
        if (i < posicao || j >= tamanho_2)
        {
            string_3[k] = string_1[i];
            i++;
            k++;
        }
        if (i >= posicao && j < tamanho_2)
        {
            string_3[k] = string_2[j];
            j++;
            k++;
        }
    }
}

int main()
{
    char string_1[50] = {};
    char string_2[50] = {};
    char string_3[50] = {};
    int  posicao      = {};

    cin.getline(string_1, 50);
    cin.getline(string_2, 50);
    cin >> posicao;

    insere_string(string_1, strlen(string_1), string_2, strlen(string_2),
                  string_3, strlen(string_1) + strlen(string_2), posicao);

    for (int i = 0; i < strlen(string_3); i++)
    {
        cout << string_3[i];
    }

    return 0;
}
