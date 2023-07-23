/*
Faca um programa que leia tres numeros e mostre o maior deles.
*/
#include <iostream>

using namespace std;

int main(){
    float n1, n2, n3, m;
    cout << "Insira o primeiro valor: ";
    cin >> n1;
    cout << "Insira o segundo valor: ";
    cin >> n2;
    cout << "Insira o terceiro valor: ";
    cin >> n3;
    m = ((n1 + n2) + abs(n1 - n2)) / 2;
    m = ((m + n3) + abs(m - n3)) / 2;
    cout << "o valor maior eh o: " << m << endl;

    return 0;
}
