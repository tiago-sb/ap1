/*
Faça um programa que calcule o número médio de alunos por turma. Para isto, peça a quantidade
de turmas e a quantidade de alunos para cada turma. As turmas não podem ter mais de 40 alunos.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int qntTurm, qntAluno, somAluno = 0, cont = 0;
    cout << "Insira a quantidade de turmas: ";
    cin >> qntTurm;

    for(int i = 1; i <= qntTurm; i++){
        cout << "Insira a quantidade de alunos da turma " << i << " : ";
        cin >> qntAluno;
        while(qntAluno > 40){
            cout << "Número de alunos não aceito! Entre com uma nova quantidade: ";
            cin >> qntAluno;
        }
        somAluno += qntAluno;
        cont++;
    }

    cout << fixed << setprecision(1);
    cout << "Numero médio de alunos por turma: " << somAluno / cont;

    return 0;
}
