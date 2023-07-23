/*
Escreva uma função recursiva de nome potencia( ),
que receba dois inteiros positivos, i e j, e retorne i
elevado a j.

Escreva um programa que use a função.
*/

#include <iostream>

using namespace std;

// 2^3=2*2*2
int potRec(int i, int j){
	if(j == 0){
		return 1;
	}
	else{ 
		return (i * potRec(i, j - 1));
	}
}
int main(){
	int i, j;
	
	do {
		cout << "Insira o valor da base: ";
		cin >> i;
	} while(i < 0);
	
	do {
		cout << "Insira o valor do expoente: ";
		cin >> j;
	} while(j < 0);
	
	cout << "Resultado: " << i << " ^ " << j << " = " << potRec(i , j) << endl;
	
	return 0;
}
