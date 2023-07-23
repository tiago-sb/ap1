/*
Escreva um programa que calcule a media das idades dos alunos de uma escola. Considere que
o nemero de alunos nao eh conhecido a priori. Entao o seu algoritmo deve ler todas as idades
até que um valor negativo seja fornecido.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int idade, contador = 0;
    float media, somaIdades = 0;
    cin >> idade;
    while(idade > 0){
        somaIdades += idade;
        cin >> idade;
        contador++;
    }
    cout << fixed << setprecision(1);
    cout << endl << "A média das idades é "<< somaIdades / contador;

    return 0;
}
