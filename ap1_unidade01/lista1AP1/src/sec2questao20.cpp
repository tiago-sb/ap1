/*
Faca um programa que leia tres numeros e mostre o maior e o menor deles.
*/
#include <iostream>

using namespace std;

int main(){
    double n1, n2, n3, M, m;
    cout << "Insira o primeiro valor: ";
    cin >> n1;
    cout << "Insira o segundo valor: ";
    cin >> n2;
    cout << "Insira o terceiro valor: ";
    cin >> n3;
    M = ((n1 + n2) + abs(n1 - n2))/2;
    m = ((n1 + n2) - abs(n1 - n2))/2;
    cout << endl << "O maior valor eh: " << ((M + n3) + abs(M - n3))/2 << endl;
    cout << "O menor valor eh: " << ((m + n3) - abs(m - n3))/2 << endl;

    return 0;
}
