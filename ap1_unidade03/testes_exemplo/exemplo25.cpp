/**
Voc� saberia apontar a diferen�a entre os comandos abaixo, assumindo que Ptr1 e Ptr2 s�o
ponteiros?
Ptr1 = Ptr2; e *Ptr1 = *Ptr2;
Fa�a um programa contendo a linha: int x=5, y=7, *Ptr1=&x, *Ptr2=&y; que verifique
uma das situa��es acima e em seguida altere pra verificar a outra situa��o.
*/
#include <iostream>
#include <locale>

using namespace std;

int main( ){
    setlocale(LC_ALL,"portuguese");
    string linha(50,'-');
    cout << "parte 1" << endl << linha << endl;
    cout << "Voc� saberia apontar a diferen�a entre os comandos abaixo, assumindo que Ptr1 e Ptr2 s�o ";
    cout << "ponteiros?\nPtr1 = Ptr2; e *Ptr1 = *Ptr2;" << endl;
    cout << "resposta: na atribui��o 'Ptr1 = Ptr2' a vari�vel Ptr1 est� recebendo o valor contido na vari�vel Ptr2." << endl;
    cout << "A atribui��o '*Ptr1 = *Ptr2' seria um erro de compila��o, pois *Ptr1 teria que receber o endere�o(&) de Ptr2 para " << endl;
    cout << "poder acessar a posi��o e valor que Ptr2 possui. " << endl;
    cout << linha << endl << "parte 2" << endl;
    int x = 5, y = 7, *Ptr1, *Ptr2;
    *Ptr1 = &x;
    *Ptr2 = &y;

    return 0;
}
/**
Fa�a um programa contendo a linha: int x=5, y=7, *Ptr1=&x, *Ptr2=&y; que verifique
uma das situa��es acima e em seguida altere pra verificar a outra situa��o.
*/
