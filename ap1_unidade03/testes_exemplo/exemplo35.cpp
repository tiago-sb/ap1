#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

const int MAX_COLUNA = 10000;
int geraVetor(int [MAX_COLUNA]);
void imprimeVetor(int [MAX_COLUNA], int);
void bubbleSort(int [MAX_COLUNA], int );
//void frequencia(int [MAX_COLUNA], int [MAX_COLUNA], int);
int main(){
    setlocale(LC_ALL,"portuguese");
    int vetor[MAX_COLUNA], frequencias[MAX_COLUNA], tamanho;
    string linha(20,'-');
    tamanho = geraVetor(vetor);
    cout << linha << endl << "vetor gerado: ";
    imprimeVetor(vetor, tamanho);
    cout << linha << endl;
    cout << "vetor ordenado: ";
    bubbleSort(vetor, tamanho);
    imprimeVetor(vetor, tamanho);
    /**
    cout << "frequência: ";
    frequencia(vetor, frequencias, tamanho);
    */
    return 0;
}
int geraVetor(int vetor[MAX_COLUNA]){
    int i = 0;
    char saida;
    do {
        do {
            cout << "insira a idade do " << i + 1 << "o. aluno [16,120]: ";
            cin >> vetor[i];
        } while((vetor[i] < 16)||(vetor[i] > 120));
        i++;
        cout << "acabaram os alunos (s/n)? ";
        cin >> saida;
    } while(saida != 's');
    return i;
}
void imprimeVetor(int vetor[MAX_COLUNA], int tamanho){
    for(int i = 0; i < tamanho; i++){
        (i != 0 ? cout << setw(4) << vetor[i] : cout << vetor[i]);
    }
    cout << endl;
}
void bubbleSort(int vetor[MAX_COLUNA], int tamanho){
    for(int i = 0; i < (tamanho - 1); i++){
        for(int j = 0; j < (tamanho - i - 1); j++){
            if(vetor[j] > vetor[j + 1]){
                int aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}
/**
void frequencia(int vetor[MAX_COLUNA], int frequencia[MAX_COLUNA], int tamanho){
    for(int i = 0; i < tamanho; i++){
        frequencia[vetor[i]]++;
    }
    for(int i = 0; i < tamanho; i++){
        cout << "pos" << i << frequencia[i] << endl;
    }
}
*/
