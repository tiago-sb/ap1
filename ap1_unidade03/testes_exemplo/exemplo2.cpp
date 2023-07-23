/**
Escreva uma fun��o recursiva que receba um
valor inteiro positivo n, e imprima a contagem
regressiva a partir deste valor. Por exemplo, se o
usu�rio digitar 5, o programa ir� imprimir 5, 4, 3,
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
    //la�o que priva o usu�rio de digitar um valor negativo
    do{
        cout << "Insira um n�mero inteiro positivo: ";
        cin >> num;
    }while(num < 0);
    //chama a fun��o
    imprimeRec(num);

    return 0;
}
