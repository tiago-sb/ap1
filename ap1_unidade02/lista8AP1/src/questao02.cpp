/**
Altere a função gerador da questão anterior de modo que ela receba por parâmetros dois números
inteiros positivos m e n e gere um número no intervalo [m, n].
Do mesmo modo, altere o programa da questão anterior para que solicite ao usuário dois números
inteiros positivos e mostre o número gerado pela função gerador ao receber esses números.
Compile os arquivos criados acima em um único projeto.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void linha();
int gerador(int, int);
int main(){
    int m, n;

    do {
        cout << "Insira o primerio valor..: ";
        cin >> m;
    } while(m < 0);

    do {
        cout << "Insira o segundo valor...: ";
        cin >> n;
    } while(n < 0);

    linha();
    cout << "resultado: " << gerador(m, n) << endl;
    linha();

    return 0;
}
void linha(){
    cout << "---------------------------" << endl;
}
int gerador(int nM, int nN){
	srand(time(0));
    if(nM > nN){
        return (rand() % (nM - nN + 1)) + nN;
    }
    else{
        return (rand() % (nN - nM + 1)) + nM;
    }
}
