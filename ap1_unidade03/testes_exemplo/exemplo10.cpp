/**
Foi solicitado a 40 alunos que emitissem uma nota (inteiro) para o
nível de qualidade da cantina, em uma escala de 1 a 10 (1
significando horrível e 10 significando excelente).
- Coloque as 40 notas em um arranjo de inteiros e resuma os
resultados da pesquisa em um outro arranjo de inteiros com a
frequência de cada resposta.
- Imprima esse resumo.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

inline int numAleatorio(){return (rand() % 10) + 1;}
int main(){
    srand(time(0));
    int notaAlunos[40], frequencia[11] = {0};
    for(int i = 0; i < 40; i++){
        notaAlunos[i] = numAleatorio();
        cout << notaAlunos[i] << " ";
    }
    for(int i = 0; i < 40; i++){
        frequencia[notaAlunos[i]]++;
    }
    cout << endl << "-------------------------------" << endl;
    for(int i = 1; i <= 10; i++){
        cout << "Nota " << i << " frequencia: " << frequencia[i] << endl;
    }
    return 0;
}
