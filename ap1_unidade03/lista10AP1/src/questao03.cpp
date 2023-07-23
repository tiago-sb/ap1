/*
Modifique o exercício anterior de forma que o conteúdo de vet1 seja copiado para vet2 de forma
invertida. Por exemplo:
vet1 = 1 5 0 4 9... vet2 = ...9 4 0 5 1
O programa deve imprimir vet1 e vet2.
*/

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

inline int geraNum(){return(rand() % 100) + 1;}
int main(){
    setlocale(LC_ALL,"portuguese");
	int vet1[50], vet2[50];
	for(int i, j = 49; i < 50; i++, j--){
		cout << "Insira a posição " << i + 1 << " do vetor: ";
		cin >> vet1[i];
		vet2[j] = vet1[i];
	}
    cout << "vetor 1  |  vetor 2" << endl;
	cout << "-------------------" << endl;
	for(int i = 0; i < 50; i++){
		cout << setw(5) << vet1[i] << setw(5) << "|" << setw(7) << vet2[i] << endl;
	}

	return 0;
}
