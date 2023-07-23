#include <iostream>

using namespace std;

inline int somaRec(int i, int j){return (j == 0 ? i : somaRec(i + 1, j - 1));}
inline int subRec(int i, int j){return (j == 0 ? i : subRec(i - 1, j - 1));}
int main(){
/*    int valor1, valor2;
    cout << "insira o valor 1: ";
    cin >> valor1;
    cout << "insira o valor 2: ";
    cin >> valor2;
    cout << "resultado: (+) " << somaRec(valor1, valor2) << endl;
    cout << "resultado: (-) " << subRec(valor1, valor2) << endl;
*/
    string nome1 = "tiago", nome2 = "tiagos";
    cout << nome1.compare(0, 5, nome2, 0, 5) << endl;

    return 0;
}
