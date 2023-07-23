/*
Escreva um algoritmo que simule uma calculadora de 4 operacoes. O programa devera receber do teclado dois
numeros e o sinal da operacao a ser efetuada e devolver o resultado da operacao.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int c;
    float n1, n2;
    char op;
    cout << "Insira o primeiro numero: ";
    cin >> n1;
    cout << "Insira o segundo numero: ";
    cin >> n2;
    cout << "\nescolha a operacao: ";
    cout << "+: " << endl;
    cout << "-: " << endl;
    cout << "*: " << endl;
    cout << "/: " << endl;
    cout << ": ";
    cin >> op;
    if(op == '+'){
        cout << "voce escolheu SOMA: " << endl;
        cout << "resultado da operacao: " << n1 + n2 << endl;
    } else if(op == '-'){
        cout << "voce escolheu SUBTRACAO: " << endl;
        cout << "resultado da operacao: " << n1 - n2 << endl;
    } else if(op == '*'){
        cout << "voce escolheu MULTIPLICACAO: " << endl;
        cout << "resultado da operacao: " << n1 * n2 << endl;
    } else if(op == '/'){
        cout << "Quantas casas apos a virgula voce deseja? ";
        cin >> c;
        cout << fixed << setprecision(c);
        cout << "voce escolheu DIVISAO: " << endl;
        cout << "resultado da operacao: " << n1 / n2 << endl;
    }

    return 0;
}

