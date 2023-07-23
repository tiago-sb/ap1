/*
Faça um programa que calcule o valor total investido por um colecionador em sua coleção de CDs e
o valor médio gasto em cada um deles. O usuário deverá informar a quantidade de CDs e o valor
pago em cada um.
*/

#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main() {
    setlocale(LC_ALL,"portuguese");
    int qntCds;
    float valor, smValor = 0;
    cout << "Insira a quantidade de Cds comprados: ";
    cin >> qntCds;
    //laço que priva o usuário de entrar com um valor inválido
    while((qntCds < 0)){
        cout << "Valor Inválido! Tente novamente: ";
        cin >> qntCds;
    }
    //laço que calcula o valor do investimento
    for(int i = 1; i <= qntCds; i++){
        cout << "Insira o valor gasto no " << i << "o. Cd: ";
        cin >> valor;
        smValor += valor;
        cout << endl;
    }
    //informando ao usuário o total gasto, e a média por cada aquisição
    system("cls");
    cout << fixed << setprecision(2);
    cout << "Você gastou R$ " << smValor << " neste investimento" << endl;
    cout << "Uma média de R$ " << smValor / qntCds << " por Cd " << endl;

    return 0;
}
