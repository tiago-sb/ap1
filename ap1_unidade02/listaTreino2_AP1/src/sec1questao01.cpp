/*
Escreva um programa em C++ que leia do teclado um valor inteiro e armazene este valor em uma
variável. Este valor deverá ser passado como argumento para uma função denominada
quadrado. Esta função imprime na tela o quadrado do valor passado como argumento.
*/

#include <iostream>
#include <cmath>

using namespace std;

void quadrado(int);
int main(){
    int v;
    //pedido de valor ao usuário
    cout << "Insira um valor: ";
    cin >> v;
    //chamamento da função
    quadrado(v);

    return 0;
}
void quadrado(int nV){
    cout << "resultado: " << pow(nV, 2) << endl;
}
