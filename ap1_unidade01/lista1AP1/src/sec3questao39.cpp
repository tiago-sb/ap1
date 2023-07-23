/*
Faça um programa que leia 5 números e informe o maior número.
*/
#include <iostream>

using namespace std;

int main(){
    int i = 0;
    float num, maior;
    cin >> num;
    maior = num;

    while (i < 4){
        cin >> num;
        if(maior < num){
            maior = num;
        }
        i++;
    }

    system("cls");
    cout << maior;

    return 0;
}
