/**
Escreva um programa que recebe um vetor de inteiros, calcula a soma de todos
os elementos do vetor e imprime a soma calculada.
*/

#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    //declaração das variáveis
    int tamanhoVetor, soma = 0;
    //pedido manual do tamanho do vetor
    cout << "Insira o tamanho do seu vetor: ";
    cin >> tamanhoVetor;
    int vet1[tamanhoVetor];
    cout << "---------------------------" << endl;
    //laço que calcula o somatório de todos os números
    //digitados manualmente
    for(int i = 0; i < tamanhoVetor; i++){
        cout << "Insira o valor " << i + 1 << " do vetor: ";
        cin >> vet1[i];
        soma += vet1[i];
    }
    cout << "---------------------------" << endl;
    cout << "Resultado do Somatório: " << soma << endl;

    return 0;
}
