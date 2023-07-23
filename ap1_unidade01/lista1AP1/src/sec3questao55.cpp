/**
Encontrar números primos é uma tarefa difícil. Faça um programa que gera uma lista dos números
primos existentes entre 1 e um número inteiro informado pelo usuário.
*/

#include <iostream>

using namespace std;

int main(){
    int v, cont;
    cout << "Insira um valor natural maior que zero: ";
    cin >> v;
    //laço que priva o usuário de insirir valores não permitidoss
    while((v < 0)){
        cin >> v;
    }
    for(v; v >= 1; v--){
        cont = 0;
        for(int k = 1; k <= v; k++){
            if((v % k == 0)){
                cont++;
            }
        }
        if(cont <= 2){
            cout << v << " ";
        }
    }

    return 0;
}
