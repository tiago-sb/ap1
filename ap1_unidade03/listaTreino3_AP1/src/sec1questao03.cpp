/**
Escreva um programa que solicita 50 valores inteiros ao usuário, armazena esses valores em um arranjo
chamado vet1. Depois, copia o conteúdo desse arranjo para um segundo arranjo chamado vet2. O
programa deve imprimir os dois arranjos na tela.
*/

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

const int MAX_COLUNA = 500;
int copiaMatriz(int [MAX_COLUNA], int [MAX_COLUNA], int);
void imprimeMatriz(int [MAX_COLUNA], int [MAX_COLUNA], int);
int main(){
    setlocale(LC_ALL,"portuguese");
    int vetor1[MAX_COLUNA], vetor2[MAX_COLUNA], coluna;

    do {
        cout << "insira o tamanho do vetor [1,500]: ";
        cin >> coluna;
    } while((coluna < 1)||(coluna > 500));

    for(int i = 0; i < coluna; i++){
        cout << "posição " << i + 1 << " do vetor: ";
        cin >> vetor1[i];
    }
    copiaMatriz(vetor1, vetor2, coluna);
    imprimeMatriz(vetor1, vetor2, coluna);

    return 0;
}
int copiaMatriz(int vetor1[MAX_COLUNA], int vetor2[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        vetor2[i] = vetor1[i];
    }
}
void imprimeMatriz(int vetor1[MAX_COLUNA], int vetor2[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        cout << "| " << setw(3) << *(vetor1 + i) << setw(4) << *(vetor2 + i) << setw(3) << "|" << endl;
    }
}
