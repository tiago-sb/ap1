/**
Escreva uma função gerador, que receba por parâmetro um número inteiro positivo n e gere um
número inteiro positivo no intervalo [0, n] e retorne esse número.
Faça um programa que solicite ao usuário um número inteiro positivo e mostre o número gerado
pela função gerador ao receber o número fornecido.
Compile os arquivos criados acima em um único projeto.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void linha();
int gerador(int);
int main(){
    int n;

    do {
        cout << "Insira um valor positivo: ";
        cin >> n;
    } while(n < 0);

    linha();
    cout << "resposta: " << gerador(n) << endl;
    linha();

    return 0;
}
void linha(){
    cout << "------------------------------" << endl;
}
int gerador(int nN){
    srand(time(0));
    nN++;
    return rand() % nN;
}
