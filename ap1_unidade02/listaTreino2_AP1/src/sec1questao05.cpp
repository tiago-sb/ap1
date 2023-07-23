/**
Escreva uma função que conte de até 1.000.000.000, isto é, a função deve conter um laço for
com um contador que vai de 1 até 1.000.000.000. Escreva um programa que receba do teclado
um valor, chame a função e então mostre o valor digitado.
Exemplo de execução:
Digite um número: 653
Você digitou... 653
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
    //parte 1 da questão - é pedido um número para o usuário
    //chamamos uma função que recebe o valor digitado pelo usuário e a função retorna este mesmo valor para main
    linha();
    cout << "Digite um número: ";
    cin >> v;
    linha();
    cout << "Você digitou... " << mostra(v) << endl;
    linha();
    //laço que priva o usuário de inseir um número fora das opções declaradas na tela
    do {
        cout << "[0] -> 1000000000 até 1\n[1] -> contar até um número digitado por você\n-> ";
        cin >> op;
    } while((op < 0)||(op > 1));
    //caso 1 - o usuário digita um número e o programa conta de 1 até este número
    //caso 2 - a função é chamada e recebe o valor 1000000000 por conta do argumento defalt
    if(op == 1){
        cout << "Insira até qual número deseja contar: ";
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
