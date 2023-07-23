/**
Crie um programa que declare duas variáveis (inteiro e real), atribua valores para elas e crie dois
ponteiros, cada um apontando para uma destas variáveis. Mostre na tela: O valor e o endereço de
memória das variáveis, o valor do ponteiro, o endereço do ponteiro e o valor apontado pelo
ponteiro.
Quais destes valores são iguais? Justifique.
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
    cout << "valor da variável inteira: " << valor1 << "\nvalor da variável real: " << valor2 << endl;
    cout << linha << endl;
    cout << "endereço da variável inteira: " << valor1Ponteiro << "\nendereço da variável real: " << valor2Ponteiro << endl;
    cout << linha << endl;
    cout << "valor do ponteiro inteiro: " << *valor1Ponteiro << "\nvalor do ponteiro real: " << *valor2Ponteiro << endl;
    cout << linha << endl;
    cout << "o valor dos ponteiros são iguais aos das variáveis pois os ponteiros receberam o endereço de suas devidas variáveis " << endl;
    cout << linha << endl;

    return 0;
}
