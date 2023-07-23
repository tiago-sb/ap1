/*
A série de Fibonacci é formada pela sequência 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Faça um programa
capaz de gerar a série até o n-ésimo termo.
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
