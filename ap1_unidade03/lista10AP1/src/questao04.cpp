/*
Escreva um programa que recebe 20 valores inteiros positivos e armazena 10 desses valores no
vetor A e 10 no vetor B. Em seguida, o programa preenche um terceiro vetor C de acordo com os
seguintes critérios:
?Ci deverá receber 1 quando Ai for maior que Bi ;
?Ci deverá receber 0 quando Ai for igual a Bi ;
?Ci deverá receber -1 quando Ai for menor que Bi .
Por fim, o programa deve imprimir A, B e C.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

inline int geraNum(){return (rand() % 100) + 1;}
int main(){
	srand(time(0));
	int A[10], B[10], C[10];
	for(int i = 0; i < 10; i++){
		A[i] = geraNum();
		B[i] = geraNum();
		if(A[i] > B[i]){
			C[i] = 1;
		} else if(A[i] < B[i]){
			C[i] = -1;
		} else {
			C[i] = 0;
		}
	}
	cout << "-------------------------" << endl;
	cout << "|   A   |   B   |   C   |" << endl;
	cout << "-------------------------" << endl;
	for(int i = 0; i < 10; i++){
		cout << "|" << setw(5) << A[i] << setw(7) << B[i] << setw(8) << C[i] << setw(4) << "|" << endl;
	}
	cout << "-------------------------" << endl;
	return 0;
}
