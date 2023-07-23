/**
Implementar a função int power (int base, int expoente), que retorna o valor de base
elevado a expoente.
*/

#include <iostream>
#include <iomanip>

using namespace std;

void linha();
float power(int base2 = 1, int expoente2 = 1);
int calcula(int, int);
int main(){
    int base1, expoente1;
    cout << "Insira o valor da base: ";
    cin >> base1;
    cout << "Insira o valor do expoente: ";
    cin >> expoente1;
    linha();
    cout << fixed << setprecision(5);
    cout << "Resultado: " << power(base1, expoente1) << endl;
    linha();

	return 0;
}
void linha(){
    cout << "-----------------------------" << endl;
}
float power(int base2, int expoente2){
    float resultado;
    if(expoente2 > 0){
        resultado = calcula(base2, expoente2);
        return resultado;
    }
    else {
        expoente2 = abs(expoente2);
        resultado = calcula(base2, expoente2);
        return 1 / resultado;
    }

}
int calcula(int base3, int expoente3){
    int acumulador = 1;
    for(int i = 1; i <= expoente3; i++){
        acumulador *= base3;
    }
    return acumulador;
}
