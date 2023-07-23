#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int MAX_COLUNA = 500;
inline int geraNumero(){return (rand() % 10) + 1;}
void geraVetor(int [MAX_COLUNA], int);
void imprimeVetor(int [MAX_COLUNA], int);
void bubbleSort(int [MAX_COLUNA], int);
int buscaBinaria(int [MAX_COLUNA], int, int);
void maiorFrequencia(int [MAX_COLUNA], int [MAX_COLUNA], int);
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int coluna, vetor[MAX_COLUNA], frequencia[MAX_COLUNA] = {0}, chave, resultado;
    cout << "insira o tamanho do vetor: ";
    cin >> coluna;
    cout << "vetor gerado: ";
    geraVetor(vetor, coluna);
    imprimeVetor(vetor, coluna);
    cout << endl << "vetor gerado ordenado: ";
    bubbleSort(vetor, coluna);
    imprimeVetor(vetor, coluna);
    /**cout << endl << "insira um valor para procurarmos no vetor: ";
    cin >> chave;
    resultado = buscaBinaria(vetor, coluna, chave);
    if(resultado == -1){
        cout << "valor n foi encontrado! " << endl;
    }
    else{
        cout << "valor encontrado! posicao [" << resultado + 1 << "] do vetor! " << endl;
    }*/
    cout << "frequência: ";
    maiorFrequencia(vetor, frequencia, coluna);


    return 0;
}
void geraVetor(int vetor[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        vetor[i] = geraNumero();
    }
}
void imprimeVetor(int vetor[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        if(i != 0){
            cout << setw(4) << vetor[i];
        }
        else {
            cout << vetor[i];
        }
    }
    cout << endl;
}
void bubbleSort(int vetor[MAX_COLUNA], int coluna){
    for(int i = 0; i < (coluna - 1); i++){
        for(int j = 0; j < (coluna - i - 1); j++){
            if(vetor[j] > vetor[j + 1]){
                int auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }
}
int buscaBinaria(int vetor[MAX_COLUNA], int coluna, int chave){
    int inicio = 0, meio, fim = (coluna - 1);
    while(inicio <= fim){
        meio = (inicio + fim) / 2;
        if(vetor[meio] == chave){
            return meio;
        }
        else {
            (vetor[meio] > chave ? fim = meio - 1 : inicio = meio + 1);
        }
    }
    return -1;
}
void maiorFrequencia(int vetor[MAX_COLUNA], int frequencia[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        frequencia[vetor[i]]++;
    }
    cout << endl;
    for(int i = 0; i < coluna; i++){
        cout << "pos" << i << " " << frequencia[i] << " ";
    }
}
