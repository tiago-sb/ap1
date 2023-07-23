/*
Faça um programa que gere a série de Fibonacci até que o valor seja maior que 500
*/
#include <iostream>

using namespace std;

int main(){
    long int n, a = 1, b = 1, aux;
    cin >> n;
    cout << a << " " << b << " ";

    for(int i = 3;i <= n; i++){
        aux = a + b;
        cout << aux << " ";
        a = b;
        b = aux;
    }

    return 0;
}
