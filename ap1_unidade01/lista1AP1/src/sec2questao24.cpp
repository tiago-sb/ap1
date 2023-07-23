/*
As Organizacoes Tabajara resolveram dar um aumento de salario aos seus colaboradores e lhe
centraram para desenvolver o programa que calculara os reajustes.
Faca um programa que recebe o salario de um colaborador e calcula o reajuste segundo o seguinte
criterio, baseado no salario atual:
(a) salarios ate R$ 1.280,00 (inclusive): aumento de 20%;
(b) salarios entre R$ 1.280,00 e R$ 1.700,00 (inclusive): aumento de 15%;
(c) salarios entre R$ 1.700,00 e R$ 2500,00 (inclusive): aumento de 10%;
(d) salarios acima de R$ 2.500,00: aumento de 5%.
Apos o aumento ser realizado, informe na tela:
i. o salario antes do reajuste;
ii. o percentual de aumento aplicado;
iii. o valor do aumento;
iv. o novo salario, apos o aumento.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double sal;
    cout << "Insira seu salario: ";
    cin >> sal;
    cout << endl;
    if((sal <= 1280)){
        cout << fixed << setprecision(2);
        cout << "salario antes do reajuste..: R$ " << sal << endl;
        cout << "percentual do aumento......: " << "20% " << endl;
        cout << "valor do aumento...........: R$ " << sal * 0.20 << endl;
        cout << "Salario apos o aumento.....: R$ " << sal + sal * 0.20 << endl;
    } else if((sal > 1280)&&(sal <= 1700)){
        cout << fixed << setprecision(2);
        cout << "salario antes do reajuste..: R$ " << sal << endl;
        cout << "percentual do aumento......: " << "15% " << endl;
        cout << "valor do aumento...........: R$ " << sal * 0.15 << endl;
        cout << "Salario apos o aumento.....: R$ " << sal + sal * 0.15 << endl;
    } else if((sal > 1700)&&(sal <= 2500)){
        cout << fixed << setprecision(2);
        cout << "salario antes do reajuste..: R$ " << sal << endl;
        cout << "percentual do aumento......: " << "10% " << endl;
        cout << "valor do aumento...........: R$ " << sal * 0.10 << endl;
        cout << "Salario apos o aumento.....: R$ " << sal + sal * 0.10 << endl;
    } else {
        cout << fixed << setprecision(2);
        cout << "salario antes do reajuste..: R$ " << sal << endl;
        cout << "percentual do aumento......: " << "5% " << endl;
        cout << "valor do aumento...........: R$ " << sal * 0.05 << endl;
        cout << "Salario apos o aumento.....: R$ " << sal + sal * 0.05 << endl;
    }

    return 0;
}
