/**
Deseja lançar os dados (S/N)? s
Sua melhor pontuação até agora = 12
d1 = 4 d2 = 1 d3 = 6 ==> 11 pontos.
Não bateu seu recorde...
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

void linha();
int lancaDados();
bool resultado(int, int, int);
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int dd1, dd2, dd3;
    char op, teste;
        for(int i = 1;i <= 8; i++){
            linha();
            cout << "--rodada " << i << "--\n";
            cout << "lançar dados [s/n]? ";
            cin >> op;
            op = toupper(op);
            if(op == 'N'){
                break;
            }
            dd1 = lancaDados();
            dd2 = lancaDados();
            dd3 = lancaDados();
            linha();
            teste = resultado(dd1, dd2, dd3);
            if(teste == true){
                cout << "Você bateu seu recorde! :) \n";
            }
            else{
                cout << "Você não bateu seu recorde! :( \n";
            }
        }

	return 0;
}
void linha(){
    cout << "-------------------------\n";
}
int lancaDados(){
    return rand() % 6 + 1;
}
bool resultado(int dd1, int dd2, int dd3){
    static int ponto = 0, retorno;
    cout << "pontuação anterior: " << ponto << endl;
    cout << dd1 << " + " << dd2 << " + " << dd3 << " = " << dd1 + dd2 + dd3 << endl;
    retorno = ponto;
    ponto = dd1 + dd2 + dd3;
    cout << "pontuação atual: " << ponto << endl;
    if(retorno >= ponto){
        return 0;
    }
    else{
        return 1;
    }
}

