/**
Modifique o exercício anterior de forma que o conteúdo de vet1 seja copiado para vet2 de forma
invertida. Por exemplo:
vet1 = 1 5 0 4 9... vet2 = ...9 4 0 5 1
O programa deve imprimir vet1 e vet2.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

inline int geraNum(){return (rand() % 10) + 1;}
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int vet1[50], vet2[50], j = 0;
    for(int i = 0; i < 50; i++){
        vet1[i] = geraNum();
    }
    for(int i = 49; i >= 0; i--){
        vet2[i] = vet1[j];
        j++;
    }
    for(int i = 0; i < 50; i++){
        if(vet1[i] < 10){
            cout << "vetor 1: " << vet1[i] << "  |   vetor 2: " << vet2[i] << endl;
        }
        else {
            cout << "vetor 1: " << vet1[i] << " |   vetor 2: " << vet2[i] << endl;
        }
    }

    return 0;
}
