/*
Escreva um programa em C++ que leia do teclado um valor inteiro e armazene este valor em uma
vari�vel. Este valor dever� ser passado como argumento para uma fun��o denominada
quadrado. Esta fun��o imprime na tela o quadrado do valor passado como argumento.
*/

#include <iostream>
#include <cmath>

using namespace std;

void quadrado(int);
int main(){
    int v;
    //pedido de valor ao usu�rio
    cout << "Insira um valor: ";
    cin >> v;
    //chamamento da fun��o
    quadrado(v);

    return 0;
}
void quadrado(int nV){
    cout << "resultado: " << pow(nV, 2) << endl;
}
