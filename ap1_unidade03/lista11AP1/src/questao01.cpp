/**
Implemente uma função pesquisaLinear que receba um vetor e uma chave como argumentos;
faça uma pesquisa linear no arranjo para encontrar a chave; e retorne sua posição no arranjo ou
retorne -1 se ela não for encontrada. Faça um programa que gere 500 números inteiros e
armazene-os num vetor. Chame a função pesquisaLinear para encontrar uma chave dada.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <iomanip>

using namespace std;

inline int geraNumero(){return(rand() % 1000) + 1;}
int pesquisaLinear(int [500], int);
int imprimeMatriz(int [500]);
inline linha(){cout << "--------------------------------------------------" << endl;}
int main(){
    srand(time(0));
    setlocale(LC_ALL,"portuguese");
    int vetor[500], chave, busca;
    linha();
    cout << "matriz original: " << endl;
    for(int i = 0; i < 500; i++){
        vetor[i] = geraNumero();
    }
    imprimeMatriz(vetor);
    cout << endl;
    linha();
    cout << "chave: ";
    cin >> chave;
    busca = pesquisaLinear(vetor, chave);
    if(busca == (-1)){
        cout << "valor não encontrado! :( " << endl;
    }
    else {
        cout << "valor encontrado! :) posição [" << busca + 1 << "]" << endl;
    }

    return 0;
}
int imprimeMatriz(int vetor[500]){
    for(int i = 0; i < 500; i++){
        cout << setw(5) << vetor[i];
    }
}
int pesquisaLinear(int vetor[500], int chave){
    for(int i = 0; i < 500; i++){
        if(chave == vetor[i]){
            return i;
        }
    }
    return -1;
}
