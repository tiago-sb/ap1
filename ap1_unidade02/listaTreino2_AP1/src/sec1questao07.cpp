/**
Implementar a fun��o inverte que recebe um n�mero unsigned int como par�metro e retorna
este n�mero escrito ao contr�rio. Ex: 431 <-> 134.
*/

#include <iostream>

using namespace std;

void linha();
int inverte(unsigned int);
int main(){
    unsigned int v;
    cout << "Insira um valor: ";
    cin >> v;
    linha();
    cout << inverte(v);

	return 0;
}
void linha(){
    cout << "---------------------------------\n";
}
int inverte(unsigned int nV){
    unsigned int valorInvertido = 0;
    do {
        valorInvertido = (valorInvertido * 10) + (nV % 10);
        nV /= 10;
    } while(nV > 0);

    return valorInvertido;
}
