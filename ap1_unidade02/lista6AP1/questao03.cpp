/*
Escreva uma função que conte de até 1.000.000.000, isto é, a função deve conter um laço for com
um contador que vai de 1 até 1.000.000.000. Escreva um programa que receba do teclado um valor,
chame a função e então mostre o valor digitado.
*/

#include <iostream>
#include <locale>

using namespace std;

void linha();
void contar(int);
int pedNum(int);
int main(){
    setlocale(LC_ALL,"portuguese");
    int v, v1;
    //parte 1 da questão
    cout << "Questão 3 - parte 1 " << endl;
    //laço que pede um número para contagem
    do {
        cout << "contar ate: ";
        cin >> v;
    } while(v <= 0);
    //impressões
    linha();
    contar(v);
    linha();
    //parte 2 da questão
    cout << "Questão 3 - parte 2 " << endl;
    cout << "Insira um número inteiro: ";
    cin >> v1;
    //impressões
    linha();
    cout << "Você digitou... " << pedNum(v1) << endl;
    linha();

    return 0;
}
void linha(){
    cout << "--------------------------------" << endl;
}
void contar(int nI){
    for(int i = 1; i <= nI; i++){
        if(i == nI){
            cout << i << endl;
        }
        else {
            cout << i << " ";
        }
    }
}
int pedNum(int nV1){
    return nV1;
}
