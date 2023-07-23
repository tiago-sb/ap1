/*
Faca um programa que peca o raio de um circulo, e calcule e mostre sua area.
*/
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    double r;
    const double pi = 3.1415;
    cout << "digite o raio do circulo: ";
    cin >> r;
    cout << fixed << setprecision(1);
    cout << "area: " << pi * pow(r,2) << endl;
    return 0;
}
