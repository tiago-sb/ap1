/*
Escreva um programa que encontre o menor inteiro positivo n que satisfaça as seguintes condições:
n/3 = i inteiros e resto 2, para um i qualquer;
Use um laço que mantenha se repetindo até que as condições acima sejam verdadeiras (isto é,
enquanto pelo menos uma delas não for satisfeita, a repetição deve continuar).
*/
#include <iostream>

using namespace std;

int main(){
    int i, n = 0;
    cin >> i;

    while(true){
        if((n / 3 == i)&&(n % 3 == 2)){
            break;
        }
        n++;
    }

    cout << n;

    return 0;
}
