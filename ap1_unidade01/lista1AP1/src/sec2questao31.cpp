/*
Utilizando seleçao de múltipla escolha, escreva um algoritmo que, a partir de um mes fornecido
(número inteiro de 1 a 12), apresente o nome dele por extenso ou uma mensagem de mes inválido
*/
#include <iostream>

using namespace std;

int main(){
    int d;
    cout << "Insira um numero: ";
    cin >> d;
    switch(d){
        case 1:
            cout << "janeiro." << endl;
            break;
        case 2:
            cout << "fevereiro." << endl;
            break;
        case 3:
            cout << "marco." << endl;
            break;
        case 4:
            cout << "abril." << endl;
            break;
        case 5:
            cout << "maio." << endl;
            break;
        case 6:
            cout << "junho." << endl;
            break;
        case 7:
            cout << "julho." << endl;
            break;
        case 8:
            cout << "agosto." << endl;
            break;
        case 9:
            cout << "setembro." << endl;
            break;
        case 10:
            cout << "outubro." << endl;
            break;
        case 11:
            cout << "novembro." << endl;
            break;
        case 12:
            cout << "dezembro." << endl;
            break;
        default:
            cout << "mes invalido." << endl;
            break;
    }

    return 0;
}
