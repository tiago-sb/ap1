/*
Faca um programa que leia um nome de usuario e a sua senha e nao aceite a senha igual ao nome
do usuario, mostrando uma mensagem de erro e voltando a pedir as informacoes.
*/
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    string nome = "s", senha = "s";
    cout << "tela de cadastro: " << endl;
    while(nome == senha){
        cout << "Insira seu nome: ";
        getline(cin, nome);
        cout << "Insira uma sua senha: ";
        getline(cin, senha);
        if(nome == senha){
            cout << endl << "ERRO! nome e senhas iguais!\n" << endl;
        }
    }
    system("cls");
    cout << "Bem vindo(a) ao nosso sistema amigo(a) " << nome << endl;

    return 0;
}
