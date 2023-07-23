/*
O Sr. Manoel Joaquim expandiu seus negócios para além dos negócios de 1,99 e da panificadora e
agora possui uma loja de conveniências. Faça um programa que implemente uma caixa registradora
rudimentar. O programa deverá receber um número desconhecido de valores referentes aos preços
das mercadorias. Um valor zero deve ser informado pelo operador para indicar o final da compra.
O programa deve então mostrar o total da compra e perguntar o valor em dinheiro que o cliente
forneceu, para então calcular e mostrar o valor do troco. Após esta operação, o programa deverá
voltar ao ponto inicial, para registrar a próxima compra. A saída deve ser conforme o exemplo
abaixo:
Lojas Tabajara
Produto 1: R$ 2.20
Produto 2: R$ 5.80
Produto 3: R$ 0
Total: R$ 9.00
Dinheiro: R$ 20.00
Troco: R$ 11.00
...
Lojas Tabajara
Produto 1: R$
//NÃO USE FUNÇÃO//
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    float valor, pagamento, troco, smPg = 0,smValor = 0, cont = 1;
    //laço que permite saber o valor total da compra do cliente
    do{
        cout << "Insira o valor do produto " << cont << ": R$ ";
        cin >> valor;
        while((valor < 0)){
            cout << "Valor Impróprio! \nInsira outro valor: R$ ";
            cin >> valor;
        }
        smValor += valor;
        cont++;
    } while(valor != 0);
    //printe na tela do valor total da fatura do cliente
    cout << "Total: R$ " << smValor << endl;
    //importação dos dados do dinheiro do cliente
    cout << "Insira o valor do pagamento: R$ ";
    cin >> pagamento;
    smPg += pagamento;
    troco = smPg - smValor;
    //laço que priva o cliente de inserir valores abaixo do mínimo para pagar a dívida
    while(troco < 0){
        cout << "O valor que voce nos deu não conseguirá pagar sua compra, \nInsira mais dinheiro: ";
        cin >> pagamento;
        //laço que priva o cliente de inserir valor inválido
        while(pagamento < 0){
            cout << "Valor Impróprio! \nInsira outro valor: R$ ";
        }
        smPg += pagamento;
        troco = smPg - smValor;
    }
    //printe na tela que informa os resultados finais da compra
    cout << fixed << setprecision(2);
    cout << endl;
    if(troco == 0){
        cout << "Troco: R$ 0.0 \nVolte sempre! " << endl;
    } else if(troco > 0){
        cout << "Troco: R$ " << troco << endl;
    }

    return 0;
}
