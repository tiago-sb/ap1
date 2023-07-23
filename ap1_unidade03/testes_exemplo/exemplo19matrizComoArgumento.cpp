#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int MAX_LINHA = 30, MAX_COLUNA = 30;
inline int gera(){return (rand() % 10) + 1;}
void geraMatriz(int [MAX_LINHA][MAX_COLUNA], int, int);
void imprimeMatriz(int [MAX_LINHA][MAX_COLUNA], int, int);
int main(){
    srand(time(0));
    int m, n, vet[MAX_LINHA][MAX_COLUNA];
    cout << "Insira linha: ";
    cin >> m;
    cout << "Insira coluna: ";
    cin >> n;
    geraMatriz(vet, m, n);
    imprimeMatriz(vet, m, n);
    return 0;
}
void geraMatriz(int vet[MAX_LINHA][MAX_COLUNA], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            vet[i][j] = gera();
        }
    }
}
void imprimeMatriz(int vet[MAX_LINHA][MAX_COLUNA], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << setw(4) << vet[i][j];
        }
        cout << endl;
    }
}
