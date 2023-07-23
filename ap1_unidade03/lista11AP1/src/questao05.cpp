/**
Refaça o exercício (3) implementando uma busca binária no lugar da linear, utilizando o vetor
ordenado pela função bubbleSort (ou bubbleSortMelhor), isto é, no programa, leia a chave,
crie o vetor, ordene-o (com bubbleSort ou bubbleSortMelhor) e busque a chave (com
buscaBinaria).
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <iomanip>

using namespace std;

const int MAX_COLUNA = 500;
inline int geraNumero(){return (rand() % 1000) + 1;}
inline void linha(){cout << "------------------------------------------" << endl;}
void geraMatriz(int [MAX_COLUNA], int);
void imprimeMatriz(int [MAX_COLUNA], int);
void bubbleSortMelhor(int [MAX_COLUNA], int);
int buscaBinaria(int [MAX_COLUNA], int, int);
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int vetor[MAX_COLUNA], coluna, chave, resultadoBusca;
    do {
        cout << "insira o tamanho do vetor(entre 1 e 500): ";
        cin >> coluna;
    } while((coluna < 1)||(coluna > 500));
    geraMatriz(vetor, coluna);
    linha();
    cout << "matriz gerada original: " << endl;
    imprimeMatriz(vetor, coluna);
    cout << endl;
    linha();
    cout << "matriz ordenada de forma crescente: " << endl;
    bubbleSortMelhor(vetor, coluna);
    imprimeMatriz(vetor, coluna);
    cout << endl;
    linha();
    cout << "insira um número para procurarmos no vetor: ";
    cin >> chave;
    resultadoBusca = buscaBinaria(vetor, coluna, chave);
    if(resultadoBusca == (-1)){
        cout << "valor não se encontra no vetor! :(" << endl;
    }
    else {
        cout << "valor se encontra no vetor! :)\nposição: [" << resultadoBusca + 1 << "]" << endl;
    }


    return 0;
}
void geraMatriz(int vetor[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        vetor[i] = geraNumero();
    }
}
void imprimeMatriz(int vetor[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        cout << setw(5) << vetor[i];
    }
}
void bubbleSortMelhor(int vetor[MAX_COLUNA], int coluna){
    int aux;
    for(int i = 0; i < (coluna - 1); i++){
        for(int j = 0; j < (coluna - i - 1); j++){
            if(vetor[j] > vetor[j + 1]){
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}
int buscaBinaria(int vetor[MAX_COLUNA], int coluna, int chave){
    int inicio = 0, meio, fim = coluna - 1;
    while(inicio <= fim){
        meio = (inicio + fim) / 2;
        if(vetor[meio] == chave){
            return meio;
        }
        else {
            if(vetor[meio] > chave){
                fim = meio - 1;
            }
            else {
                inicio = meio + 1;
            }
        }
    }
    return -1;
}
