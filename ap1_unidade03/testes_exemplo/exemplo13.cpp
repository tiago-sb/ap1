/**
Escreva um programa que solicita 50 valores inteiros ao usuário, armazena esses valores em um
arranjo chamado vet1. Depois, copia o conteúdo desse arranjo para um segundo arranjo chamado
vet2. O programa deve imprimir os dois arranjos na tela.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

inline int geraNum(){return (rand() % 10) + 1;}
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int vet1[50], vet2[50];

    for(int i = 0; i < 50; i++){
        vet1[i] = geraNum();
        vet2[i] = vet1[i];
    }
    for(int i = 0; i < 50; i++){
        if(vet1[i] < 10){
            cout << "vetor 1: " << vet1[i] << "  vetor 2: " << vet2[i] << endl;
        }
        else {
            cout << "vetor 1: " << vet1[i] << " vetor 2: " << vet2[i] << endl;
        }
    }

    return 0;
}

