/*
Escreva uma fun��o que recebe como argumentos dois inteiros positivos n e d, 0 < d <= 9,
e retorna quantas vezes o d�gito d aparece no n�mero n dado.
Escreva um programa que solicita dois inteiros positivos n e d e,
usando a fun��o acima, mostra quantas vezes o d�gito d aparece no n�mero n dado.
*/

#include <iostream>
#include <locale>

using namespace std;

int qntVezes(int, int);
int main(){
    setlocale(LC_ALL,"portuguese");
    int n, d;
    cout << "n:";
    cin >> n;
    //la�o que pede um n�mero entre 0 e 9
    do {
        cout << "d:";
        cin >> d;
    } while((d <= 0)||(d > 9));

    cout << "------------------------" << endl;
    if(qntVezes(n, d) == 1){
        cout << d << " aparece " << qntVezes(n, d) << " vez no digito " << n << endl;
    }
    else{
        cout << d << " aparece " << qntVezes(n, d) << " vezes no digito " << n << endl;
    }
    cout << "------------------------" << endl;

    return 0;
}
int qntVezes(int nN, int nD){
    int cont = 0;
    do {
        if(nN == nD){
            cont++;
        }
        nN /= 10;
    } while (nN != 0);

    return cont;
}
