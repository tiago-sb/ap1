/*
Faca um programa que leia tres numeros e mostre-os em ordem decrescente.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float p[3],me ,Ma;
    for(int i = 0;i < 3;i++){
        cout << "Insira o " << i + 1 << "o. numero: ";
        cin >> p[i];
    }
    me = ((p[0] + p[1]) - abs(p[0] - p[1]))/2;
    me = ((me + p[2]) - abs(me - p[2]))/2;
    Ma = ((p[0] + p[1]) + abs(p[0] - p[1]))/2;
    Ma = ((Ma + p[2]) + abs(Ma - p[2]))/2;
    if((p[0] > me) && (p[0] < Ma)){
        cout << fixed << setprecision(1);
        cout << Ma << endl << p[0] << endl << me;
    } else if((p[1] > me) && (p[1] < Ma)){
        cout << fixed << setprecision(1);
        cout << Ma << endl << p[1] << endl << me;
    } else {
        cout << fixed << setprecision(1);
        cout << Ma << endl << p[2] << endl << me;
    }

    return 0;
}
