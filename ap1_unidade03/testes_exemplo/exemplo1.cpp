/**
Faça uma função recursiva que realize a
multiplicação entre dois valores inteiros positivos
sem utilizar o operador *.

Escreva um programa que use a fução.
*/

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// 2 * 3 = 2 + 2 + 2
// 6 * 2 = 6 + 6
int multiplica(int i, int j){
    if(j == 0){
        return 0;
    }
    else {
        return (i + multiplica(i, j - 1));
    }
}
int main(){
    setlocale(LC_ALL,"portuguese");
    int i, j;
    cout << "Insira o valor 1: ";
    cin >> i;
    cout << "Insira o valor 2: ";
    cin >> j;
    cout << setw(2) << "Resultado: (" <<i << " * " << j << ") = " << multiplica(i, j) << endl;
    
    return 0;
}
