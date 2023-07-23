/**
Modifique o exercício anterior de forma que o conteúdo de vet1 seja copiado para vet2 de forma
invertida. Por exemplo:
vet1 = 1 5 0 4 9 vet2 = 9 4 0 5 1
Por fim, o programa deve imprimir vet1 e vet2.
*/

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

const int MAX_COLUNA = 500;
int copiaMatriz(int [MAX_COLUNA], int [MAX_COLUNA], int);
void imprimeMatriz(int [MAX_COLUNA], int [MAX_COLUNA], int);
int main(){
    setlocale(LC_ALL,"portuguese");
    int vetor1[MAX_COLUNA], vetor2[MAX_COLUNA], coluna;

    do {
        cout << "insira o tamanho do vetor [1,500]: ";
        cin >> coluna;
    } while((coluna < 1)||(coluna > 500));

    for(int i = 0; i < coluna; i++){
        cout << "posição " << i + 1 << " do vetor: ";
        cin >> vetor1[i];
    }
    copiaMatriz(vetor1, vetor2, coluna);
    imprimeMatriz(vetor1, vetor2, coluna);

    return 0;
}
int copiaMatriz(int vetor1[MAX_COLUNA], int vetor2[MAX_COLUNA], int coluna){
    for(int i = 0, j = (coluna - 1); i < coluna; i++, j--){
        vetor2[j] = vetor1[i];
    }
}
void imprimeMatriz(int vetor1[MAX_COLUNA], int vetor2[MAX_COLUNA], int coluna){
    for(int i = 0; i < coluna; i++){
        cout << "| " << setw(3) << *(vetor1 + i) << setw(4) << *(vetor2 + i) << setw(3) << "|" << endl;
    }
}
