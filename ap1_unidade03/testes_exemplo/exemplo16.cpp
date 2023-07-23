/*
Escreva um programa que armazene em um arranjo bidimensional
as notas alcançadas pelos 40 alunos de uma turma, nas três unidades.
Considere que cada linha do arranjo corresponde a um aluno e cada coluna
a uma unidade.
--
imprimir todas as notas do arranjo em forma de tabela;
--
imprimir a menor e a maior nota de todas as existentes no arranjo;
--
imprimir a média de todas as notas existentes no arranjo.
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

inline float geraNota(){return (rand() % 10) + 1;}
int main() {
    srand(time(0));
    setlocale(LC_ALL,"portuguese");
    int notas[40][3], menorNota, maiorNota;
    float mediaGeral = 0;
    //laço que gera notas aleatórias e printa tudo isso na tela
    for(int i = 0; i < 40; i++){
        for(int j = 0; j < 3; j++){
            notas[i][j] = geraNota();
            mediaGeral += notas[i][j];
            if(j == 0){
                if(i < 9){
                    cout << "| Nota Aluno 0" << i + 1 << " --> " << setw(2) << notas[i][j];
                }
                else {
                    cout << "| Nota Aluno " << i + 1 << " --> " << setw(2) << notas[i][j];
                }
            }
            else {
                cout << setw(3) << notas[i][j];
            }
            maiorNota = notas[i][j];
            menorNota = notas[i][j];
        }
        cout << " |\n";
    }
    mediaGeral = mediaGeral / (40 * 3);
    //laço que verifica quais foram as maiores e menores notas obtidas
    for(int i = 0; i < 40; i++){
        for(int j = 0; j < 3; j++){
            if(maiorNota < notas[i][j]){
                maiorNota = notas[i][j];
            }
            if(menorNota > notas[i][j]){
                menorNota = notas[i][j];
            }
        }
    }
    cout << " --Resultados--" << endl;
    cout << " Menor Nota      --> " << menorNota << endl;
    cout << " Maior Nota      --> " << maiorNota << endl;
    cout << fixed << setprecision(1);
    cout << " Média das notas --> " << mediaGeral << endl;

    return 0;
}
