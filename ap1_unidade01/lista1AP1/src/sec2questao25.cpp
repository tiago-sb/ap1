/*
Faca um programa para o calculo de uma folha de pagamento, sabendo que:
(a) sao descontados do salario bruto: Imposto de Renda, que depende do salario bruto (conforme
tabela abaixo); e 10% de INSS;
(b) o FGTS corresponde a 11% do Salario Bruto, mas nao eh descontado (eh a empresa que deposita);
(c) o salario liquido corresponde ao salario bruto menos os descontos; e
(d) programa devera pedir ao usuario o valor da sua hora e a quantidade de horas trabalhadas no
mes.

DESCONTO DO IR:
----------------------------------------
Salario bruto Aliquota
ate 2.500,00 (inclusive) isento
De 2500,01 ate 3.500,00 (inclusive) 5%
De 3.500,01 ate 5.500,00 (inclusive) 10%
acima de 5.500,00 20%
----------------------------------------
Imprima na tela as informacoes, dispostas conforme o exemplo abaixo. No exemplo, o valor da hora
eh R$ 50,00 e a quantidade de horas eh 220.

 Salario Bruto: (50 * 220) : R$ 11000,00
 (-) IR (5%) : R$ 550,00
 (-) INSS ( 10%) : R$ 1100,00
 FGTS (11%) : R$ 1210,00
 Total de descontos : R$ 1650,00
 Salario Liquido : R$ 9350,00

*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // sPH = salario por hora ; qntH = quantidade horas trabalhadas ; iR = Imposto de renda ; tD = Total de descontos;
    float sPH, qntH, iR, tD;
    cout << "Insira seu salario por hora: ";
    cin >> sPH;
    cout << "Insira sua quantidade de horas trabalhadas neste mes: ";
    cin >> qntH;
    iR = sPH * qntH;
    cout << fixed << setprecision(2);
    cout << "Salario Bruto: R$ " << sPH * qntH << endl;
    if(((iR) <= 2500)){
        cout << "(-) IR (isento)): R$ " << iR - iR << endl;
        tD = ((sPH * qntH) * 0.1);
    } else if((iR > 2500)&&(iR <= 3500)){
        cout << "(-) IR (5%): R$ " << iR * 0.05 << endl;
        tD = ((sPH * qntH) * 0.1) + (iR * 0.05);
    } else if((iR > 3500)&&(iR <= 5500)){
        cout << "(-) IR (10%): R$ " << iR * 0.10 << endl;
        tD = ((sPH * qntH) * 0.1) + (iR * 0.10);
    } else {
        cout << "(-) IR (20%): R$ " << iR * 0.20 << endl;
        tD = ((sPH * qntH) * 0.1) + (iR * 0.20);
    }
    cout << "(-) INSS (10%): " << (sPH * qntH) * 0.1 << endl;
    cout << "FGTS (11%): " << (sPH * qntH) * 0.11 << endl;
    cout << "Total de descontos: R$ " << tD << endl;
    cout << "Salario Liquido: R$ " << (sPH * qntH) - tD << endl;

    return 0;
}
