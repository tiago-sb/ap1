/**
Escreva uma função recursiva que receba um
valor inteiro positivo n e retorne o valor do
somatório:

Escreva um programa que use a função.
*/

#include <iostream>
#include <locale>

using namespace std;

int somaRec(int i){
    if(i == 0){
        return 0;
    }
    else {
        return (i + somaRec(i - 1));
    }

}
int main(){
    setlocale(LC_ALL,"portuguese");
    int i;

    do{
        cout << "Insira um número inteiro positivo: ";
        cin >> i;
    }while(i < 0);

    cout << "Resultado do somatório: " << somaRec(i) << endl;

    return 0;
}
