/*
Tendo como dados de entrada a altura de um homem, faca um programa que calcule seu peso ideal,
usando a seguinte formula: peso ideal = (72.7 * altura) - 58 , onde a altura eh dada em metros
e o peso em Kg.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // pI = peso ideal ; alt = altura;
    double alt, pI;
    cout << "insira o valor de sua altura em metros: ";
    cin >> alt;
    cout << fixed << setprecision(1);
    cout << "O peso ideal para sua altura eh de: " << (alt * 72.7) - 58 << " Kg.";

    return 0;
}
