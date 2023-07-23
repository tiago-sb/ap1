/*
Faca um programa que pergunte quanto voce ganha por hora e o numero de dias trabalhados no
mes. Calcule e mostre o total do seu salario no referido mes.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // sPH = salario por hora ; dT = quantidade de dias trabalhados ; hF = hora fixa de trabalho .
    double sPH, dT, hF;
    cout << "Informe o quanto voce ganha por hora: ";
    cin >> sPH;
    cout << "Informe a sua quantidade de dias de trabalhos neste mes: ";
    cin >> dT;
    cout << "Informe sua carga horaria fixa de trabalho: ";
    cin >> hF;
    cout << fixed << setprecision(2);
    cout << "Voce deve receber: R$ " << (sPH * hF * dT) << " neste mes";
    return 0;
}
