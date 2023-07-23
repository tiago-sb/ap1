#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int MAX_LINHA = 30, MAX_COLUNA = 30;
inline geraNum(){return(rand() % 100) + 1;}
int main(){
    int m, n, vetor[MAX_LINHA][MAX_COLUNA], permuta1, permuta2, aux;
    cout << "linha: ";
    cin >> m;
    cout << "coluna: ";
    cin >> n;
    cout << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            vetor[i][j] = geraNum();
            cout << setw(5) << vetor[i][j];
        }
        cout << endl;
    }
    cout << endl << "Insira linha para permuta[0," << n - 1 << "]: ";
    cin >> permuta1;
    cout << "Insira outra linha para permuta[0," << n - 1 << "]: ";
    cin >> permuta2;
    for(int i = 0; i < m; i++){
        aux = vetor[permuta1][i];
        vetor[permuta1][i] = vetor[permuta2][i];
        vetor[permuta2][i] = aux;
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << setw(5) << vetor[i][j];
        }
        cout << endl;
    }

    return 0;
}
