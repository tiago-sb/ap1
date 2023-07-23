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
            cout << "|" << setfill(' ') << setw(65) << "PARABÉNS PELA VITÓRIA! :)" << setfill(' ') << setw(38) << "|" << endl;
        }
        else {
            cout << "|" << setfill(' ') << setw(69) << "INFELIZMENTE NÃO FOI DESSA VEZ! :(" << setfill(' ') << setw(34) << "|" << endl;
        }
        linha();
        do {
            cout << "[1] - TENTAR NOVAMENTE\n[0] - SAIR\n: ";
            cin >> sairJogo;
            system("cls");
            if((sairJogo != 0)&&(sairJogo != 1)){
                cout << "OPÇÃO INVÁLIDA! TENTE NOVAMENTE." << endl;
            }
        } while((sairJogo < 0)||(sairJogo > 1));

    } while(sairJogo != 0);

    return 0;
}
void telaIncio(){
    linha();
    cout << "|" << setfill(' ') << setw(61) << "BEM VINDO AO JOGO" << setfill(' ') << setw(42) << "|" << endl;
    cout << "| FOI GERADO UM NÚMERO PELO COMPUTADOR E SUA MISSÃO É ACERTÁ-LO! VOCÊ TEM DEZ CHANCES PARA ADIVINHÁ-LO |" << endl;
    linha();
}
int tentativas(){
    int contador = 0, numeroX, lance;
    numeroX = geraNumero();
    cout << "UM NÚMERO ENTRE 1 E 100 FOI GERADO!\nDÊ SEU LANCE E TENTE ACERTÁ-LO" << endl;
    for(int i = 1; i <= 10; i++){
        do {
            cout << "LANCE " << i << ": ";
            cin >> lance;
            if((lance < 1)||(lance > 100)){
                cout << "VALOR INVÁLIDO!! ACEITAMOS ENTRE 1 E 100" << endl;
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
        cout << "EXTREMAMENTE LONGE DO NÚMERO CORRETO!!  ;_; :(" << endl;
    } else if(i - j > 60){
        cout << "MUTO LONGE DO NÚMERO CORRETO! :(" << endl;
    } else if(i - j > 40){
        cout << "LONGE DO NÚMERO CORRETO!" << endl;
    } else if(i - j > 20){
        cout << "MORNO!! NEM TÃO PERTO, NEM TÃO LONGE  ^._.^" << endl;
    } else if (i - j > 10){
        cout << "PERTO! QUASE LÁ :)" << endl;
    } else if(i - j > 5){
        cout << "PERTINHO!! RASPANDO O NÚMERO :)" << endl;
    } else {
        cout << "COLADO!! VOCÊ ESTÁ MUITO PERTO DA RESPOSTA!! (^o^)/" << endl;
    }
}
