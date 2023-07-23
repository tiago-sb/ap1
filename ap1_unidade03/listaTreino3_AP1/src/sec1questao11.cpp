/**
Faça um programa para criar um vetor A com 15 elementos inteiros lidos do teclado e em seguida
preencher um vetor B de mesmo tamanho de acordo com os seguintes critérios:
Bi deverá receber 'a' quando Ai for menor que 7;
Bi deverá receber 'b' quando Ai for igual a 7;
Bi deverá receber 'c' quando Ai for maior que 7 e menor que 10;
Bi deverá receber 'd' quando Ai for igual a 10; e
Bi deverá receber 'e' quando Ai for maior que 10.
O programa deverá então imprimir A e B.
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

inline int geraNumero(){return (rand() % 15) + 1;}
void geraVetor(int [15]);
void geraTerceiroVetor(int [15], char [15]);
void imprimeVetor(int [15], char [15]);
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int vetorA[15];
    char vetorB[15];
    geraVetor(vetorA);
    geraTerceiroVetor(vetorA, vetorB);
    imprimeVetor(vetorA, vetorB);

    return 0;
}
void geraVetor(int vetorA[15]){
    for(int i = 0; i < 15; i++){
        vetorA[i] = geraNumero();
    }
}
void geraTerceiroVetor(int vetorA[15], char vetorB[15]){
    for(int i = 0; i < 15; i++){
        if(vetorA[i] < 7){
            vetorB[i] = 'a';
        } else if(vetorA[i] == 7){
            vetorB[i] = 'b';
        } else if((vetorA[i] > 7)&&(vetorA[i] < 10)){
            vetorB[i] = 'c';
        } else if(vetorA[i] == 10){
            vetorB[i] = 'd';
        } else if(vetorA[i] > 10){
            vetorB[i] = 'e';
        }
    }
}
void imprimeVetor(int vetorA[15], char vetorB[15]){
    for(int i = 0; i < 15; i++){
        cout << setw(2) << vetorA[i] << setw(3) << "-" << setw(3) << vetorB[i] << endl;
    }
}
