/**
Escreva três funções soma sobrecarregadas que retornem, respectivamente:
a. a soma de dois valores inteiros;
b. a soma de um inteiro e um float;
c. a soma de três inteiros;
Escreva um programa que use as funções.
*/

#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

void linha();
int soma(int, int);
float soma(int, float);
int soma(int, int, int);
int main(){
    setlocale(LC_ALL,"portuguese");
    int n, m, o, op;
    float p;
    char s;

    do {
        linha();
        do {
            cout << "escolha a função sobrecarregada de seu desejo:\n[1] -> soma de dois números inteiros " << endl;
            cout << "[2] -> soma de um número inteiro com um real\n[3] -> soma de três inteiros\n: ";
            cin >> op;
        } while((op < 1)||(op > 3));
        switch(op){
            linha();
            case 1:
                cout << "Insira o valor 1 (inteiro): ";
                cin >> n;
                cout << "Insira o valor 2 (inteiro): ";
                cin >> m;
                linha();
                cout << "resultado: " << soma(n, m) << endl;
                linha();
                break;
            case 2:
                cout << "Insira o valor 1 (inteiro): ";
                cin >> n;
                cout << "Insira o valor 2 (real): ";
                cin >> p;
                linha();
                cout << "resultado: " << soma(n, p) << endl;
                linha();
                break;
            case 3:
                cout << "Insira o valor 1 (inteiro): ";
                cin >> n;
                cout << "Insira o valor 2 (inteiro): ";
                cin >> m;
                cout << "Insira o valor 3 (inteiro): ";
                cin >> o;
                linha();
                cout << "resultado: " << soma(n, m, p) << endl;
                linha();
        }
        cout << "Deseja sair [s / n]? ";
        cin >> s;
        system("cls");
    } while(s != 's');

    return 0;
}
void linha(){
    cout << "------------------------------------------------" << endl;
}
int soma(int nN, int nM){
    return nN + nM;
}
float soma(int nN, float nM){
    return nN + nM;
}
int soma(int nN, int nM, int nO){
    return nN + nM + nO;
}
