/*
Experimente fazer um algoritmo que peca que seja digitado um valor inteiro positivo. Caso o valor digitado
seja negativo, deve aparecer na tela a mensagem: "ERRO! VOCE DIGITOU UM VALOR NEGATIVO."
*/
#include <iostream>

using namespace std;

void pedido(int n1);
int main(){
    int n;
    pedido(n);

    return 0;
}
void pedido(int n1){
    cout << "Insira um valor inteiro positivo: ";
    cin >> n1;
    cout << endl;
    if((n1 * -1) > 0){
        cout << "ERRO! VOCE DIGITOU UM VALOR NEGATIVO. \n" << endl;
        pedido(n1);
    } else if((n1 * -1) < 0 ){
        cout << "OK! VOCE DIGITOU UM VALOR POSITIVO COMO ESPERADO. " << endl;
    } else {
        cout << "VOCE DIGITOU '0', MATEMATICAMENTE NAO EH POSITIVO NEM NEGATIVO. \n" << endl;
        pedido(n1);
    }
}
