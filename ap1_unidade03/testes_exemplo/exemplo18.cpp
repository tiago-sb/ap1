/**
Escreva um programa que use funções para realizar as
seguintes operações sobre uma matriz de inteiros :
--
1. Imprimir, linha a linha, a matriz.

2. Calcular a soma dos elementos da linha i da matriz.

3. Calcular o produto dos elementos da coluna j da matriz.

4. Receber dois inteiros, i e j, e trocar a linha i pela linha j.
--
*/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_LINHA = 20, MAX_COLUNA = 20;
void geraMatriz(float [MAX_LINHA][MAX_COLUNA], int, int);
void produtoColunaMatriz(float [MAX_LINHA][MAX_COLUNA] , int, int, int, float);
void imprimeMatriz(float [MAX_LINHA][MAX_COLUNA], int, int);
void permuta(float [MAX_LINHA][MAX_COLUNA], int, int, int, int);
inline gera(){return (rand() % 100) + 1 ;}
int main(){
    srand(time(0));
    int m, n, colunaEscolhida, linhaEscolhida1, linhaEscolhida2;
    float matriz[MAX_LINHA][MAX_COLUNA], k;
    do {
        cout << "Insira o valor de linhas da matriz: ";
        cin >> m;
    } while(m < 0);
    do {
        cout << "Insira o valor de colunas da matriz: ";
        cin >> n;
    } while(n < 0);
    cout << " --A--" << endl;
    geraMatriz(matriz, m, n);
    imprimeMatriz(matriz, m, n);
    cout << endl << " --B--" << endl;
    cout << "Escolha uma dentre as " << n << " colunas da matriz (entre 0 e " << n - 1 << "): ";
    cin >> colunaEscolhida;
    cout << "Escolha uma constante: ";
    cin >> k;
    produtoColunaMatriz(matriz, m, n, colunaEscolhida, k);
    imprimeMatriz(matriz, m, n);
    cout << " --C--" << endl;
    cout << "Escolha uma dentre as " << m << " inhas da matriz (entre 0 e " << m - 1 << "): ";
    cin >> linhaEscolhida1;
    cout << "Escolha uma dentre as " << n << " linhas da matriz (entre 0 e " << n - 1 << "): ";
    cin >> linhaEscolhida1;
    permuta(matriz, m, n, linhaEscolhida1, linhaEscolhida2);
    imprimeMatriz(matriz, m, n);
    return 0;
}
void geraMatriz(float matriz[MAX_LINHA][MAX_COLUNA], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = gera();
        }
        cout << endl;
    }
}
void imprimeMatriz(float matriz[MAX_LINHA][MAX_COLUNA], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << setw(5) << matriz[i][j];
        }
        cout << endl;
    }
}
void produtoColunaMatriz(float matriz[MAX_LINHA][MAX_COLUNA] , int m, int n, int colunaEscolhida, float k){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(j == colunaEscolhida){
                matriz[i][j] *= k;
            }
        }
    }
}
void permuta(float matriz[MAX_LINHA][MAX_COLUNA], int m, int n, int linhaEscolhida1, int linhaEscolhida2){
    float aux;
    for(int i = 0; i < m; i++){
        aux = matriz[linhaEscolhida1][i];
        matriz[linhaEscolhida1][i] = matriz[linhaEscolhida2][i];
        matriz[linhaEscolhida2][i] = aux;
    }
}
