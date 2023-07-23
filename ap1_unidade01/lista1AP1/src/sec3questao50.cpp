/*
Faça um programa que, dado um conjunto de n números, determine o menor valor, o maior valor
e a soma dos valores
*/
#include <iostream>

using namespace std;

int main(){
    float n, maior, menor, Sn = 0;
    char saida;
    cout << "Insira um valor: ";
    cin >> n;
    cout << "Deseja sair? ";
    cin >> saida;
    maior = n;
    menor = n;
    Sn += n;

    while(saida != 's'){
            cout << "Insira um valor: ";
            cin >> n;
            Sn += n;
            if(n > maior){
                maior = n;
            }
            else {
                menor = n;
            }
            cout << "Deseja sair? ";
            cin >> saida;
    }

    system("cls");
    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;
    cout << "Soma dos valores: " << Sn << endl;

    return 0;
}
