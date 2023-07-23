/**
Escreva um programa que preenche dois vetores, A e B, com inteiros positivos lidos do teclado e
preenche um terceiro vetor C em que cada elemento é igual à soma dos elementos correspondentes dos
vetores recebidos. Por fim o programa deve imprimir C.
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int MAX_COLUNA = 500;
inline int geraNumero(){return (rand() % 100) + 1;}
void geraVetor(int [MAX_COLUNA], int [MAX_COLUNA], int [MAX_COLUNA], int);
void imprimeVetor(int [MAX_COLUNA], int [MAX_COLUNA], int [MAX_COLUNA], int);
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int vetorA[MAX_COLUNA], vetorB[MAX_COLUNA], vetorC[MAX_COLUNA], coluna;
    do {
        cout << "insira o tamanho do vetor: ";
        cin >> coluna;
    } while((coluna < 1)||(coluna > 500));
    geraVetor(vetorA, vetorB, vetorC, coluna);
    imprimeVetor(vetorA, vetorB, vetorC, coluna);

    return 0;
}
void geraVetor(int vetorA[MAX_COLUNA], int vetorB[MAX_COLUNA], int vetorC[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        vetorA[i] = geraNumero();
        vetorB[i] = geraNumero();
        vetorC[i] = vetorA[i] + vetorB[i];
    }
}
void imprimeVetor(int vetorA[MAX_COLUNA], int vetorB[MAX_COLUNA], int vetorC[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        cout << vetorA[i] << " + " << vetorB[i] << " = " << vetorC[i] << endl;
    }
}
