/*
O mesmo exerc�cio anterior, mas agora a fun��o dever� retornar para uma segunda vari�vel do
programa principal o quadrado do valor passado como argumento. Imprimir o valor calculado
(estando no programa principal).
*/

#include <iostream>
#include <cmath>

using namespace std;

int quadrado(int);
int main(){
    int v, elevado;
    //pedido de valor ao usu�rio
    cout << "Insira um valor: ";
    cin >> v;
    //vari�vel recebe o valor que foi trabalhado na fun��o quadrado
    elevado = quadrado(v);
    //resultados
    cout << "resultado: " << elevado << endl;

    return 0;
}
int quadrado(int nV){
    return pow(nV, 2);
}
