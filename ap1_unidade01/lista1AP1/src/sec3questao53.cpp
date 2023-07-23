/*
 Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. Um
número primo é aquele que é divisível somente por ele mesmo e por 1.
*/
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int n, cont = 0;
    cin >> n;

    if((n <= 0)){
        while(n <= 0){
            cin >> n;
        }
    }

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }

    if(cont <= 2){
        cout << "primo";
    }
    else {
        cout << "não é primo";
    }

    return 0;
}
