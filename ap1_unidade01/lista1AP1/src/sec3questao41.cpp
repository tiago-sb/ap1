/*
Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.
*/
#include <iostream>

using namespace std;

int main(){
    int i = 1;

    while (i <= 50){
        if((i % 2) != 0){
            cout << i << endl;
        }
        i++;
    }

    return 0;
}
