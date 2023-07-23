/**
Escreva um programa que recebe 20 valores inteiros positivos e os armazena em um vetor. Em
seguida, verifica se todos os elementos do vetor são pares. O programa então deve imprimir uma
mensagem informando se todos os elementos do vetor são pares ou não.
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

inline int geraNum(){return (rand() % 100) + 1;}
int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(0));
    int vet[20], cont = 0;

    for(int i = 0; i < 20; i++){
        vet[i] = geraNum();
        cout << vet[i] << " ";
        if(vet[i] % 2 == 0){
            cont++;
        }
    }
    cout << endl;
    if(cont == 20){
        cout << "Todos os números são par! ";
    }
    else {
        cout << "Nem todos os números são pares! ";
    }

    return 0;
}
