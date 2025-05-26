/* 

Implemente um programa que lê várias duplas de linhas. Cada dupla de linha é 
composta por um inteiro e uma string. Cada string lida deve ser concatenada com 
as anteriores. Caso o inteiro seja 0, a próxima string deve ser concatenada no 
início das anteriores. Caso o inteiro seja 1, a próxima string deve ser 
concatenada no fim das anteriores. O programa deve parar quando o inteiro lido 
for igual a -1.

*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int comando {};
    char anterior[50] {};
    char atual[50] {};

    while(comando != -1){
        cin >> comando;
        cin.ignore();
        cin.getline(atual, 50);
        if(comando == 0){
            strcat(atual, anterior);
            strcpy(anterior, atual);
        }

        if(comando == 1){
            strcat(anterior, atual);
            strcpy(atual, anterior);
        }
    }
    cout << anterior;

    return 0;
}