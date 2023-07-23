/**
Fazer uma função que receba dois inteiros como argumentos e retorne o valor da divisão de cada
um deles por 10.
Note que além dos inteiros que serão operados, a função deverá receber dois argumentos por
referência a fim de armazenar os resultados das divisões por 10.
Escreva um programa que chame a função.
*/

#include <iostream>
#include <iomanip>

using namespace std;

void linha();
void divide(int &, int &);
int main(){
    int n, m;

    cout << "Insira o valor 1: ";
    cin >> n;
    cout << "Insira o valor 2: ";
    cin >> m;
    linha();
    divide(n, m);
    cout << fixed << setprecision(2);
    cout << "Valor 1 por 10: " << n << endl;
    cout << "Valor 2 por 10: " << m << endl;
    linha();

    return 0;
}
void linha(){
    cout << "----------------------------------" << endl;
}
void divide(int &nN, int &nM){
    nN = nN / 10;
    nM = nM / 10;
}
