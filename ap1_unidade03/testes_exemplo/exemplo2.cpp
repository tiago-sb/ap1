/**
Escreva uma função recursiva que receba um
valor inteiro positivo n, e imprima a contagem
regressiva a partir deste valor. Por exemplo, se o
usuário digitar 5, o programa irá imprimir 5, 4, 3,
2, 1, 0.
*/

#include <iostream>
#include <locale>

using namespace std;

void imprimeRec(int num){
    if(num == 0){
        cout << num << ". ";
    }
    else {
        cout << num << ", ";
        imprimeRec(num - 1);
    }
}
int main(){
    setlocale(LC_ALL,"portuguese");
    unsigned int num;
    //laço que priva o usuário de digitar um valor negativo
    do{
        cout << "Insira um número inteiro positivo: ";
        cin >> num;
    }while(num < 0);
    //chama a função
    imprimeRec(num);

    return 0;
}
