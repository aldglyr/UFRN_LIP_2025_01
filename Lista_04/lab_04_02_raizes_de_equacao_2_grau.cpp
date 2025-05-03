/*

As equações de segundo grau estão presentes em diversos problemas reais, como na
física, onde são usadas para calcular o ponto máximo de uma trajetória 
parabólica, ou na engenharia, para determinar o comportamento de sistemas em 
movimento. Um exemplo clássico é o cálculo da altura máxima atingida por um 
projétil lançado no ar, onde as variáveis envolvem tempo, aceleração e altura. A
fórmula da equação de segundo grau nos permite determinar o ponto exato em que o
projétil atinge o solo (raízes da equação) ou atinge seu ponto máximo.

Escreva um programa em C++ que contenha uma função chamada "calcularRaizes". 
Esta função deve receber três parâmetros "a", "b" e "c", que são os coeficientes
de uma equação de segundo grau, e deve calcular as raízes da equação utilizando 
a fórmula de Bhaskara. A função deve devolver as raízes "x" e "y" como 
parâmetros por referência e retornar "true" se as raízes forem reais e "false" 
caso contrário (quando o discriminante for negativo).

*/

#include <iostream>
#include <cmath>

using namespace std;

bool CalcularRaizes(double a, double b, double c, double &x1, double &x2) {
    double delta = pow(b,2) - 4 * a * c;

    if(delta < 0) {
        return false;
    }

    if(delta == 0) {
        x1 = (-b)/(2 * a);
        x2 = x1;
        return true;
    }

    if(delta > 0) {
        x1 = (-b + sqrt(delta))/(2 *a);
        x2 = (-b - sqrt(delta))/(2 *a);
        return true;
    }
    
    return false;
}

int main() {
    double a {};
    double b {};
    double c {};
    double x1 {};
    double x2 {};

    cin >> a >> b >> c;

    if(CalcularRaizes(a, b, c, x1, x2)){
        cout << x1 << " " << x2 << endl;
    }else{
        cout << "Nao ha raizes reais" << endl;
    }

    return 0;
}
