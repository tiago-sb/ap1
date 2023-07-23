/*
Faca um programa que peça a temperatura em graus Celsius, transforme e mostre em graus
Farenheit.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double t;
    cout << "Informe a temperatura atual em graus Celsius: ";
    cin >> t;
    cout << fixed << setprecision(1);
    cout << "A temperatura atual em graus Farenheit eh de: " << ((32 * 5) + (9 * t))/5;
    return 0;
}
