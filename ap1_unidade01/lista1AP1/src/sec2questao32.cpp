/**
Em uma determinada escola a avaliação das provas é dava por conceito, de acordo com a pontuação
obtida:
• A: 90 a 100 pontos
• B: 70 a 89 pontos
• C: 50 a 69 pontos
• D: 30 a 49 pontos
• E: 0 a 29 pontos
Faça um algoritmo que receba o número de pontos de um candidato e imprima o seu conceito.
*/
#include <iostream>

using namespace std;

int main(){
    float nota;
    cout << "Insira sua nota: ";
    cin >> nota;
    if(nota >= 90){
        cout << "Sua nota esta no conceito: A" << endl;
    } else if((nota >= 70)&&(nota < 90)){
        cout << "Sua nota esta no conceito: B" << endl;
    } else if((nota >= 50)&&(nota < 70)){
        cout << "Sua nota esta no conceito: C" << endl;
    } else if((nota >= 30)&&(nota < 50)){
        cout << "Sua nota esta no conceito: D" << endl;
    } else if((nota >= 0)&&(nota < 30)){
        cout << "Sua nota esta no conceito: E" << endl;
    } else {
        cout << "Pontuacao invalida." << endl;
    }
    return 0;
}
