/*
Faca um programa que pergunte quanto voce ganha por hora e o numero de horas trabalhadas no
mes. Calcule e mostre o total do seu salario no referido mes, sabendo-se que sao descontados 11%
para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faca um programa que mostre:
(a) salario bruto;
(b) quanto pagou ao INSS;
(c) quanto pagou ao sindicato;
(d) o salario liquido (salario bruto - descontos).
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // sPH = salario por hora ; hTN = horas trabalhadas no mes ; sI = salario Inicial
    float sPH, hTN, sI;
    cout << "Insira o quanto voce ganha por hora: ";
    cin >> sPH;
    cout << "Insira o seu numero de horas trabalhadas no mes: ";
    cin >> hTN;
    sI = sPH * hTN;
    cout << fixed << setprecision(1);
    cout << endl << "Seu salario bruto eh de: R$ " << sI << endl;
    cout << "Voce pagara ao INSS: R$ " << sI * 0.08 << endl;
    cout << "Voce pagara ao sindicato: R$ " << sI * 0.05 << endl;
    cout << "Seu salario liquido sera de: R$ " << sI - ((sI * 0.11) + (sI * 0.08) + (sI * 0.05)) << endl;

    return 0;
}
