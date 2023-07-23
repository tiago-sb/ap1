/*
Faca um programa que leia um numero e exiba o dia correspondente da semana. (1-Domingo, 2-
Segunda, etc.), se digitar outro valor deve aparecer valor invalido.
*/
#include <iostream>

using namespace std;

int main(){
    int d;
    cout << "Insira um numero e daremos o seu correspondente conforme a tabela abaixo: " << endl;
    cout << "NUMERO 1 - DOMINGO..: " << endl;
    cout << "NUMERO 2 - SEGUNDA..: " << endl;
    cout << "NUMERO 3 - TERCA....: " << endl;
    cout << "NUMERO 4 - QUARTA...: " << endl;
    cout << "NUMERO 5 - QUINTA...: " << endl;
    cout << "NUMERO 6 - SEXTA....: " << endl;
    cout << "NUMERO 7 - SABADO:..: " << endl;
    cout << ": ";
    cin >> d;
    switch(d){
        case 1:
            cout << "DOMINGO." << endl;
            break;
        case 2:
            cout << "SEGUNDA." << endl;
            break;
        case 3:
            cout << "TERCA." << endl;
            break;
        case 4:
            cout << "QUARTA." << endl;
            break;
        case 5:
            cout << "QUINTA." << endl;
            break;
        case 6:
            cout << "SEXTA." << endl;
            break;
        case 7:
            cout << "SABADO." << endl;
            break;
        default:
            cout << "VALOR INVALIDO." << endl;
    }

    return 0;
}
