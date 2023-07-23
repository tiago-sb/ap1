/*
Faca um programa que peca o tamanho de um arquivo para download (em MB) e a velocidade de
um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo
usando este link (em minutos).
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // tArq = tamanho do arquivo ; vI = velocidade da internet.
    int tArq ,vI , h , m , s ;
    cout << "Insira o tamanho do arquivo em MB: ";
    cin >> tArq;
    cout << "Insira a velocidade do link da sua internet em Mbps: ";
    cin >> vI;
    h = (tArq / vI) / 3600;
    m = ((tArq / vI) % 3600) / 60;
    s = ((tArq / vI) % 3600) % 60;
    cout << fixed << setprecision(2);
    cout << "Seu download sera feito em " << h << " horas " << m << " minutos e " << s << " segundos." << endl;
    return 0;
}
