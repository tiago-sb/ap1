/*
Modifique a função anterior para que ela devolva true se o número recebido for múltiplo de 5 e
false, caso contrário. Modifique o programa para usar adequadamente a função.
*/

#include <iostream>

using namespace std;

void linha();
bool testeMult(int);
int main(){
    int n;

    do {
        cout << "Insira um valor inteiro positivo: ";
        cin >> n;
    } while(n <= 0);

    linha();
    cout << "Resultado: " << boolalpha << testeMult(n) << endl;
    linha();

    return 0;
}
void linha(){
    cout << "------------------------------" << endl;
}
bool testeMult(int nN){
    if(nN % 5 == 0){
        return true;
    }
    else {
        return false;
    }
}
