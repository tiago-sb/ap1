/**
Escreva um programa que solicite do usuário o tempo de duração de uma
atividade expressa em segundos e mostre na tela o tempo expresso em horas,
minutos e segundos. O programa principal deve chamar uma função que faça
esse cálculo e após a execução da função, mostrar os valores calculados.
*/
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

void tempo(int* , int* , int*);
int main(){
    setlocale(LC_ALL,"portuguese");
    int segundos, minutos, horas;
    cout << "insira o tempo de jogo (segundos): ";
    cin >> segundos;
    tempo(&segundos, &minutos, &horas);
    cout << "resultado: " << horas << "h" << minutos << "m" << segundos << "s " << endl;

    return 0;
}
void tempo(int* segundos, int* minutos, int* horas){
    *horas = *segundos / 3600;
    *minutos = (*segundos % 3600) / 60;
    *segundos = (*segundos % 3600) % 60;
}
