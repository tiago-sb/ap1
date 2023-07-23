/**
Implementar a função raizquadrada. Esta função deve:
(a) Receber um número do tipo float como parâmetro.
(b) Retornar a raiz quadrada do número recebido de tal maneira que esta raiz, quando elevada
ao quadrado, apresente um erro máximo de 0.01% em relação ao valor do parâmetro.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void linha();
float raizQuadrada(float);
int main(){
    float v;
    linha();
    cout << "Insira um valor: ";
    cin >> v;
    cout << fixed << setprecision(3);
    cout << "resultado: " << raizQuadrada(v) << endl;
    linha();

	return 0;
}
void linha(){
    cout << "---------------------------" << endl;
}
float raizQuadrada(float nV){
    return sqrt(nV);
}
