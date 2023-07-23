/*
Faça um programa que calcule o mostre a média aritmética de n valores.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int cont = 0;
    float v, sV = 0;
    char sair;

    do {
        cout << "Insira um valor: ";
        cin >> v;
        sV += v;
        cont++;
        cout << "Sair? ";
        cin >> sair;
    } while(sair != 's');

    system("cls");
    cout << fixed << setprecision(1);
    cout << "Media: " << sV / cont << endl;

    return 0;
}
