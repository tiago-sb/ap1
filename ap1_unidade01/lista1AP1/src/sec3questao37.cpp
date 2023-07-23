/*
Altere o programa anterior, permitindo ao usuário informar as populações e as taxas de crescimento
iniciais. Valide a entrada e permita repetir a operação
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int pop1, pop2, anos = 0;
    float tx1, tx2;
    cin >> pop1 >> tx1 >> pop2 >> tx2;
    if(pop1 < pop2){
        while(pop1 <= pop2){
            pop1 += (pop1 * tx1);
            pop2 += (pop2 * tx2);
            anos++;
        }
    }
    else {
        while(pop2 <= pop1){
            pop1 += (pop1 * tx1);
            pop2 += (pop2 * tx2);
            anos++;
        }
    }
    system("cls");
    cout << anos << endl;
    return 0;
}
