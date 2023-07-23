/**
Faca um programa para uma loja de tintas. O programa devera pedir o tamanho da area a ser
pintada, em metros quadrados. Considere que a cobertura da tinta eh de 1 litro para cada 3 metros
quadrados e que a tinta eh vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usuario a
quantidades de latas de tinta a serem compradas e o preco total.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float area, l = 18;
    cout << "Insira a area do espaco a ser pintada em metros quadrados: ";
    cin >> area;
    while(l < area){
        l = l + 18;
    }
    if((l/18) != 1){
        cout << "| Voce vai precisar de: " << l/18 << " latas. " << endl;
    } else {
        cout << "| Voce vai precisar de: " << l/18 << " lata. " << endl;
    }
    cout << fixed << setprecision(2);
    cout << "| Preco total de: R$ " << (l / 18) * 80 << endl;

    return 0;
}
