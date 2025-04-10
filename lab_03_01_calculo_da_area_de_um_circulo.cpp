/*    Você é um engenheiro responsável por projetar o layout de uma praça que terá uma grande fonte circular no centro.
 *    Para calcular a quantidade de material necessário para construir o piso ao redor da fonte,
 *    é preciso determinar a área exata do círculo que representará a fonte.
 *    
 *    Seu objetivo é criar um programa que utilize obrigatoriamente funções para calcular a área do círculo.
 *    
 *    O valor do raio será fornecido pelo usuário, e a fórmula para o cálculo da área de um círculo é:
 *    
 *    A = π × r ^ 2
 *     
 *    Onde 
 *    
 *    π é aproximadamente 3.14159.
 *    
 *    Requisitos:
 *    
 *    - Escreva um programa que receba o valor do raio de um círculo como entrada.
 *    
 *    - O programa deve calcular e retornar a área do círculo.
 *    
 *    - Use a constante M_PI para o valor de π que está disponível no cabeçalho cmath.
 *    
 *    - Todas as saídas devem ter duas casas decimais de precisão
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float Circulo(float raio){
    return M_PI * pow(raio,2);
}

int main() {
    float m_raio = {};
    cin >> m_raio;
    cout << fixed << setprecision(2) << Circulo(m_raio) << endl;
    return 0;
}