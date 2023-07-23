/**
Escreva um programa para operar com vetores de inteiros de tamanho 20
através das seguintes funções:
1. armazenar em um vetor valores lido do teclado.
2. exibir os valores armazenados em um vetor.
3. retornar o maior elemento do vetor.
4. verificar se um número “x” recebido como parâmetro existe no
vetor. A função deve retornar true ou false e a posição do
elemento no vetor (caso retorne true).
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_LINHA = 20;
inline int geraNumeroAleatorio(){return (rand() % 100) + 1;}
void armazenaVetor(int [MAX_LINHA]);
void imprimeVetor(int [MAX_LINHA]);
int verificaMaior(int [MAX_LINHA]);
bool busca(int [MAX_LINHA], int &);
inline void linha(){cout << "-----------------------------\n";}
int main(){
    srand(time(0));
    int vetor[MAX_LINHA], maior, numero;
    bool buscaVetor;
    cout << "-- A --" << endl;
    armazenaVetor(vetor);
    linha();
    cout << "-- B --" << endl;
    imprimeVetor(vetor);
    cout << endl;
    linha();
    cout << endl << "-- C --" << endl;
    maior = verificaMaior(vetor);
    cout << "maior numero do vetor: " << maior << endl;
    linha();
    cout << "-- D --" << endl;
    cout << "Insira o numero para busca: ";
    cin >> numero;
    linha();
    buscaVetor = busca(vetor, numero);
    cout << "resultado: " << boolalpha << buscaVetor << endl;
    if(buscaVetor == true){
        cout << "posicao: [1," << numero + 1 << "] do vetor! " << endl;
    }
    else{
        cout << "o numero digitado nao se encontra no vetor! " << endl;
    }

    return 0;
}
void armazenaVetor(int vetor[MAX_LINHA]){
    for(int i = 0; i < 20; i++){
        vetor[i] = geraNumeroAleatorio();
    }
}
void imprimeVetor(int vetor[MAX_LINHA]){
    for(int i = 0; i < 20; i++){
        cout << setw(4) << vetor[i];
    }
}
int verificaMaior(int vetor[MAX_LINHA]){
    int maior = vetor[0];
    for(int i = 0; i < 20; i++){
        if(maior < vetor[i]){
            maior = vetor[i];
        }
    }
    return maior;
}
bool busca(int vetor[MAX_LINHA], int &numero){
    for(int i = 0; i < 20; i++){
        if(vetor[i] == numero){
            numero = i;
            return true;
        }
    }
    return false;
}
