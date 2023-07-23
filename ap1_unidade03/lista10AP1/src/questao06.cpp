/**
Na matem�tica � comum utilizar matrizes de n�meros. Tais matrizes podem ser usadas para
v�rios prop�sitos e a �lgebra linear fornece a teoria necess�ria para sua manipula��o.
Dada uma matriz M (4 X 4), voc� deve fazer um programa para armazenar a matriz e chamar as
seguintes fun��es:
(A) - imprimeMatriz � imprime a matriz armazenada;
(B) - multK � l� uma constante k, e armazena em uma segunda matriz, Mk, a resultante do
produto 4*M. Isto �, cada elemento de Mk � igual ao elemento correspondente de M
multiplicado por 4. No programa principal, ap�s chamar multK, imprima Mk (com a ajuda
de imprimeMatriz). Veja que para que isso seja poss�vel, Mk deve ser declarada em main
e passada para multK como argumento.
*/

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

inline void linha(){cout << "---------------------------" << endl;}
void imprimeMatriz(int Matriz[4][4]){
	linha();
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if((Matriz[i][j] >= 1000)||(Matriz[i][j] <= -1000)){
                cout << setw(5) << Matriz[i][j] << setw(30);
			}
			else {
                cout << setw(5) << Matriz[i][j] << setw(15);
			}
		}
		cout << endl;
	}
	linha();
}
void multK(int Matriz[4][4], float k){
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
            Matriz[i][j] = Matriz[i][j] * k;
		}
	}
}
int main(){
    setlocale(LC_ALL,"portuguese");
	int Matriz[4][4];
	float k;
	cout << "letra A | " << endl;
	linha();
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
            cout << "Insira a coordenada [" << i + 1 << "," << j + 1 << "] do vetor: ";
            cin >> Matriz[i][j];
		}
		cout << endl;
	}
    imprimeMatriz(Matriz);
	cout << "letra B | " << endl;
    cout << "Insira o valor da constante: ";
    cin >> k;
	linha();
	multK(Matriz, k);
    imprimeMatriz(Matriz);

	return 0;
}


