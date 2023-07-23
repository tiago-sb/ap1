/*
Faca um programa que converta metros para centimetros.
*/
#include <iostream>

using namespace std;

int main(){
    double n;
    cout << "[METROS] => [CENTIMETROS]" << endl;
    cout << "digite um numero em metros: ";
    cin >> n;
    cout << "resultado dele em centimetros: " << n * 100 << " cm" << endl;
    return 0;
}
