/**
Elemento   Valor
       0       0
       1       3

*/

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    //Podemos fazer este tipo de algoritmo com a estrutura array
    int vet1[10] = {0};
    cout << "Elemento" << setw(10) << "Valor" << endl;
    for(int i = 0; i < 10; i++){
        cout << i << setw(13) << vet1[i] << endl;
    }
    cout << endl;
    //podemos pedir para o usuário valores também
    float vet2[4];
    for(int i = 0; i < 4; i++){
        cout << "Insira a posição " << i + 1 << " do vetor(valor Real): ";
        cin >> vet2[i];
    }
    cout << "Elemento" << setw(10) << "Valor" << endl;
    for(int i = 0; i < 4; i++){
        cout << i << setw(13) << vet2[i] << endl;
    }
    return 0;
}
