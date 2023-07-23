#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void telaIncio();
inline void linha(){cout << setfill('-') << setw(105) << " " << endl;}
inline int geraNumero(){return (rand() % 100) + 1;}
int tentativas();
void ajudaAsuario(int, int);
int main(){
    srand(time(0));
    setlocale(LC_ALL,"portuguese");
    int sairJogo, resultadoJogo;
    do {
        telaIncio();
        resultadoJogo = tentativas();
        linha();
        if(resultadoJogo != 10){
            cout << "|" << setfill(' ') << setw(65) << "PARAB�NS PELA VIT�RIA! :)" << setfill(' ') << setw(38) << "|" << endl;
        }
        else {
            cout << "|" << setfill(' ') << setw(69) << "INFELIZMENTE N�O FOI DESSA VEZ! :(" << setfill(' ') << setw(34) << "|" << endl;
        }
        linha();
        do {
            cout << "[1] - TENTAR NOVAMENTE\n[0] - SAIR\n: ";
            cin >> sairJogo;
            system("cls");
            if((sairJogo != 0)&&(sairJogo != 1)){
                cout << "OP��O INV�LIDA! TENTE NOVAMENTE." << endl;
            }
        } while((sairJogo < 0)||(sairJogo > 1));

    } while(sairJogo != 0);

    return 0;
}
void telaIncio(){
    linha();
    cout << "|" << setfill(' ') << setw(61) << "BEM VINDO AO JOGO" << setfill(' ') << setw(42) << "|" << endl;
    cout << "| FOI GERADO UM N�MERO PELO COMPUTADOR E SUA MISS�O � ACERT�-LO! VOC� TEM DEZ CHANCES PARA ADIVINH�-LO |" << endl;
    linha();
}
int tentativas(){
    int contador = 0, numeroX, lance;
    numeroX = geraNumero();
    cout << "UM N�MERO ENTRE 1 E 100 FOI GERADO!\nD� SEU LANCE E TENTE ACERT�-LO" << endl;
    for(int i = 1; i <= 10; i++){
        do {
            cout << "LANCE " << i << ": ";
            cin >> lance;
            if((lance < 1)||(lance > 100)){
                cout << "VALOR INV�LIDO!! ACEITAMOS ENTRE 1 E 100" << endl;
            }
        } while((lance < 1)||(lance > 100));
        if(lance == numeroX){
            break;
        }
        (lance > numeroX ? ajudaAsuario(lance, numeroX) : ajudaAsuario(numeroX, lance));
        contador++;
    }
    //system("cls");
    return contador;
}
void ajudaAsuario(int i, int j){
    if(i - j > 80){
        cout << "EXTREMAMENTE LONGE DO N�MERO CORRETO!!  ;_; :(" << endl;
    } else if(i - j > 60){
        cout << "MUTO LONGE DO N�MERO CORRETO! :(" << endl;
    } else if(i - j > 40){
        cout << "LONGE DO N�MERO CORRETO!" << endl;
    } else if(i - j > 20){
        cout << "MORNO!! NEM T�O PERTO, NEM T�O LONGE  ^._.^" << endl;
    } else if (i - j > 10){
        cout << "PERTO! QUASE L� :)" << endl;
    } else if(i - j > 5){
        cout << "PERTINHO!! RASPANDO O N�MERO :)" << endl;
    } else {
        cout << "COLADO!! VOC� EST� MUITO PERTO DA RESPOSTA!! (^o^)/" << endl;
    }
}
