/*
Escreva uma função que receba um valor inteiro como parâmetro e devolva 1, caso o valor passado
seja par; e 0, caso contrário. Escreva um programa que receba do teclado um número inteiro positivo
e informe se o número é par ou ímpar. Seu programa deve usar a função.
*/

#include <iostream>

using namespace std;

void linha();
int testeParidade(int);
int main(){
    int n;
    //laço que pede um valor inteiro maior que 0
    do {
        cout << "Insira um valor inteiro positivo: ";
        cin >> n;
    } while(n <= 0);
    //área do print
    linha();
    cout << "Resultado: " << testeParidade(n) << endl;
    linha();

    return 0;
}
void linha(){
    cout << "------------------------------" << endl;
}
int testeParidade(int nN){
    if((nN % 2) == 0){
        return 1;
    }
    else {
        return 0;
    }
}
