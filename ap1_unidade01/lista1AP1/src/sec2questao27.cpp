/**
Joao Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o
rendimento diario de seu trabalho. Toda vez que ele traz um peso de peixes maior que o
estabelecido pelo regulamento de pesca do estado de Sao Paulo (50 quilos) deve pagar uma multa
de R$ 4,00 por quilo excedente.
Joao precisa que voce faca um programa que leia a variavel peso (peso de peixes) e calcule o
excesso. Grave na variavel excesso a quantidade de quilos alem do limite e na variavel multa o
valor da multa que Joao devera pagar. Imprima os dados do programa com as mensagens
adequadas.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float peso, limite = 50;
    cout << "Insira o peso do peixe em KG: ";
    cin >> peso;
    if(peso > limite){
        peso -= limite;
        cout << fixed << setprecision(2);
        cout << "Sua multa pelo peixe sera de: R$ " << 4 * peso << endl;
    } else {
        cout << "Voce esta isento de multas pelo seu peixe pescado!" << endl;
    }
    return 0;
}
