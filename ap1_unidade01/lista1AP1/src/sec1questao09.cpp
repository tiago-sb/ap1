/*
Faca um programa que peca a temperatura em graus Farenheit, transforme e mostre a temperatura
em graus Celsius.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float t;
    cout << "Informe a temperatura atual em Farenheit: ";
    cin >> t;
    cout << fixed << setprecision(1);
    cout << "A temperatura atual em Celsius eh de: " << ((5 * t) - (5 * 32)) / 9 << " graus." << endl;
    return 0;
}
