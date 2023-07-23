/*
O Sr. Manoel Joaquim possui uma grande loja de artigos de R$ 1,99, com cerca de 10 caixas. Para
agilizar o cálculo de quanto cada cliente deve pagar, ele desenvolveu uma tabela que contém o
número de itens que o cliente comprou e ao lado o valor da conta. Desta forma a atendente do
caixa precisa apenas contar quantos itens o cliente está levando e olhar na tabela de preços. Você
foi contratado para desenvolver o programa que monta esta tabela de preços, que conterá os preços
de 1 até 50 produtos, conforme o exemplo abaixo:

|-|-------------------------------------|-|
|-| Lojas Quase Dois - Tabela de preços |-|
|-| 1 - R$ 1.99                         |-|
|-| 2 - R$ 3.98                         |-|
|-| ...                                 |-|
|-| 50 - R$ 99.50                       |-|
|-|-------------------------------------|-|
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL,"portuguese");
    int qntProduto;
    float pagamento = 0;
    cout << "Insira a quantidade de produtos [mínimo - 1 | máximo - 50]: ";
    cin >> qntProduto;
    //laço que priva o usuário de inserir um valor fora do intervalo desejado
    while((qntProduto <= 0)||(qntProduto > 50)){
        cout << endl << "Quantidade inválida! \nTente novamente [mínimo - 1 | máximo - 50]: ";
        cin >> qntProduto;
    }
    //laço que calcula a quantidade a ser paga pelo cliente
    cout << "--tabela--" << endl;
    for(int i = 1; i <= qntProduto; i++){
        cout << fixed << setprecision(2);
        //teste para melhorar a identação do print na tela
        if(i < 10){
            if((i * 1.99) < 10){
                cout << "0" << i  << " - " << "0" << i * 1.99 << endl;
            }
            else {
                cout << "0" << i  << " - " << i * 1.99 << endl;
            }
        }
        else {
            cout << i << " - " << i * 1.99 << endl;
        }
    }

    return 0;
}
