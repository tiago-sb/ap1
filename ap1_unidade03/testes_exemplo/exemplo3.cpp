/**
Escreva uma fun��o recursiva que receba um valor inteiro
positivo n, e imprima a contagem progressiva come�ando
de 0 at� este valor. Por exemplo, se o usu�rio digitar 5, o
programa ir� imprimir 0, 1, 2, 3, 4, 5.
*/

#include <iostream>

using namespace std;

void imprimeRecCres(int num1, int num2){
    if(num2 == num1){
        cout << num2 << ". ";
    }
    else {
        cout << num2 << ", ";
        imprimeRecCres(num1, num2 + 1);
    }
}
int main(){
    unsigned int num1, num2 = 0;

    do {
        cout << "Insira um valor inteiro positivo: ";
        cin >> num1;
    } while(num1 < 0);

    imprimeRecCres(num1, num2);

    return 0;
}
