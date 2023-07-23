/*
Modifique a função anterior para que ela devolva true se o número recebido for múltiplo de 5
e false, caso contrário. Modifique o programa para usar adequadamente a função.
*/

#include <iostream>
#include <locale>

using namespace std;

bool testeMult(int);
int main(){
    setlocale(LC_ALL,"portuguese");
    int v;
    cout << "Insira um número: ";
    cin >> v;
    cout << "resultado: " << boolalpha << testeMult(v) << endl;

    return 0;
}
bool testeMult(int nV){
    if(nV % 5 == 0){
        return true;
    }
    else {
        return false;
    }

}
