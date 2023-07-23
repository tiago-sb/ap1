/**
Escreva a função gera, que recebe um valor inteiro n e retorna um valor inteiro entre 0 e n. Quando
não recebe nenhum valor, devolve um inteiro entre 0 e 15.
Escreva um programa que fique solicitando um valor inteiro positivo m para o usuário até que ele
digite -1. Cada vez que um número for informado, a função gera deve ser chamada duas vezes, a
primeira sem argumento e a segunda passando-se m para ela. Os valores gerados em cada chamada
devem ser impressos no programa principal.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <stdlib.h>

using namespace std;

void linha();
int gera(int nM = rand() % 16);
int main(){
    setlocale(LC_ALL,"portuguese");
    int m;

    do {
        linha();
        cout << "insira um valor: ";
        cin >> m;
        linha();
        cout << "Função sem argumento: " << gera() << endl;
        linha();
        cout << "Função com argumento: " << gera(m) << endl;
        gera(m);
    } while(m != -1);

    return 0;
}
void linha(){
    cout << "--------------------------------------------" << endl;
}
int gera(int nM){
    srand(time(0));
    return rand() % nM;
}
