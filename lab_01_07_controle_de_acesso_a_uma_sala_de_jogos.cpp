/*
 * Você está desenvolvendo um sistema para controlar o acesso de usuários a uma sala de jogos de um clube. Para acessar a sala, existem duas condições principais:
 * 
 * 1. O usuário deve ter mais de 18 anos de idade ou ser um membro VIP do clube;
 * 
 * 2. O usuário não pode estar na lista de usuários banidos, independentemente de ser VIP ou maior de idade;
 * 
 * Seu objetivo é criar um programa que, dados a idade do usuário, o status de membro VIP e se ele está ou não banido, determine se ele tem permissão para entrar na sala de jogos.
 * 
 * Entrada:
 * 
 * - Um número inteiro representando a idade do usuário;
 * 
 * - Um valor booleano (1 para verdadeiro e 0 para falso) indicando se o usuário é VIP;
 * 
 * - Um valor booleano (1 para verdadeiro e 0 para falso) indicando se o usuário está banido;
 * 
 * Saída:
 * 
 * - Se o usuário tem permissão para acessar a sala de jogos, o programa deve imprimir "Acesso permitido"
 * 
 * - Caso contrário, o programa deve imprimir "Acesso negado"
 */

#include <iostream>

using namespace std;

int main(){
    int idade = {};
    int vip = {};
    int banido = {};

    cin >> idade;
    cin >> vip;
    cin >> banido;

    if((idade > 18 || vip == 1) && banido == 0){
        cout << "Acesso permitido" << endl;
    }else{
        cout << "Acesso negado" << endl;
    }

    return 0;
}