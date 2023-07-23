#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int tipPulv;
    float ha, totPagar = 0;
    char sair;
    cout << "Insira a area da propriedade em metros quadrados: ";
    cin >> ha;
    ha /= 10000;
    //cálculo do total a se pagar pelo cliente em questão
    do {
        cout << endl << "Insira o tipo da pulverizacao " << endl;
        cout << "Digite 1: Pulverizacao tipo 1 " << endl;
        cout << "Digite 2: Pulverizacao tipo 2 " << endl;
        cout << "Digite 3: Pulverizacao tipo 3 " << endl;
        cout << "Digite 4: Pulverizacao tipo 4 " << endl;
        cout << "Digite 5: Pulverizacao tipo 5 " << endl;
        cout << ": ";
        cin >> tipPulv;
        cout << endl << "Inseriu todos os tipos de pulverizacao? \n";
        cout << "caso tenha digite 's', caso nao tenha digite 'n': ";
        cin >> sair;
        sair = tolower(sair);
        system("cls");
        switch(tipPulv){
            case 1:
                totPagar += (ha * 500);
                break;
            case 2:
                totPagar += (ha * 1000);
                break;
            case 3:
                totPagar += (ha * 1500);
                break;
            case 4:
                totPagar += (ha * 2000);
                break;
            case 5:
                totPagar += (ha * 3000);
                break;
            default:
                cout << endl << "Voce nao inseriu um valor valido! " << endl;
                sair = 'n';
        }
    } while(sair != 's');
    system("cls");
    //descontos
    if(ha > 100){
        totPagar *= 0.95;
    } if(totPagar > 75000){
        totPagar *= 0.90;
    }
    //resultado
    cout << fixed << setprecision(2);
    cout << endl << "total a pagar: R$ " << totPagar << endl;

    return 0;
}
