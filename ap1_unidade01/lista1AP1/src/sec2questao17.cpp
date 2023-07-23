/*
Faca um programa que verifique se uma letra digitada eh F ou M. Conforme a letra, escrever:
(a) F - Feminino,
(b) M - Masculino,
(c) Genero nao informado.
*/
#include <iostream>

using namespace std;

void genero(char g1);
int main(){
    char g;
    cout << "Informe seu genero...........: " << endl;
    cout << "[f] - Feminino...............: " << endl;
    cout << "[m] - Masculino..............: " << endl;
    cout << "[g] - Genero nao informado...: " << endl;
    cout << ": ";
    cin >> g;
    genero(g);
    return 0;
}
void genero(char g1){
    if((g1 == 'f') || (g1 == 'F')){
        cout << "letra escolhida: [f] " << endl;
        cout << "Ok, seja bem-vinda ao nosso sistema! " << endl;
    } else if((g1 == 'm') || (g1 == 'M')){
        cout << "letra escolhida: [m] " << endl;
        cout << "Ok, seja bem-vindo ao nosso sistema! " << endl;
    } else if((g1 == 'g') || (g1 == 'G')){
        cout << "letra escolhida: [g] " << endl;
        cout << "Ok, seja bem-vinde ao nosso sistema! " << endl;
    } else {
        cout << "nenhuma letra do padrao foi escolhida! ";
    }
}
