/*

Imagine que você está desenvolvendo um software para simular o movimento de 
projéteis em um jogo. Você precisa calcular o tempo em que o projétil atinge o 
solo, e isso pode ser representado por uma equação do segundo grau baseada na 
fórmula de movimento uniforme acelerado.

Em resumo, escreva um programa que:

1. Receba os valores dos coeficientes a, b e c de uma equação de segundo grau;

2. Calcule as raízes da equação utilizando a fórmula de Bhaskara;

3. Se as raízes existirem (discriminante Δ≥0), imprime os valores de t (as duas 
   raízes, se houver);

4. Caso contrário, imprime "Não existem raízes reais" (matematicamente o 
   projétil não atingirá o solo)

Imprima todos os resultados com duas casas decimais de precisão. Utilize as 
bibliotecas e comandos abaixo para setar a precisão da saída:

#include<iomanip>

cout << fixed << setprecision(2);

*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    float a = {};
    float b = {};
    float c = {};

    cin >> a;
    cin >> b;
    cin >> c;

    float delta = pow(b,2) - 4 * a * c;

    if(delta >= 0){
        cout << "t1 = " << fixed << setprecision(2) << (-b + sqrt(delta)) / (2 * a) << endl;
        cout << "t2 = " << fixed << setprecision(2) << (-b - sqrt(delta)) / (2 * a) << endl;
    } else{
        cout << "Não existem raízes reais (matematicamente o projétil não atingirá o solo)" << endl;
    }

    return 0;
}