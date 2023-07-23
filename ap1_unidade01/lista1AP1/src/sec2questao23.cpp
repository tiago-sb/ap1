/*
Faca um programa que pergunte em que turno voce estuda. Peca para digitar M (matutino), ou V
(Vespertino) ou N (Noturno). Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!", ou
"Valor Invalido!", conforme o caso.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

string turno(string t);
void teste(string rec);
int main(){
    string rec;
    rec = turno(rec);
    teste(rec);
    return 0;
}
string turno(string t){
    cout << "Insira o turno que voce estuda: " << endl;
    cout << "letras e palavras aceitas pelo sistema logo abaixo: " << endl;
    cout << "[m] - [M] - [matutino].....: " << endl;
    cout << "[v] - [V] - [vespestino]...: " << endl;
    cout << "[n] - [N] - [noturno]......: " << endl;
    cout << ":";
    cin >> t;
    system("cls");
    cout << endl;
    return t;
}
void teste(string rec){
    if((rec == "m")||(rec == "M")||(rec == "manha")||(rec == "matutino")){
        cout << "Bom Dia! " << endl;
    } else if((rec == "v")||(rec == "V")||(rec == "vespestino")){
        cout << "Boa Tarde! " << endl;
    } else if((rec == "n")||(rec == "N")||(rec == "noturno")){
        cout << "Boa Noite! " << endl;
    } else {
        while((rec != "m")&&(rec != "M")&&(rec != "v")&&(rec != "V")&&(rec != "n")
            &&(rec != "N")&&(rec != "matutino")
            &&(rec != "vespestino")&&(rec != "noturno")){
            cout << endl << "valor Invalido! " << endl;
            rec = turno(rec);
        }
        teste(rec);
    }
}
