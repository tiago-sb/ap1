/*
Faca um programa que peca um valor e mostre na tela se o valor eh positivo ou negativo.
*/
#include <iostream>

using namespace std;

int main(){
    float v;
    cout << "Insira um valor: ";
    cin >> v;
    if(v > 0){
        cout << v << " eh um valor positivo. " << endl;
    } else {
        cout << v << " eh um valor negativo. " << endl;
    }
    return 0;
}
