/*
Modifique a fun��o anterior para que ela devolva true se o n�mero recebido for m�ltiplo de 5
e false, caso contr�rio. Modifique o programa para usar adequadamente a fun��o.
*/

#include <iostream>
#include <locale>

using namespace std;

bool testeMult(int);
int main(){
    setlocale(LC_ALL,"portuguese");
    int v;
    cout << "Insira um n�mero: ";
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
