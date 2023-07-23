/**
Escreva um programa que solicite do usu�rio o tempo de dura��o de uma
atividade expressa em segundos e mostre na tela o tempo expresso em horas,
minutos e segundos. O programa principal deve chamar uma fun��o que fa�a
esse c�lculo e ap�s a execu��o da fun��o, mostrar os valores calculados.
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
