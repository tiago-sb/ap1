/**
Faça uma execução de ponteiros de funções
*/

#include <iostream>
#include <locale>

using namespace std;

void funcao1();
void funcao2();
void funcao3();
int main(){
    setlocale(LC_ALL,"portuguese");
    int op;
    void (*vetor[3])() = {funcao1, funcao2, funcao3};
    string linha(30, '-');
    cout << linha << endl;
    do {
        do {
            cout << "menu de opções:\n1 - Produtos   2 - Contato   3 - Sobre  0 - sair\nsua opcao: ";
            cin >> op;
        } while((op < 0)||(op > 3));
        cout << linha << endl;
        if(op != 0){
            (*vetor[op - 1])();
            cout << linha << endl;
        }
    } while((op > 0)&&(op < 4));
    cout << "execução terminada! " << endl;

    return 0;
}
void funcao1(){
    cout << "Produtos " << endl;
}
void funcao2(){
    cout << "Contato " << endl;
}
void funcao3(){
    cout << "Sobre " << endl;
}
