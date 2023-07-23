/*
Faca um programa que calcule a area de um quadrado, em seguida mostre o dobro desta area para
o usuario (que dado o programa tera que pedir ao usuario?).
*/
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double l;
    cout << "digite o valor do lado do quadrado: ";
    cin >> l;
    cout << "area: " << pow(l,2) << endl;
    cout << "dobro da area: " << 2 * pow(l,2) << endl;
    return 0;
}

