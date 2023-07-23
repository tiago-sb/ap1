/*
Faca um programa que pergunte o preco de tres produtos e informe qual produto voce deve
comprar, sabendo que a decisao eh sempre pelo mais barato.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float p[3], m;
    for(int i = 0; i < 3; i++){
        cout << "Insira o valor do " << i + 1 << "o. produto: R$ ";
        cin >> p[i];
    }
    m = ((p[0] + p[1]) - abs(p[0] - p[1]))/2;
    m = ((m + p[2]) - abs(m - p[2]))/2;
    if(m == p[0]){
        cout << fixed << setprecision(2);
        cout << "O produto escolhido deve ser o primeiro: R$ " << m << endl;
    } else if(m == p[1]){
        cout << fixed << setprecision(2);
        cout << "O produto escolhido deve ser o segundo: R$ " << m << endl;
    } else if(m == p[2]){
        cout << fixed << setprecision(2);
        cout << "O produto escolhido deve ser o terceiro: R$ " << m << endl;
    }

    return 0;
}
