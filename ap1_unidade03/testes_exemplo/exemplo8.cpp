/**
Foi solicitado a 40 alunos que emitissem uma nota para o nível de
qualidade da cantina, em uma escala de 1 a 10 (1 significando horrível e 10
significando excelente).
 Calcule a média das notas.
 Em seguida, conte quantas notas foram maiores que a média.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

inline int geraNota(){ return (rand() % 10) + 1;}
int main(){
    srand(time(0));
    int media = 0, cont = 0;
    int escala[10], nota[10];

    for(int i = 0; i < 10; i++){
        nota[i] = geraNota();
        cout << "nota aluno " << i << ": " << nota[i] << endl;
        media += nota[i];
    }
    media = media / 10;
    cout << "media: " << media << endl;

    for(int i = 0; i < 10; i++){
        if(nota[i] > media){
            cont++;
        }
    }
    //resultado
    cout << "alunos acima da media: " << cont << endl;

    return 0;
}
