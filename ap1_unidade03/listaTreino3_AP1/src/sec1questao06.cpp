/**
Faça um programa para criar um vetor A com 15 elementos inteiros e em seguida preencher um vetor B
de mesmo tipo e tamanho. Cada elemento do vetor B deverá ser o quadrado do elemento
correspondente de A.
Por fim, o programa deve imprimir A e B.
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

inline int geraNumero(){return (rand() % 10) + 1;}
void geraVetor(int [15], int [15], int);
void imprimeVetor(int [15], int [15], int);
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int vetorA[15], vetorB[15], coluna;
    do {
        cout << "insira o tamanho do vetor [1,15]: ";
        cin >> coluna;
    } while((coluna < 1)||(coluna > 15));
    geraVetor(vetorA, vetorB, coluna);
    imprimeVetor(vetorA, vetorB, coluna);
    return 0;
}
void geraVetor(int vetorA[15], int vetorB[15], int coluna){
    for(int i = 0; i < coluna; i++){
        vetorA[i] = geraNumero();
        vetorB[i] = pow(vetorA[i], 2);
    }
}
void imprimeVetor(int vetorA[15], int vetorB[15], int coluna){
    for(int i = 0; i < coluna; i++){
        cout << "|" << setw(4) << vetorA[i] << setw(4) << vetorB[i] << setw(4) << "|" << endl;
    }
}
