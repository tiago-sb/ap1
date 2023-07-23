/*
Faça uma função recursiva que realize a
multiplicação entre dois valores inteiros positivos
sem utilizar o operador *.

Escreva um programa que use a função.
*/

#include <iostream>

using namespace std;

// 2 * 3 = 2 + 2 + 2
int multRec(int i, int j){
    if(j == 0){
        return j;
    }
    else {
        return (i + multRec(i, j - 1));
    }

}
int main(){
    int i, j;
    do {
        cout << "Insira o valor 1: ";
        cin >> i;
    } while(i < 0);
    do {
        cout << "Insira o valor 2: ";
        cin >> j;
    } while(j < 0);
    cout << i << " * " << j << " = " << multRec(i, j) << endl;

    return 0;
}
