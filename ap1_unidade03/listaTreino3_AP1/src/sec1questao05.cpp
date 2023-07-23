/**
Faça um programa para criar um vetor A com 100 elementos inteiros e em seguida chamar um programa
que preencha um vetor B de mesmo tipo e tamanho. Cada elemento do vetor B deverá ser o elemento
correspondente de A multiplicado por 2. Por exemplo, B[0] = A[0] * 2; B[1] = A[2] * 2; ...; B[99] = A[99] * 2
Por fim, o programa deve imprimir A e B.
*/

#include <iostream>
#include <iomanip>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

inline int geraNumero(){return (rand() % 100) + 1;}
void geraVetor(int [100], int [100], int);
void imprimeVetor(int [100], int [100], int);
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int vetorA[100], vetorB[100], coluna;
    do {
        cout << "tamanho do vetor [1,500]: ";
        cin >> coluna;
    } while((coluna < 1)||(coluna > 500));
    geraVetor(vetorA, vetorB, coluna);
    imprimeVetor(vetorA, vetorB, coluna);

    return 0;
}
void geraVetor(int vetorA[100], int vetorB[100], int coluna){
    for(int i = 0; i < coluna; i++){
        vetorB[i] = geraNumero();
        vetorA[i] = vetorB[i] * 2;
    }
}
void imprimeVetor(int vetorA[100], int vetorB[100], int coluna){
    for(int i = 0; i < coluna; i++){
        cout << "|" << setw(3) << vetorB[i] << setw(5) << vetorA[i] << setw(2) << "|" << endl;
    }
}
