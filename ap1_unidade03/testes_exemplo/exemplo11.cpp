/**
Escreva um programa que leia 20 números inteiros e os armazene em
um vetor. Em seguida,

(a) calcule e imprima a média desses valores.
(b) imprima os valores negativos.
(c) conte quantas vezes o número 5 é encontrado no vetor e imprima
essa quantidade.
(d) imprima cada posição no vetor em que o número 10 é
encontrado.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

inline int geraNumero(){return (rand() % 10) + 1;}
inline void linha(){cout << "-----------------------------------" << endl;}
int main(){
    srand(time(0));
    int numeros[20], media = 0, numCinco = 0;
    for(int i = 0; i < 20; i++){
        numeros[i] = geraNumero();
        if(i < 10){
            cout << "posicao " << i << " do vetor  -> " << numeros[i] << endl;
        }
        else{
            cout << "posicao " << i << " do vetor -> " << numeros[i] << endl;
        }
        if(numeros[i] == 5){
            numCinco++;
        }
        media += numeros[i];
    }
    cout << endl;
    media = media / 20;
    linha();
    cout << "media: " << media << endl;
    linha();
    cout << "Quantidade de numeros 5: " << numCinco << endl;
    linha();
    cout << "posicoes dos numeros 10 -> " << endl;
    for(int i = 0; i < 20; i++){
        if(numeros[i] == 10){
            cout << setw(3) <<"posicao " << i << " do vetor" << endl;
        }
    }
    linha();

    return 0;
}
