/**
Implemente uma fun��o pesquisaLinear que receba um vetor e uma chave como argumentos;
fa�a uma pesquisa linear no arranjo para encontrar a chave; e retorne sua posi��o no arranjo ou
retorne -1 se ela n�o for encontrada. Fa�a um programa que gere 500 n�meros inteiros e
armazene-os num vetor. Chame a fun��o pesquisaLinear para encontrar uma chave dada.
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
        cout << "valor n�o encontrado! :( " << endl;
    }
    else {
        cout << "valor encontrado! :) posi��o [" << busca + 1 << "]" << endl;
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
