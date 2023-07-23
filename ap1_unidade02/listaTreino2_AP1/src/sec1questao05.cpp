/**
Escreva uma fun��o que conte de at� 1.000.000.000, isto �, a fun��o deve conter um la�o for
com um contador que vai de 1 at� 1.000.000.000. Escreva um programa que receba do teclado
um valor, chame a fun��o e ent�o mostre o valor digitado.
Exemplo de execu��o:
Digite um n�mero: 653
Voc� digitou... 653
*/

#include <iostream>
#include <locale>

using namespace std;

void linha();
void conta(int nI = 1000000000);
float mostra(float);
int main(){
    setlocale(LC_ALL,"portuguese");
    int n, op;
    float v;
    //parte 1 da quest�o - � pedido um n�mero para o usu�rio
    //chamamos uma fun��o que recebe o valor digitado pelo usu�rio e a fun��o retorna este mesmo valor para main
    linha();
    cout << "Digite um n�mero: ";
    cin >> v;
    linha();
    cout << "Voc� digitou... " << mostra(v) << endl;
    linha();
    //la�o que priva o usu�rio de inseir um n�mero fora das op��es declaradas na tela
    do {
        cout << "[0] -> 1000000000 at� 1\n[1] -> contar at� um n�mero digitado por voc�\n-> ";
        cin >> op;
    } while((op < 0)||(op > 1));
    //caso 1 - o usu�rio digita um n�mero e o programa conta de 1 at� este n�mero
    //caso 2 - a fun��o � chamada e recebe o valor 1000000000 por conta do argumento defalt
    if(op == 1){
        cout << "Insira at� qual n�mero deseja contar: ";
        cin >> n;
        conta(n);
    }
    else {
        conta();
    }

	return 0;
}
void linha(){
    cout << "-------------------------------------------------" << endl;
}
void conta(int nI){
    linha();
    cout << "Inciando contagem...\n";
    if(nI != 1000000000){
        for(int i = 1; i <= nI; i++) {
            if(i == nI){
                cout << i << endl;
            }
            else {
                cout << i << " ";
            }
        }
    }
    else{
        for(int i = nI; i >= 1; i--){
            cout << i << " ";
        }
    }
    linha();
}
float mostra(float nV){
    return nV;
}
