/*
Altere o programa de cálculo dos números primos, informando, caso o número não seja primo, os
números pelos quais ele é divisível.
*/
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int n, cont = 0;
    cin >> n;

    if(n < 0){
        while(n < 0){
            cin >> n;
        }
    }

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }

    return 0;
}
