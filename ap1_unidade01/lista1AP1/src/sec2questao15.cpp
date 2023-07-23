/*
Faca um programa que peca dois numeros e imprima o maior deles.

*/
#include <iostream>

using namespace std;

int main(){
    float n1, n2;
    cout << "Insira o primeiro valor: ";
    cin >> n1;
    cout << "Insira o segundo valor: ";
    cin >> n2;
    cout << "O maior numero eh o: " << ((n1 + n2) + abs(n1 - n2)) / 2 << endl;

    return 0;
}
