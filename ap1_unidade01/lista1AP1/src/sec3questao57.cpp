/*
Faça um programa que peça para n pessoas a sua idade. Então o programa deverá verificar se a
média das idades da turma varia entre 0 e 25, 26 e 60 e maior que 60; e então, dizer se a turma é
jovem, adulta ou idosa, conforme a média calculada.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int idade, somaIdade, cont;
    float media;
    char sair;
    somaIdade = cont = 0;
    //estrutura que irá permitir descobrir a classe da turma (jovem/adulta/velha)
    do {
        cout << "Insira a idade da " << cont + 1 << "a. pessoa (entre 0 e 129): ";
        cin >> idade;
        //estrutura que garante que o usuário irá colocar uma idade válida
        while((idade < 0)||(idade >= 130)){
            cout << "Valor inválido! Tente novamente: ";
            cin >> idade;
        }
        somaIdade += idade;
        cont++;
        cout << "Inseriu todas as idades? ";
        cin >> sair;
    } while(sair != 's');
    media = somaIdade / cont;
    //teste para saber em qual
    system("cls");
    if(media > 60){
        cout << "Turma Idosa " << endl;
    } else if ((media > 25)&&(media <= 60)){
        cout << "Turma Adulta " << endl;
    } else {
        cout << "Turma Jovem " << endl;
    }

    return 0;
}
