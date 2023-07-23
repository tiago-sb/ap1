/**
Implemente uma função bubbleSort para ordenar os elementos de um vetor. Inicialmente,
implemente o algoritmo original, executando n-1 passagens, comparando n-1 pares de elementos
em cada passagem.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int MAX_COLUNA = 500;
void geraMatriz(int [MAX_COLUNA], int);
void imprimeMatriz(int [MAX_COLUNA], int);
void bubbleSort(int [MAX_COLUNA], int);
inline linha(){cout << "--------------------------------------------" << endl;}
int main(){
    srand(time(0));
    int coluna, matriz[MAX_COLUNA];
    do {
        cout << " insira o tamanho do seu vetor(entre 1 e 500): ";
        cin >> coluna;
    } while((coluna < 1)||(coluna > 500));
    geraMatriz(matriz, coluna);
    linha();
    cout << " MATRIZ ORIGINAL: " << endl;
    imprimeMatriz(matriz, coluna);
    bubbleSort(matriz, coluna);
    cout << endl;
    linha();
    cout << " MATRIZ ORDENADA CRESCENTE: " << endl;
    imprimeMatriz(matriz, coluna);
    cout << endl;
    linha();
    return 0;
}
void geraMatriz(int matriz[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        matriz[i] = (rand() % 100) + 1;
    }
}
void imprimeMatriz(int matriz[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        cout << setw(4) << matriz[i];
    }
}
void bubbleSort(int matriz[MAX_COLUNA], int coluna){
    int aux;
    for(int i = 0; i < (coluna - 1); i++){
        for(int j = 0; j < (coluna - 1); j++){
            if(matriz[j] > matriz[j + 1]){
                aux = matriz[j];
                matriz[j] = matriz[j + 1];
                matriz[j + 1] = aux;
            }
        }
    }
}
