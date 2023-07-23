/**
Implementar a fun��o raizquadrada. Esta fun��o deve:
(a) Receber um n�mero do tipo float como par�metro.
(b) Retornar a raiz quadrada do n�mero recebido de tal maneira que esta raiz, quando elevada
ao quadrado, apresente um erro m�ximo de 0.01% em rela��o ao valor do par�metro.
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
