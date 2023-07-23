/**
Leia 10 números inteiros e os armazene em um vetor. Em seguida:
(a) Imprima os elementos do vetor, do primeiro ao último
(b) Imprima os elementos do vetor, do último ao primeiro
(c) Encontre e mostre o maior elemento do vetor
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <iomanip>

using namespace std;

inline int geraNum(){ return rand();}
int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));
    int vet[10], maior;
    for(int i = 0; i < 10; i++){
        vet[i] = geraNum();
    }
    cout << "-----------------------------\n " << setw(4) << "(A)" << endl;
    for(int i = 0; i < 10; i++){
        cout << setw(3) << i << "a. posicao : " << vet[i] << endl;
    }
    cout << "-----------------------------\n " << setw(4) << "(B)" << endl;
    for(int i = 9; i >= 0; i--){
        cout << setw(3) << i << "a. posicao : " << vet[i] << endl;
    }
    cout << "-----------------------------\n " << setw(4) << "(C)" << endl;
    maior = vet[0];
    for(int i = 0; i < 10; i++){
        if(maior < vet[i]){
            maior = vet[i];
        }
    }
    cout << "  O maior numero do vetor eh o elemento: " << maior << endl;

    return 0;
}
