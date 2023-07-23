/*
Escreva uma fun��o recursiva que receba um valor inteiro
positivo n, e imprima a contagem progressiva come�ando
de 0 at� este valor. Por exemplo, se o usu�rio digitar 5, o
programa ir� imprimir 0, 1, 2, 3, 4, 5.
Escreva um programa que use a fun��o.
*/

#include <iostream>

using namespace std;

void imprimeRecCres(int i, int j){
	if(i == j){
		cout << j << ". ";
	}
	else {
		cout << j << ", ";
		imprimeRecCres(i, j + 1);	
	}
	
}
int main(){
	int i, j = 0;
	do {
		cout << "Insira um valor inteiro positivo: ";
		cin >> i;
	} while(i < 0);
	imprimeRecCres(i, j);
	return 0;
}
