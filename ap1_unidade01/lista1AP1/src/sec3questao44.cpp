/*
Desenvolva um gerador de tabuada, capaz de gerar a tabuada de multiplicar de qualquer número
inteiro de 1 a 10.
*/
#include <iostream>

using namespace std;

int main(){
    int i;
    cin >> i;
    cout << endl;

    for(int j = 1;j <= 10;j++){
            if (j != 10){
                cout << i << " x 0" << j << ": " << j * i;
                cout << endl;
            }
            else {
               cout << i << " x " << j << ": "<< j * i;
               cout << endl;
            }
    }

    return 0;
}
