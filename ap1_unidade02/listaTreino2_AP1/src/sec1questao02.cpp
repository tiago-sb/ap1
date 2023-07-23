/*
O mesmo exercício anterior, mas agora a função deverá retornar para uma segunda variável do
programa principal o quadrado do valor passado como argumento. Imprimir o valor calculado
(estando no programa principal).
*/

#include <iostream>
#include <cmath>

using namespace std;

int quadrado(int);
int main(){
    int v, elevado;
    //pedido de valor ao usuário
    cout << "Insira um valor: ";
    cin >> v;
    //variável recebe o valor que foi trabalhado na função quadrado
    elevado = quadrado(v);
    //resultados
    cout << "resultado: " << elevado << endl;

    return 0;
}
int quadrado(int nV){
    return pow(nV, 2);
}
