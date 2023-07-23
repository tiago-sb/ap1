/*
 Altere o programa anterior para que ele aceite apenas números entre 0 e 1000.
 --Não Utilize Funções!!--
*/
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int n, maior, menor, Sn = 0;
    char saida;
    cout << "Insira um valor entre 0 e 1000: ";
    cin >> n;
    //teste para saber se o valor está entre o intervalo correto
    if((n >= 0)&&(n <= 1000)){
        maior = n;
        menor = n;
    }
    else {
        while((n < 0)||(n > 1000)){
            cout << "Voce não digitou um valor entre 0 e 1000, insira um valor de novo: ";
            cin >> n;
        }
        maior = n;
        menor = n;
    }
    //entrada sentinela para saber se o usuário deseja continuar no programa
    Sn += n;
    cout << "Deseja sair? ";
    cin >> saida;
    //laço para manter o usuário importando valores
    //caso ele digite um valor fora do nosso intervalo, ele irá ficar rodando até que o usuário digite um valor aceito
    while(saida != 's'){
        cout << "Insira um valor: ";
        cin >> n;
        if((n >= 0)&&(n <= 1000)){
            if(n > maior){
                maior = n;
            }
            else {
                menor = n;
            }
        }
        else {
            while((n < 0)||(n > 1000)){
                cout << "Voce não digitou um valor entre 0 e 1.000, insira um valor de novo: ";
                cin >> n;
            }
            if(n > maior){
                maior = n;
            }
            else {
                menor = n;
            }
        }
        Sn += n;
        cout << "Deseja sair? ";
        cin >> saida;
    }
    //saída com os valores desejados
    system("cls");
    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;
    cout << "Soma dos valores: " << Sn << endl;

    return 0;
}
