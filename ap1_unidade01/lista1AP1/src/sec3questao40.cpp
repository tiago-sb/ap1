/*
Faça um programa que leia 5 números e informe a soma e a média dos números
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int cont = 0;
    float num, sNum = 0;

    while(cont < 5){
        cin >> num;
        sNum += num;
        cont++;
    }

    cout << fixed << setprecision(1);
    cout << sNum / cont;

    return 0;
}
