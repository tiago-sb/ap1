/*
Faca um programa que peca as 3 notas obtidas num semestre e mostre a media.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double vet[3], som = 0;

    for(int i = 0; i < 3; i++){
        cout << "digite sua nota obtida na " << i + 1 << "a. unidade: ";
        cin >> vet[i];
        som += vet[i];
    }
    cout << fixed << setprecision(1);
    cout << "sua media final foi: " << som / 3;
    return 0;
}
