/**
Você saberia apontar a diferença entre os comandos abaixo, assumindo que Ptr1 e Ptr2 são
ponteiros?
Ptr1 = Ptr2; e *Ptr1 = *Ptr2;
Faça um programa contendo a linha: int x=5, y=7, *Ptr1=&x, *Ptr2=&y; que verifique
uma das situações acima e em seguida altere pra verificar a outra situação.
*/
#include <iostream>
#include <locale>

using namespace std;

int main( ){
    setlocale(LC_ALL,"portuguese");
    string linha(50,'-');
    cout << "parte 1" << endl << linha << endl;
    cout << "Você saberia apontar a diferença entre os comandos abaixo, assumindo que Ptr1 e Ptr2 são ";
    cout << "ponteiros?\nPtr1 = Ptr2; e *Ptr1 = *Ptr2;" << endl;
    cout << "resposta: na atribuição 'Ptr1 = Ptr2' a variável Ptr1 está recebendo o valor contido na variável Ptr2." << endl;
    cout << "A atribuição '*Ptr1 = *Ptr2' seria um erro de compilação, pois *Ptr1 teria que receber o endereço(&) de Ptr2 para " << endl;
    cout << "poder acessar a posição e valor que Ptr2 possui. " << endl;
    cout << linha << endl << "parte 2" << endl;
    int x = 5, y = 7, *Ptr1, *Ptr2;
    *Ptr1 = &x;
    *Ptr2 = &y;

    return 0;
}
/**
Faça um programa contendo a linha: int x=5, y=7, *Ptr1=&x, *Ptr2=&y; que verifique
uma das situações acima e em seguida altere pra verificar a outra situação.
*/
