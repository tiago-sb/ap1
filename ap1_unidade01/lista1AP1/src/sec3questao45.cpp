/*
Faça um programa que peça dois números, base e expoente, calcule e mostre o primeiro número
elevado ao segundo. Não utilize a função de potência da linguagem.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i, cont = 0;
    float j, res = 1;
    cin >> j >> i;
    cout << endl;

    if (i > 0){
        while(cont < i){
            res *= j;
            cont++;
        }
        cout << res;
    }
    else {
        while(cont < abs(i)){
            res *= j;
            cont++;
        }
        cout << fixed << setprecision(3);
        cout << 1 / res;
    }

    return 0;
}
