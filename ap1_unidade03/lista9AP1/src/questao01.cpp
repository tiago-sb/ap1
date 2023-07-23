/**
Escreva uma fun��o recursiva que receba um
valor inteiro positivo n e retorne o valor do
somat�rio:

Escreva um programa que use a fun��o.
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
        cout << "Insira um n�mero inteiro positivo: ";
        cin >> i;
    }while(i < 0);

    cout << "Resultado do somat�rio: " << somaRec(i) << endl;

    return 0;
}
