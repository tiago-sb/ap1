#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

void telaInicial();
void linha();
int jogada();
void mostraPonto(int, int, int);
int pontos(int, int, int);
int trocaJog(int);
int main(){
	setlocale(LC_ALL,"portuguese");
	srand(time(0));
	int i = 1, dd1, dd2, dd3, ponto, op;


	do {
        telaInicial();
		while(true){
			linha();
			cout << "Vez do Jogador " << i << endl;
			dd1 = jogada();
			dd2 = jogada();
			dd3 = jogada();
			ponto = pontos(dd1, dd2, dd3);
			mostraPonto(dd1, dd2, dd3);
			if(ponto == 21){
				cout << "Jogador " << i << " ganhou! :) " << endl;
				break;
			}
			if(ponto == 7){
				cout << "Jogador " << i << " perdeu! :( " << endl;
				break;
			}
			linha();
			i = trocaJog(i);
		}
		linha();
		cout << "Escolha:\n[0] - sair\n[1] - continuar\n: ";
		cin >> op;
		system("cls");
	} while( op != 0);

	cout << "Adeus..." << endl;
	return 0;
}
void telaInicial(){
	cout << "-------------------------------------" << endl;
	cout << "   B E M - V I N D O  A O  J O G O   " << endl;
	cout << "-------------------------------------" << endl;
}
void linha(){
	cout << "-------------------------------------" << endl;
}
int jogada(){
	return 1 + rand() % 7;
}
void mostraPonto(int dd1, int dd2, int dd3){
	cout << "resultado: " << dd1 << " + " << dd2 << " + " << dd3 << ": " << dd1 + dd2 + dd3 << endl;
}
int pontos(int nDd1, int nDd2, int nDd3){
	int ponto;
	ponto = nDd1 + nDd2 + nDd3;
	return ponto;
}
int trocaJog(int i){
	if(i == 1){
		return 2;
	}
	return 1;
}
