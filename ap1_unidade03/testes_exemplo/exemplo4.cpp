/**
Escreva uma função recursiva de nome potencia( ),
que receba dois inteiros positivos, i e j, e retorne i
elevado a j.
*/

#include <iostream>
#include <locale>

using namespace std;

int potenciaRec(int i, int j){
    if(j == 0){
        return 1;
    }
    else {
        return (i * potenciaRec(i, j - 1));
    }
}
int main(){
    setlocale(LC_ALL,"portuguese");
    int i, j;
    //pedidos manuais ao usuário
    do {
        cout << "Insira o valor da base (número positivo): ";
        cin >> i;
    } while(i < 0);
    do {
        cout << "Insira o vaor do expoente (número positivo): ";
        cin >> j;
    }while(j < 0);
    //resultados
    cout << "resultado: " << potenciaRec(i, j) << endl;

    return 0;
}
