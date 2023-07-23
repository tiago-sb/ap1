/**
Escreva um programa que recebe um vetor de inteiros positivos e substitui seus elementos de valor
ímpar por -1 e os pares por +1. Em seguida, imprime o vetor alterado.
*/

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

inline void linha(){ cout << "------------------------------------" << endl;}
int main(){
    setlocale(LC_ALL,"portuguese");
    int tamanhoVetor;
    cout << "Insira o tamanho do vetor: ";
    cin >> tamanhoVetor;
    int vet1[tamanhoVetor], vet2[tamanhoVetor];
    for(int i = 0; i < tamanhoVetor; i++){
        cout << "Insira o elemento " << i + 1 << " do vetor: ";
        cin >> vet1[i];
        if(vet1[i] % 2 == 0){
            vet2[i] = 1;
        }
        else {
            vet2[i] = -1;
        }
    }
    linha();
    cout << "vetor 1" << "      " << "vetor 2" << endl;
    for(int i = 0; i < tamanhoVetor; i++){
        cout << setw(4) << vet1[i] << setw(13) << vet2[i] << endl;
    }

    return 0;
}
