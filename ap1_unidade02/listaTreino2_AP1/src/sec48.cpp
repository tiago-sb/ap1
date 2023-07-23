/*
Escreva um programa contendo uma fun��o gabarito
chamada divide que recebe dois argumentos do mesmo
tipo e retorna o resultado da divis�o do primeiro argumento
pelo segundo.

Se os argumentos forem inteiros, a divis�o deve ser inteira.
Se forem do tipo float, a divis�o deve ser real.
*/

#include <iostream>
#include <iomanip>

using namespace std;

template <class tipo>
tipo divide(tipo v1, tipo v2){
    return v1 / v2;
}
int main(){
    setlocale(LC_ALL,"portuguese");
    int v1, v2, op;
    float v3, v4;
    do {
        cout << "[1] -> inteiros\n[2] -> real\n: ";
        cin >> op;
    } while((op < 1)||(op > 2));

    switch(op){

        case 1:
            cout << "Insira o valor 1 inteiro: ";
            cin >> v1;
            cout << "Insira o valor 2 inteiro: ";
            cin >> v2;
            cout << fixed << setprecision(3);
            cout << "resultado: " << divide(v1, v2) << endl;
            break;
        case 2:
            cout << "Insira o valor 1 real: ";
            cin >> v3;
            cout << "Insira o valor 2 real: ";
            cin >> v4;
            cout << fixed << setprecision(3);
            cout << "resultado: " << divide(v3, v4) << endl;
    }

	return 0;
}
