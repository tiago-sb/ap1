/**
Escreva um programa que recebe 20 valores inteiros positivos e armazena 10 desses valores no
vetor A e 10 no vetor B. Em seguida, o programa deve preencher um terceiro vetor C de acordo com os
seguintes critérios:
Ci deverá receber 1 quando Ai for maior que Bi ;
Ci deverá receber 0 quando Ai for igual a Bi ;
Ci deverá receber -1 quando Ai for menor que Bi .
Por fim, o programa deve imprimir A, B e C.
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

inline int geraNumero(){return (rand() % 100);}
void geraVetor(int [10], int [10]);
void geraTerceiroVetor(int [10], int [10], int [10]);
void imprimeVetor(int vetorA[10], int [10], int [10]);
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int vetorA[10], vetorB[10], vetorC[10];
    geraVetor(vetorA, vetorB);
    geraTerceiroVetor(vetorA, vetorB, vetorC);
    imprimeVetor(vetorA, vetorB, vetorC);

    return 0;
}
void geraVetor(int vetorA[10], int vetorB[10]){
    for(int i = 0; i < 10; i++){
        vetorA[i] = geraNumero();
        vetorB[i] = geraNumero();
    }
}
void geraTerceiroVetor(int vetorA[10], int vetorB[10], int vetorC[10]){
    for(int i = 0; i < 10; i++){
        if(vetorA[i] == vetorB[i]){
            vetorC[i] = 0;
        } else if(vetorA[i] > vetorB[i]){
            vetorC[i] = 1;
        } else if(vetorA[i] < vetorB[i]){
            vetorC[i] = -1;
        }
    }
}
void imprimeVetor(int vetorA[10], int vetorB[10], int vetorC[10]){
    for(int i = 0; i < 10; i++){
        cout << setw(3) << vetorA[i] << setw(4) << " - " << setw(3) << vetorB[i] << setw(4) << " = ";
        cout << setw(2) << vetorC[i] << endl;
    }
}
