/*
Faça um programa que receba dois números inteiros e mostre os números inteiros que estão no
intervalo compreendido por eles.
*/
#include <iostream>

using namespace std;

int main(){
    int i, j;
    cin >> i >> j;
    cout << endl;

    if (i < j){
        i++;
        while(i < j){
            cout << i << " ";
            i++;
        }
    }
    else {
        i--;
        while(i > j){
            cout << i << " ";
            i--;
        }
    }

    return 0;
}
