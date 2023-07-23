#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int MAX_COLUNA = 50;
void geraMatriz(int [MAX_COLUNA], int);
void imprimeMatriz(int [MAX_COLUNA], int);
void ordenaMatriz(int [MAX_COLUNA], int);
int buscaBinaria(int [MAX_COLUNA], int, int);
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int vetor[MAX_COLUNA], coluna, chave, resultado;
    cout << "tamanho do vetor: ";
    cin >> coluna;
    geraMatriz(vetor, coluna);
    imprimeMatriz(vetor, coluna);
    cout << endl;
    ordenaMatriz(vetor, coluna);
    imprimeMatriz(vetor, coluna);
    cout << endl <<"chave: ";
    cin >> chave;
    coluna--;
    resultado = buscaBinaria(vetor, chave, coluna);
    cout << endl;
    if(resultado == (-1)){
        cout << "valor não encontrado! :(" << endl;
    }
    else {
        cout << "valor encontrado! :) posição " << resultado + 1 << endl;
    }

    return 0;
}
void geraMatriz(int vetor[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        vetor[i] = (rand() % 100) + 1;
    }
}
void imprimeMatriz(int vetor[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        cout << setw(5) << vetor[i];
    }
}
void ordenaMatriz(int vetor[MAX_COLUNA], int coluna){
    int auxiliar;
    for(int i = 0; i < (coluna - 1); i++){
        for(int j = 0; j < (coluna - i - 1); j++){
            if(vetor[j] > vetor[j + 1]){
                auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }
}
int buscaBinaria(int vetor[MAX_COLUNA], int chave, int fim){
    int inicio = 0, meio;
    while(inicio <= fim){
        meio = (inicio + fim) / 2;
        if(chave == vetor[meio]){
            return meio;
        }
        else {
            if(chave > vetor[meio]){
                inicio = meio + 1;
            }
            else {
                fim = meio - 1;
            }
        }
    }
    return -1;
}