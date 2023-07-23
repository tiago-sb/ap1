/*
Use uma estrutura do-while cuja condição seja sempre FALSO e um comando break para sair da
repetição quando n for encontrado:
*/
#include <iostream>

using namespace std;

int main(){
    int i, n = 0;
    cin >> i;

    do {
        if((n / 3 == i)&&(n % 3 == 2)){
            break;
        }
        n++;
    } while(true);

    cout << n;

    return 0;
}
