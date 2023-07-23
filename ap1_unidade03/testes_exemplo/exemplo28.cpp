#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <iomanip>

using namespace std;

const int MAX_COLUNA = 50;
inline int geraNumero(){return (rand() % 100) + 1;}
void geraMatriz(int [MAX_COLUNA], int);
void imprimeMatriz(int [MAX_COLUNA], int);
inline bool crescente(int valor1, int valor2){return valor1 > valor2;}
inline bool descrescente(int valor1, int valor2){return valor1 < valor2;}
void troca(int*, int* );
void bubbleSort(int [], int, bool(*)(int, int));
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int vetor[MAX_COLUNA], coluna, tipoOrdenacao;
    string linha(40, '-');
    //pedido manual de tamanho de vetor [1,50]
    cout << linha << endl;
    do {
        cout << "insira o tamanho do vetor [1,50]: ";
        cin >> coluna;
    } while((coluna < 1)||(coluna > 50));
    //impressão do vetor com o tamanho escolhido manualmente, com valores gerados aleatoriamente
    cout << "vetor gerado: ";
    geraMatriz(vetor, coluna);
    imprimeMatriz(vetor, coluna);
    cout << endl << linha << endl;
    //escolha manual do tipo de ordenação
    do {
        cout << "escolha:\n1 - Ordenação Crescente\n2 - Ordenação Descrescente\nsua escolha: ";
        cin >> tipoOrdenacao;
    } while((tipoOrdenacao < 1)||(tipoOrdenacao > 2));
    (tipoOrdenacao == 1 ? bubbleSort(vetor, coluna, crescente) : bubbleSort(vetor, coluna, descrescente));
    //impressão final do vetor já ordenado
    cout << "matriz ordenada: ";
    imprimeMatriz(vetor, coluna);
    cout << endl << linha << endl;
    return 0;
}
void geraMatriz(int vetor[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        vetor[i] = geraNumero();
    }
}
void imprimeMatriz(int vetor[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        if(i != 0){
            cout << setw(4) << vetor[i];
        }
        else {
            cout << vetor[i];
        }
    }
}
void troca(int* atual, int* proximo){
    int aux = *atual;
    *atual = *proximo;
    *proximo = aux;
}
void bubbleSort(int vetor[], int coluna, bool(*compare)(int , int)){
    for(int i = 0; i < (coluna - 1); i++){
        for(int j = 0; j < (coluna - i - 1); j++){
            if ((*compare)(vetor[j], vetor[j+1])){
                troca(&vetor[j], &vetor[j+1]);
            }
        }
    }
}

