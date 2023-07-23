/*
sortei uma carta (1 ... 10) em um dos naipes
([3] - copas, [1] - ouros, [4] - paus, [2] - espadas).
E jogue em duplas, a carta maior conta ponto. A dupla que
chegar em 5 pontos 1 ganha.
Empate não conta ponto!
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

void telaInicial();
int main(){
    srand(time(0));
    setlocale(LC_ALL,"portuguese");
    int op;
    do {
        telaInicial();
        cout << "Deseja sair?\n[1] - continuar\n[0] - sair\n: ";
        cin >> op;
        system("cls");
    } while(op != 0);

    return 0;
}
void telaInicial(){
    cout << "-------------------------------------" << endl;
    cout << "   B E M - V I N D 0  A O  J O G O   " << endl;
    cout << "-------------------------------------" << endl;
}
