/**
faça um algoritmo que ordene um vetor de tamanho dado pelo usuário de forma decrescente e cresente
utilizando o algoritmo bubbleSort.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <iomanip>

using namespace std;

const int MAX_COLUNA = 30;
void geraMatriz(int [MAX_COLUNA], int);
void imprimeMatriz(int [MAX_COLUNA], int);
void ordenaCrescente(int [MAX_COLUNA], int);
void ordenaDecrescente(int [MAX_COLUNA], int);
void linha(){cout << "-----------------------------------------------" << endl;}
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int coluna, matriz[MAX_COLUNA];
    linha();
    do {
        cout << " TAMANHO: ";
        cin >> coluna;
    } while((coluna < 1)||(coluna > 30));
    linha();
    geraMatriz(matriz, coluna);
    cout << " MATRIZ ORIGINAL: " << endl;
    imprimeMatriz(matriz, coluna);
    cout << endl;
    linha();
    cout << " MATIRZ ORDENADA CRESCENTE: " << endl;
    ordenaCrescente(matriz, coluna);
    imprimeMatriz(matriz, coluna);
    cout << endl;
    linha();
    cout << " MATIRZ ORDENADA CRESCENTE: " << endl;
    ordenaDecrescente(matriz, coluna);
    imprimeMatriz(matriz, coluna);
    cout << endl;

    return 0;
}
void geraMatriz(int matriz[MAX_COLUNA], int coluna){
    for(int j = 0; j < coluna; j++){
        matriz[j] = (rand() % 100) + 1;
    }
}
void imprimeMatriz(int matriz[MAX_COLUNA], int coluna){
    for(int j = 0; j < coluna; j++){
        cout << setw(5) << matriz[j];
    }
}
void ordenaCrescente(int matriz[MAX_COLUNA], int coluna){
    int aux;
    for(int i = 0; i < (coluna - 1); i++){
        for(int j = 0; j < (coluna - i - 1); j++){
            if(matriz[j] > matriz[j + 1]){
                aux = matriz[j];
                matriz[j] = matriz[j + 1];
                matriz[j + 1] = aux;
            }
        }
    }
}
void ordenaDecrescente(int matriz[MAX_COLUNA], int coluna){
    int aux;
    for(int i = 0; i < (coluna - 1); i++){
        for(int j = 0; j < (coluna - i - 1); j++){
            if(matriz[j] < matriz[j + 1]){
                aux = matriz[j];
                matriz[j] = matriz[j + 1];
                matriz[j + 1] = aux;
            }
        }
    }
}

