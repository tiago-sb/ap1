#include <iostream>

using namespace std;

int main(){
    int v, a = 0, b = 1, aux = 1, i = 0;
    cin >> v;
    for(i;i < v;i++){
        cout << aux << " ";
        aux = a + b;
        a = b;
        b = aux;
    }

    return 0;
}
