/*
Escreva um programa que solicita 50 valores inteiros ao usuário, armazena esses valores em um
arranjo chamado vet1. Depois, copia o conteúdo desse arranjo para um segundo arranjo chamado
vet2. O programa deve imprimir os dois arranjos na tela.
*/

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
	int vet1[50], vet2[50];
	for(int i = 0; i < 50; i++){
		cout << "Insira a posição " << i + 1 << " do vetor: ";
		cin >> vet1[i];
		vet2[i] = vet1[i];
	}
    cout << "vetor 1  |  vetor 2" << endl;
	cout << "-------------------" << endl;
	for(int i = 0; i < 50; i++){
		cout << setw(5) << vet1[i] << setw(5) << "|" << setw(7) << vet2[i] << endl;
	}

	return 0;
}
