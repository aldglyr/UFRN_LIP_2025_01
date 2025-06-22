/* Implemente um programa que leia uma string possivelmente contendo espaços em 
 * branco.
 *
 * O programa deve imprimir uma mensagem informando se a string informada é um 
 * palíndromo ou não.
 * 
 * Um palíndromo é uma string que pode ser lida tanto da esquerda para a direita
 * quanto da direita para a esquerda, como "osso", "arara", "xyzzyx", etc.
 * 
 * Os espaços em branco na string de entrada devem ser ignorados (não devem 
 * contar para a lógica do palíndromo). Então, " osso  arara   " 
 * (com 1 espaço antes da 1a. palavra, 2 espaços entre as palavras e 3 espaços 
 * em branco após a 2a. palavra) deve ser considerado um palíndromo.
 * 
 * As strings do programa têm no máximo 49 caracteres.
 */

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int tamanho_entrada = 50;
    int tamanho_texto {};
    char entrada[tamanho_entrada] {};
    char texto[tamanho_entrada] {};
    bool palindromo = true;
    int j = 0;

    cin.getline(entrada,tamanho_entrada);

    for(int i = 0; i < tamanho_entrada; i++){
        if(entrada[i] != ' '){
            texto[j] = entrada[i];
            j++;
        }
    }

    tamanho_texto = strlen(texto);
    
    for(int i = 0; i < tamanho_texto - 1 - i; i++){
        if(texto[i] != texto[tamanho_texto - 1 - i]){
            palindromo = false;
            break;
        }
    }

    if(palindromo){
        cout << "É palíndromo";
    }else{
        cout << "Não é palíndromo";
    }

    return 0;
}