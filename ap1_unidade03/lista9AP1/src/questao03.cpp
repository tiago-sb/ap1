/*
Escreva uma função recursiva que receba um
valor inteiro positivo n, e imprima a contagem
regressiva a partir deste valor. Por exemplo, se o
usuário digitar 5, o programa irá imprimir 5, 4, 3,
2, 1, 0.

Escreva um programa que use a função.
*/

#include <iostream>

using namespace std;

void imprimeRecDec(int i){
	if(i == 0){
		cout << i << ". ";
	}
	else {
		cout << i << ", ";
		imprimeRecDec(i - 1);
	}
}
int main(){
	int i;
	do {
		cout << "Insira um valor inteiro positivo: ";
		cin >> i;
	} while(i < 0);
	imprimeRecDec(i);
	
	return 0;
}
