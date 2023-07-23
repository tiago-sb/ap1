/*
Crie um algoritmo que leia um valor inteiro do teclado na variavel a e atribua esse valor a uma outra variavel,
b. Mostre na tela os valores das duas variaveis.
*/
#include <iostream>

using namespace std;

int main(){
    int a, b;
    cout << "Insira um numero inteiro: ";
    cin >> a;
    cout << "Insira outro numero inteiro: ";
    cin >> b;
    cout << "Valor de 'A': " << a << endl;
    cout << "Valor de 'B' Pre-atribuicao: " << b << endl;
    b = a;
    cout << "Valor de 'A': " << a << endl;
    cout << "Valor de 'B' Pos-atribuicao: " << b << endl;

    return 0;
}
