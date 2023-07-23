/**
Na matemática é comum utilizar matrizes de números. Tais matrizes podem ser usadas para
vários propósitos e a álgebra linear fornece a teoria necessária para sua manipulação.
Dada uma matriz M (4 X 4), você deve fazer um programa para armazenar a matriz e chamar as
seguintes funções:
- imprimeMatriz – imprime a matriz armazenada;
- multK – lê uma constante k, e armazena em uma segunda matriz, Mk, a resultante do
produto 4*M. Isto é, cada elemento de Mk é igual ao elemento correspondente de M
multiplicado por 4. No programa principal, após chamar multK, imprima Mk (com a ajuda
de imprimeMatriz). Veja que para que isso seja possível, Mk deve ser declarada em main
e passada para multK como argumento.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <iomanip>

using namespace std;

const int MAX_COLUNA = 4;
inline int geraNumeroAleatorio(){return (rand() % 100) + 1;}
void geraMatriz(int [MAX_COLUNA][MAX_COLUNA]);
void multiplicaMatriz(int [MAX_COLUNA][MAX_COLUNA], int);
void permutaMatriz(int [MAX_COLUNA][MAX_COLUNA], int, int);
void imprimeMatriz(int [MAX_COLUNA][MAX_COLUNA]);
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int matriz[MAX_COLUNA][MAX_COLUNA], constante, permuta1, permuta2;
    string linha(21,'-');
    geraMatriz(matriz);
    cout << linha << endl;
    cout << "----matriz gerada----" << endl;
    cout << linha << endl;
    imprimeMatriz(matriz);
    cout << linha << endl;
    cout << "insira a linha para permuta 1: ";
    cin >> permuta1;
    cout << "insira a linha para permuta 2: ";
    cin >> permuta2;
    permutaMatriz(matriz, permuta1, permuta2);
    cout << linha << endl;
    imprimeMatriz(matriz);
    cout << linha << endl;
    cout << "insira o valor da constante: ";
    cin >> constante;
    multiplicaMatriz(matriz, constante);
    cout << linha << endl;
    imprimeMatriz(matriz);
    cout << linha << endl;

    return 0;
}
void geraMatriz(int matriz[MAX_COLUNA][MAX_COLUNA]){
    for(int i = 0; i < MAX_COLUNA; i++){
        for(int j = 0; j < MAX_COLUNA; j++){
            matriz[i][j] = geraNumeroAleatorio();
        }
    }
}
void multiplicaMatriz(int matriz[MAX_COLUNA][MAX_COLUNA], int constante){
    for(int i = 0; i < MAX_COLUNA; i++){
        for(int j = 0; j < MAX_COLUNA; j++){
            matriz[i][j] = (matriz[i][j] * constante);
        }
    }
}
void permutaMatriz(int matriz[MAX_COLUNA][MAX_COLUNA], int linha1, int linha2){
    for(int i = 0; i < MAX_COLUNA; i++){
        int aux = matriz[linha1][i];
        matriz[linha1][i] = matriz[linha2][i];
        matriz[linha2][i] = aux;
    }
}
void imprimeMatriz(int matriz[MAX_COLUNA][MAX_COLUNA]){
    for(int i = 0; i < MAX_COLUNA; i++){
        for(int j = 0; j < MAX_COLUNA; j++){
            cout << setw(5) << matriz[i][j];
        }
        cout << endl;
    }
}
