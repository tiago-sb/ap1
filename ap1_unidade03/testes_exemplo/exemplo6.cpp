/*

*/

#include <iostream>

using namespace std;

int main(){
    // todos os valores do vetor ser�o 0
    int a[5] = {0};
    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    // posi��o 1 = 3. Restante igual a 0
    int b[5] = {3};
    for(int i = 0; i < 5; i++){
        cout << b[i] << " ";
    }
    cout << endl;
    // posi��o 1 = 3. Posi��o 2 = 50. Posi��o 3 = 100. Restante igual a 0
    int c[5] = {3, 50, 100};
    for(int i = 0; i < 5; i++){
        cout << c[i] << " ";
    }

    return 0;
}
