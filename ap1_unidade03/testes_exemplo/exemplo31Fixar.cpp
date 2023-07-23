#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int MAX_COLUNA = 100;
inline bool crescente(int valor1, int valor2){return valor1 > valor2;}
inline bool descrescente(int valor1, int valor2){return valor1 < valor2;}
void troca(int*, int* );
inline int geraNumero(){return (rand() % 100) + 1;}
void geraMatriz(int [MAX_COLUNA], int);
void imprimeMatriz(int [MAX_COLUNA], int);
void bubbleSort(int [MAX_COLUNA], int, bool(*compara)(int, int));
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int vetor[MAX_COLUNA], coluna, op;
    string linha(50,'-');
    cout << linha << endl;
    do {
        cout << "insira o tamanho do vetor [1,100]: ";
        cin >> coluna;
    } while((coluna < 1)||(coluna > 100));
    cout << linha << endl;
    cout << "matriz gerada: ";
    geraMatriz(vetor, coluna);
    imprimeMatriz(vetor, coluna);
    cout << endl << linha << endl;
    do {
        cout << "defina o tipo de ordenação\n1 - Ordenação Crescente\n2 - Ordenação Decrescente\nsua opção: ";
        cin >> op;
    } while((op < 1)||(op > 2));
    (op == 1 ? bubbleSort(vetor, coluna, crescente) : bubbleSort(vetor, coluna, descrescente));
    cout << linha << endl;
    imprimeMatriz(vetor, coluna);
    cout << endl << linha << endl;

    return 0;
}
void troca(int* valor1, int* valor2){
    int auxiliar = *valor1;
    *valor1 = *valor2;
    *valor2 = auxiliar;
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
void bubbleSort(int vetor[MAX_COLUNA], int coluna, bool(*compara)(int, int)){
    for(int i = 0; i < (coluna - 1); i++){
        for(int j = 0; j < (coluna - i - 1); j++){
            if((*compara)(vetor[j], vetor[j + 1])){
                (troca)(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}
