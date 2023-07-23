/*
Altere o programa de cálculo do fatorial, permitindo ao usuário calcular o fatorial várias vezes e
limitando o fatorial a números inteiros positivos e menores que 16
*/
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int fat = 1, n;
    cout << "Insira um valor entre 0 e 16: ";
    cin >> n;
    //teste para saber se o número está no intervalo desejado
    //caso não, entrará em um loop até que esteja
    if((n < 0)||(n > 16)){
        while((n < 0)||(n > 16)){
            cout << "não aceitamos este número, insira um valor entre 0 e 16: ";
            cin >> n;
        }
    }
    //cálculo do fatorial
    for(int i = n; i >= 1; i--){
        fat *= i;
    }
    //output com o valor desejado
    cout << fat;

    return 0;
}
