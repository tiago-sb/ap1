/*
Faca um programa que peca 2 numeros inteiros e um numero real. Calcule e mostre:
(a) o produto do dobro do primeiro com metade do segundo;
(b) a soma do triplo do primeiro com o terceiro.
(c) o terceiro elevado ao cubo.
*/
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    int n1, n2;
    float n3;
    cout << "insira o valor de um numero do tipo inteiro: ";
    cin >> n1;
    cout << "insira o valor de um segundo numero do tipo inteiro: ";
    cin >> n2;
    cout << "insira o valor de um terceiro numero do tipo real: ";
    cin >> n3;
    cout << endl;
    cout << fixed << setprecision(1);
    cout << "(a) - resultado do produto do dobro do primeiro numero com metade do segundo numero: " << (2 * n1) * (n2 * 0.5) << endl;
    cout << "(b) - resultado da soma do triplo do primeiro com o terceiro: " << (3 * n1) + n3 << endl;
    cout << "(c) - resultado do terceiro elevado ao cubo: " << pow(n3,3) << endl;

    return 0;
}
