/*
Escreva um programa que recebe 20 valores inteiros positivos
e os armazena em um vetor. Em seguida, verifica se todos os elementos
do vetor s�o pares. O programa ent�o deve imprimir
uma mensagem informando se
todos os elementos do vetor s�o pares ou n�o.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <stdlib.h>

using namespace std;

inline int geraNum(){return (rand() % 100) + 1;}
inline void linha(){cout << endl << "--------------------------------" << endl;}
int main(){
	setlocale(LC_ALL,"portuguese");
	srand(time(0));
	int vet[20], cont = 0, op;
    do {
        cout << "Escolha sua op��o:\n[1] - digitar os n�meros\n[2] - gerar os n�meros automaticamente\n: ";
        cin >> op;
        system("cls");
    } while((op < 1)||(op > 2));

	switch(op){
        case 1:
            for(int i = 0; i < 20; i++){
                cout << "Insira a posi��o " << i + 1 << " do vetor: ";
                cin >> vet[i];
                if(vet[i] % 2 == 0){
                    cont++;
                }
            }
            system("cls");
            break;
        case 2:
            for(int i = 0; i < 20; i++){
                vet[i] = geraNum();
                if(vet[i] % 2 == 0){
                    cont++;
                }
            }
	}
	linha();
    for(int i = 0; i < 20; i++){
        cout << vet[i] << " ";
    }
	linha();
	if(cont == 20){
		cout << "Todos s�o pares! ";
	}
	else {
		cout << "Nem Todos s�o pares! ";
	}
    linha();

	return 0;
}
