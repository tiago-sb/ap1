/*
Escreva uma fun��o que receba um valor inteiro como par�metro e devolva 1, caso o valor
passado seja par e 0, caso contr�rio. Escreva um programa que receba do teclado um n�mero
inteiro positivo e informe se o n�mero � par. Seu programa deve usar a fun��o.
*/

#include <iostream>

using namespace std;

int testeParidade(int);
int main(){
    int v;
    //pedido de valor ao usu�rio
    cout << "Insira um valor inteiro: ";
    cin >> v;
    //resultado
    cout << "==========================" << endl;
    cout << "     R E S U L T A D 0    " << endl;
    cout << " |1| - PAR -- |0| - IMPAR " << endl;
    cout << "==========================" << endl;
    cout << "resposta: " << testeParidade(v) << endl;

    return 0;
}
int testeParidade(int nV){
    if(nV % 2 == 0){
        return 1;
    }
    else {
        return 0;
    }
}
