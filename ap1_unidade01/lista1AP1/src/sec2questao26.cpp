/*
Tendo como dados de entrada a altura e o genero de uma pessoa, faca um programa que calcule
seu peso ideal, utilizando as formulas abaixo, sabendo que a altura eh dada em m e o peso em Kg.
Para homens: peso ideal = (72.7 * altura) - 58
Para mulheres: peso ideal = (62,1 * altura) - 44,7

*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string gen;
    float alt;
    cout << "Insira seu genero: " << endl;
    cout << "Digite [h], caso seja homem: " << endl;
    cout << "Digite [f], caso seja mulher: " << endl;
    cout << ": ";
    cin >> gen;
    cout << "Insira sua altura em metros: ";
    cin >> alt;
    cout << fixed << setprecision(1);
    if((gen == "m")||(gen == "M")||(gen == "masculino")||(gen == "Masculino")){
        cout << "Seu peso ideal deve ser: " << (72.7 * alt) - 58 << " KG " << endl;
    } else if((gen == "f")||(gen == "F")||(gen == "feminino")||(gen == "Feminino")){
        cout << "Seu peso ideal deve ser: " << (62.1 * alt) - 44.7 << " KG " << endl;
    }

    return 0;
}
