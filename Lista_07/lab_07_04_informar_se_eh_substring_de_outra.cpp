/* Implemente um programa que leia duas strings (podendo conter espaços em 
 * branco) s1 e s2.
 *
 * O programa deve imprimir a mensagem "É substring" se s2 for uma substring de 
 * s1 e "Não é substring" caso não seja.
 * 
 * Uma string é substring de outra sempre que todos os seus caracteres ocorrem 
 * na mesma ordem e consecutivamente na outra string.
 * 
 * As strings do programa têm no máximo 49 caracteres.
 */

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char texto_1[50] {};
    char texto_2[50] {};
    bool eh_substring = false;
    int contagem {};

    cin.getline(texto_1, 50);
    cin.getline(texto_2, 50);

    for(int i = 0; i < strlen(texto_1); i++){
        contagem = 0;
        int j = 0;
        while(texto_1[i] == texto_2[j]){
            contagem++;
            i++;
            j++;
            if(contagem == strlen(texto_2)){
                eh_substring = true;
            }
        }
        if(texto_1[i] == texto_2[0]){
            i--;
        }
    }

    if(eh_substring){
        cout << "É substring";
    }else{
        cout << "Não é substring";
    }

    return 0;
}