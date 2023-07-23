/*
Altere o programa anterior para mostrar no final a soma dos números.
*/
#include <iostream>

using namespace std;

int main(){
    int i, j, cont = 0;
    cin >> i >> j;
    cout << endl;

    if (i < j){
        i++;
        while(i < j){
            cont += i;
            i++;
        }
    }
    else {
        i--;
        while(i > j){
            cont += i;
            i--;
        }
    }

    cout << cont;

    return 0;
}
