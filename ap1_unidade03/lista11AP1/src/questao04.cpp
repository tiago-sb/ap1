/**
A partir da fun��o implementada anteriormente, crie agora a fun��o bubbleSortMelhor,
reduzindo o n�mero de compara��es a cada passagem, considerando que ap�s a primeira
passagem, o �ltimo elemento j� estar� ordenado; ap�s a segunda passagem, os dois �ltimos
elementos j� estar�o ordenados; ap�s a terceira passagem, os tr�s �ltimos, e assim
sucessivamente. Por fim, introduza uma forma de truncar o processo assim que o arranjo estiver
completamente ordenado, evitando passagens desnecess�rias.
Fa�a um programa que gere 500 n�meros inteiros entre 1 e 100 e armazene-os em dois vetores
iguais � vet1 e vet2. Chame a fun��o bubbleSort para ordenar os elementos de vet1 e
bubbleSortMelhor para ordenar vet2. Em seguida, seu programa principal deve imprimir cada
um dos arranjos ordenados (use uma fun��o para imprim�-los).
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <locale>

using namespace std;

const int MAX_COLUNA = 500;
void geraMatriz(int [MAX_COLUNA], int);
void copiaMatriz(int [MAX_COLUNA], int [MAX_COLUNA], int);
void imprimeMatriz(int [MAX_COLUNA], int);
void bubbleSort(int [MAX_COLUNA], int);
void bubbleSortMelhor(int [MAX_COLUNA], int);
inline linha(){cout << "--------------------------------------------" << endl;}
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int coluna, matriz1[MAX_COLUNA], matriz2[MAX_COLUNA] = {0};
    linha();
    do {
        cout << "insira o tamanho do vetor(entre 1 e 500), ser�o gerados a partir de sua escolha\ndois vetores iguais e de mesmo tamanho: ";
        cin >> coluna;
    } while((coluna < 1)||(coluna > 500));
    geraMatriz(matriz1, coluna);
    copiaMatriz(matriz1, matriz2, coluna);
    linha();
    cout << "MATRIZ ORIGINAL: " << endl;
    cout << "--MATRIZ 1 -> ";
    imprimeMatriz(matriz1, coluna);
    cout << endl;
    cout << "\n--MATRIZ 2 -> ";
    imprimeMatriz(matriz2, coluna);
    cout << endl;
    linha();
    cout << "MATRIZ ORDENADA CRESCENTE: " << endl;
    cout << "--MATRIZ 1 (BubbleSort) -> ";
    bubbleSort(matriz1, coluna);
    imprimeMatriz(matriz1, coluna);
    cout << endl;
    cout << "\n--MATRIZ 2 (BubbleSortMelhor)-> ";
    bubbleSortMelhor(matriz2, coluna);
    imprimeMatriz(matriz2, coluna);
    cout << endl;
    linha();

    return 0;
}
void geraMatriz(int matriz[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        matriz[i] = (rand() % 100) + 1;
    }
}
void copiaMatriz(int matriz1[MAX_COLUNA], int matriz2[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        matriz2[i] = matriz1[i];
    }
}
void imprimeMatriz(int matriz[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        if(i == 0){
            cout << matriz[i];
        }
        else {
            cout << setw(4) << matriz[i];
        }
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
void bubbleSortMelhor(int matriz[MAX_COLUNA], int coluna){
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
