/*
Fa�a um programa em C++ para armazenar uma matriz e em seguida:
a. imprimir os elementos da matriz, linha por linha � cuide para que a formata��o seja
adequada;
b. solicitar do usu�rio um n�mero de linha, l, e um n�mero de coluna, c, e mostrar o
elemento correspondente.
c. solicitar do usu�rio um n�mero de linha l e imprimir os elementos desta linha.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <locale>

using namespace std;

inline int geraNum(){return (rand() % 10) + 1;}
inline void linha(){cout << "-----------------------------------" << endl;}
int main(){
	setlocale(LC_ALL,"portuguese");
	srand(time(0));
	int linhas, colunas;
	cout << "letra A" << endl;
	cout << "Insira o n�mero de linhas: ";
	cin >> linhas;
	cout << "Insira o n�mero de colunas: ";
	cin >> colunas;
	int vet1[linhas][colunas];
	linha();
	cout << "matriz[" << linhas << "][";
	cout << colunas << "]" << endl;
	linha();
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			vet1[i][j] = geraNum();
			cout << setw(4) << vet1[i][j] << setw(4);
		}
		cout << endl;
	}
	linha();
	
	return 0;
}
