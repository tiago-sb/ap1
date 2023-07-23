/**
Escreva uma função teste na qual sejam declaradas duas variáveis. A primeira, contador, deve
ser estática; e a segunda, nova, deve ser automática. Ambas devem ser inicializadas com 0. A
variável contador deve registrar o número de vezes que a função é chamada. Isto é, cada vez
que a função entra em execução, a variável deve ser incrementada (+1). Por outro lado, cada vez
que a função é executada, nova deve ser incrementada de 5. Antes de retornar para main,
imprima ambas as variáveis.
Escreva um programa em C++ que chame a função teste dentro de um laço que só termina
quando o usuário digitar o valor -1.
Escreva um arquivo de cabeçalho com o protótipo da função teste e inclua-o no seu programa
principal.
*/

#include <iostream>

using namespace std;

int teste();
int main(){
    int v;

    do {
        cout << "Insira um valor: ";
        cin >> v;
        teste();
    } while(v != -1);

    return 0;
}
int teste(){
    static int contador = 0;
    int nova = 0;
    contador++;
    nova += 5;
    cout << "contador: " << contador << endl;
    cout << "nova: " << nova << endl;
}
