#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int vetor[50], vetor2[4] = {10, 20, 30, 40}, *vetorPonteiro, *vetorPonteiro2;
    //vetorPonteiro = vetor;
    vetorPonteiro = vetor;
    for(int i = 0; i < 50; i++){
        vetor[i] = rand() % 10;
        if(i != 0){
            cout << setw(2) << *(vetorPonteiro + i);
        }
        else {
            cout << *(vetorPonteiro + i);
        }
    }
    cout << endl;
    vetorPonteiro2 = vetor2;
    for(int i = 0, j = 10; i < 4; i++){
        cout << *(vetorPonteiro2 + i) << " ";
    }
    cout << endl;
    int exA = 10, exB = 3, exC;
    int *pontA, **pontB;
    pontA = &exA;
    pontB = &pontA;
    cout << **pontB + exB;

    return 0;
}
