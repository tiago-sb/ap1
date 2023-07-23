/**
Escreva um programa que recebe 20 valores inteiros positivos e os armazena em um vetor. Em seguida
verifica se todos os elementos do vetor são pares. Se pelo menos um elemento for ímpar, o programa
deve imprimir FALSO. Caso contrário, deve retornar VERDADEIRO.
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

inline int geraNumero(){return (rand() % 100) + 1;}
void geraVetor(int [20]);
void imprimeVetor(int [20]);
bool vetorPar(int [20], int &);
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int vetorA[20], chave;
    bool resultadoTeste;
    geraVetor(vetorA);
    imprimeVetor(vetorA);
    resultadoTeste = vetorPar(vetorA, chave);
    cout << endl;
    if(resultadoTeste == true){
        cout << "vetor de pares! ";
    }
    else {
        cout << "vetor contêm um valor impar na posição [" << chave + 1 << "] do vetor! ";
    }

    return 0;
}
void geraVetor(int vetorA[20]){
    for(int i = 0; i < 20; i++){
        vetorA[i] = geraNumero();
    }
}
void imprimeVetor(int vetorA[20]){
    for(int i = 0; i < 20; i++){
        cout << vetorA[i] << " ";
    }
}
bool vetorPar(int vetorA[20], int &chave){
    for(int i = 0; i < 20; i++){
        if(vetorA[i] % 2 != 0){
            chave = i;
            return false;
        }
    }
    return true;
}
