/*
Fazer uma função que retorna a razão entre dois números. A função deve retornar pelo comando
return o valor 1, se a operação foi possível; e o valor 0, se a operação não foi possível (divisão
por zero, por exemplo). O resultado da divisão deve ser retornado por um parâmetro passado
por referência.
Escreva um programa que chame a função.
*/

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

void linha();
int divide(float &, float);
int main(){
    setlocale(LC_ALL,"portuguese");
    float m, n;
    linha();
    cout << "Insira o valor 1: ";
    cin >> m;
    cout << "Insira o valor 2: ";
    cin >> n;
    //resultados
    linha();
    cout << "Tipo de divisão: \n[0] - Divisão Impossível\n[1] - Divisão Possível " << endl;
    linha();
    cout << "Tipo da divisão: " << divide(m, n) << endl;
    cout << fixed << setprecision(2);
    if(n != 0){
        cout << "Resultado: " << m << endl;
    }
    else{
        cout << "Inderteminação Matemática! " << endl;
    }
    linha();

    return 0;
}
void linha(){
    cout << "--------------------------------" << endl;
}
int divide(float &nM, float nN){
    if(nN == 0){
        return 0;
    }
    else{
        nM = nM / nN;
        return 1;
    }

}
