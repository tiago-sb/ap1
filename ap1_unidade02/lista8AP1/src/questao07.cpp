/**
Escreva uma função gabarito multiplos, com tipo de retorno void que recebe três parâmetros:
soma, x, e n. Os dois primeiros parâmetros devem ter o mesmo tipo, o qual será definido na
chamada da função (um coringa). O terceiro parâmetro será sempre inteiro. soma é passado por
referência e os demais argumentos, por valor. Essa função irá computar:

soma = 1 + x + 2x + 3x + … + nx
Escreva um programa que chame a função passando para ela os seguintes argumentos. O
programa deve imprimir o valor de soma para cada caso.
Caso 1. x 1 = 2, n 1 = 10 (soma = 111)
Caso 2. x 2 = 3.5, n 2 = 15 (soma = 421)
*/

#include <iostream>
#include <locale>

using namespace std;

template <class t, class s>
t multiplos(t &soma, t x, s n){
    for(int i = 1; i <= n; i++){
        soma += x * i;
    }
}
void linha();
int main(){
    setlocale(LC_ALL,"portuguese");
    float soma = 1, x;
    int n;
    cout << "Insira um valor(real ou inteiro): ";
    cin >> x;
    cout << "Insira um valor(inteiro): ";
    cin >> n;
    multiplos(soma, x, n);
    linha();
    cout << "soma: " << soma << endl;
    linha();

    return 0;
}
void linha(){
    cout << "----------------------------------" << endl;
}
