/*
Faca um programa que peca um inteiro entre zero e dez. Mostre uma mensagem caso o valor seja
invalido e continue pedindo ate que o usuario informe um valor valido.
*/
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int i = -1;
    while((i < 0)||(i > 10)){
        cout << "Insira um valor inteiro entre 0 e 10: ";
        cin >> i;
    }
    cout << "OK, voce digitou o valor: " << i << " que está no intervalo correto!";
    return 0;
}
