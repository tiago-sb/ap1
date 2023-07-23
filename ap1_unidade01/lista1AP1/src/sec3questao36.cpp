/*
Supondo que a populacao de um pais A seja da ordem de 80000 habitantes com uma taxa anual de
crescimento de 3% e que a população de B seja 200000 habitantes com uma taxa de crescimento
de 1.5%, faça um programa que calcule e escreva o numero de anos necessários para que a
populacao do país A ultrapasse ou iguale a populacao do pais B, mantidas as taxas de crescimento.
*/
#include <iostream>

using namespace std;

int main(){
    int anos = 0, pop1 = 80000, pop2 = 200000;
    while(pop1 <= pop2){
        pop1 = pop1 + (pop1 * 0.03);
        pop2 = pop2 + (pop2 * 0.015);
        anos++;
    }
    cout << anos;
    return 0;
}
