/*
Você está desenvolvendo um sistema para registrar e classificar os tempos de uma 
competição de corrida de carros. Cada competidor realiza uma volta no circuito, 
e você precisa determinar a classificação final com base no tempo gasto por cada
piloto.

Seu programa deve:

1. Ler o tempo gasto por três competidores na corrida, onde cada tempo é um 
   número real (double) que representa o número de segundos;

2. Classificar os competidores do mais rápido (menor tempo) para o mais lento 
   (maior tempo);

3. Imprimir o ranking com a posição dos competidores e seus respectivos tempos;

Entrada:

- Três números reais representando os tempos em segundos dos três competidores.

Saída:

- A classificação dos três competidores do mais rápido para o mais lento no 
  formato:

1o lugar: Competidor X com Y segundos
2o lugar: Competidor Z com W segundos
3o lugar: Competidor Y com V segundos

Todas as saídas vem ter uma casa decimal de precisão. Utilize as bibliotecas e 
comandos abaixo para setar a precisão da saída:

#include<iomanip>
cout << fixed << setprecision(1);

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float competidor1 = {};
    float competidor2 = {};
    float competidor3 = {};
    
    cin >> competidor1;
    cin >> competidor2;
    cin >> competidor3;

    if(competidor1 == competidor2 && competidor2 == competidor3){
        cout << fixed << setprecision(1) << "1o lugar: Competidor 1 com " << competidor1 << " segundos" << endl;
        cout << fixed << setprecision(1) << "2o lugar: Competidor 2 com " << competidor2 << " segundos" << endl;
        cout << fixed << setprecision(1) << "3o lugar: Competidor 3 com " << competidor3 << " segundos" << endl;

    }else{

        if(competidor1 <= competidor2 && competidor1 <= competidor3){
            cout << fixed << setprecision(1) << "1o lugar: Competidor 1 com " << competidor1 << " segundos" << endl;
            if(competidor2 <= competidor3){
                cout << fixed << setprecision(1) << "2o lugar: Competidor 2 com " << competidor2 << " segundos" << endl;
                cout << fixed << setprecision(1) << "3o lugar: Competidor 3 com " << competidor3 << " segundos" << endl;
            }else{
                cout << fixed << setprecision(1) << "2o lugar: Competidor 2 com " << competidor3 << " segundos" << endl;
                cout << fixed << setprecision(1) << "3o lugar: Competidor 3 com " << competidor2 << " segundos" << endl;
            }
        }

        if(competidor2 <= competidor1 && competidor2 <= competidor3){
            cout << fixed << setprecision(1) << "1o lugar: Competidor 2 com " << competidor2 << " segundos" << endl;
            if(competidor1 <= competidor3){
                cout << fixed << setprecision(1) << "2o lugar: Competidor 1 com " << competidor1 << " segundos" << endl;
                cout << fixed << setprecision(1) << "3o lugar: Competidor 3 com " << competidor3 << " segundos" << endl;
            }else{
                cout << fixed << setprecision(1) << "2o lugar: Competidor 3 com " << competidor3 << " segundos" << endl;
                cout << fixed << setprecision(1) << "3o lugar: Competidor 1 com " << competidor1 << " segundos" << endl;
            }
        }

        if(competidor3 <= competidor1 && competidor3 <= competidor2){
            cout << fixed << setprecision(1) << "1o lugar: Competidor 3 com " << competidor3 << " segundos" << endl;
            if(competidor1 <= competidor2){
                cout << fixed << setprecision(1) << "2o lugar: Competidor 1 com " << competidor1 << " segundos" << endl;
                cout << fixed << setprecision(1) << "3o lugar: Competidor 2 com " << competidor2 << " segundos" << endl;
            }else{
                cout << fixed << setprecision(1) << "2o lugar: Competidor 2 com " << competidor2 << " segundos" << endl;
                cout << fixed << setprecision(1) << "3o lugar: Competidor 1 com " << competidor1 << " segundos" << endl;
            }
        }
    }
    return 0;
}