/*
Desenvolva um algoritmo que determine se um cliente excedeu o limite de seu cartao de credito. Estao
disponiveis os seguintes dados do cliente:
- Numero do cartao (inteiro);
- Saldo no principio do mes;
- Total gasto no mes;
- Total pago no mes;
- Limite do cartao.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

void titulo();
void resultado();
int main(){
    int nCart;
    float saldo, gasto, lim, pago;
    string nome, mes;
    titulo();
    cout << "Insira o seu nome: ";
    getline(cin , nome);
    cout << "Insira o numero do seu cartao: ";
    cin >> nCart;
    system("cls");
    titulo();
    cout << endl;
    cout << "Bem-Vindo(a) ao nosso sistema, amigo(a) " << nome << endl;
    cout << "Insira o mes que estamos: ";
    cin >> mes;
    cout << "Insira seu limite: R$ ";
    cin >> lim;
    cout << "Informe seu saldo no inicio do mes de " << mes << ": ";
    cin >> saldo;
    cout << "Informe o quanto voce gastou neste mes: R$ ";
    cin >> gasto;
    cout << "Insira o quanto voce pagou a divida: R$ ";
    cin >> pago;
    resultado();
    if(saldo == 0){
        cout << "Fatura atual: R$ " << abs(gasto - pago);
    } else if((pago + saldo - gasto) < 0){
        cout << "seu Saldo atual eh de: R$ " << 0 * saldo << endl;
        cout << "Voce estourou seu saldo do cartao! " << endl;
        lim = lim + pago - abs(saldo - gasto);
            cout << "Limite atual do cartao: " << lim << endl;
            cout << "Fatura atual: R$ " << abs(pago - abs(saldo - gasto));
    } else if((pago + saldo - gasto) >= 0){
        cout << "seu Saldo atual eh de: R$ " << saldo - gasto << endl;
        cout << "Seu limite atual eh de: R$ " << lim << endl;
    }

     return 0;
}
void titulo(){
    cout << "----------------------------------" << endl;
    cout << "|Sistema do seu cartao de credito|" << endl;
    cout << "----------------------------------" << endl;
}
void resultado(){
    cout << endl;
    cout << "-----------------------------------" << endl;
    cout << "|             resultado           |" << endl;
    cout << "-----------------------------------" << endl;
}

