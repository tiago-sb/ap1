/**
Escreva um programa que recebe 20 valores inteiros positivos e armazena 10 desses valores no
vetor A e 10 no vetor B. Em seguida, o programa preenche um terceiro vetor C de acordo com os
seguintes critérios:
 -Ci deverá receber 1 quando Ai for maior que Bi ;
 -Ci deverá receber 0 quando Ai for igual a Bi ;
 -Ci deverá receber -1 quando Ai for menor que Bi .
Por fim, o programa deve imprimir A, B e C.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <iomanip>

using namespace std;

inline int geraNum(){return (rand() % 10) + 1;}
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int A[10], B[10], C[10];
    cout << "A" << setw(5) << "B" << setw(5) << "C" << endl;
    for(int i = 0; i < 10; i++){
        A[i] = geraNum();
        B[i] = geraNum();
        if(A[i] > B[i]){
            C[i] = 1;
        } else if(A[i] < B[i]){
            C[i] = -1;
        } else {
            C[i] = 0;
        }
        cout << A[i] << setw(5) << B[i] << setw(5) << C[i] << endl;
    }

    return 0;
}
