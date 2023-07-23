/*
O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar a metodologia da
tabelinha, que já é um sucesso na sua loja de 1,99. Você foi contratado para desenvolver o programa
que monta a tabela de preços de pães, de 1 até 50 pães, a partir do preço do pão informado pelo
usuário, conforme o exemplo abaixo:
Preço do pão: R$ 0.18
Panificadora Pão de Ontem - Tabela de preços
|-|-------------|-|
|-| 01 - R$ 0.18|-|
|-| 02 - R$ 0.36|-|
|-| ...         |-|
|-| 50 - R$ 9.00|-|
|-|-------------|-|
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int qntPao;
    cout << "Insira a quantidade de pães: ";
    cin >> qntPao;
    //laço que priva o usuário de inserir um valor inválido
    while((qntPao < 1)||(qntPao > 50)){
        cout << "Valor inválido! \nInsira um novo valor: ";
        cin >> qntPao;
    }
    cout << "---tabela---" << endl;
    cout << fixed << setprecision(2);
    //laço que printa a tabela desejada pelo cliente
    for(int i = 1;i <= qntPao; i++){
        if(i < 10){
            cout << "0" << i << " - R$ " << i * 0.18 << endl;
        }
        else {
            cout << i << " - R$ " << i * 0.18 << endl;
        }
    }

    return 0;
}
