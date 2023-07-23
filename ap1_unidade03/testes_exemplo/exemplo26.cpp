/**
Crie um programa que declare duas vari�veis (inteiro e real), atribua valores para elas e crie dois
ponteiros, cada um apontando para uma destas vari�veis. Mostre na tela: O valor e o endere�o de
mem�ria das vari�veis, o valor do ponteiro, o endere�o do ponteiro e o valor apontado pelo
ponteiro.
Quais destes valores s�o iguais? Justifique.
*/

#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int valor1, *valor1Ponteiro;
    double valor2, *valor2Ponteiro;
    string linha(30, '-');
    cout << linha << endl;
    cout << "insira um valor inteiro: ";
    cin >> valor1;
    cout << "insira um valor real: ";
    cin >> valor2;
    cout << linha << endl;
    valor1Ponteiro = &valor1;
    valor2Ponteiro = &valor2;
    cout << "valor da vari�vel inteira: " << valor1 << "\nvalor da vari�vel real: " << valor2 << endl;
    cout << linha << endl;
    cout << "endere�o da vari�vel inteira: " << valor1Ponteiro << "\nendere�o da vari�vel real: " << valor2Ponteiro << endl;
    cout << linha << endl;
    cout << "valor do ponteiro inteiro: " << *valor1Ponteiro << "\nvalor do ponteiro real: " << *valor2Ponteiro << endl;
    cout << linha << endl;
    cout << "o valor dos ponteiros s�o iguais aos das vari�veis pois os ponteiros receberam o endere�o de suas devidas vari�veis " << endl;
    cout << linha << endl;

    return 0;
}
