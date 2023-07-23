/**

*/

#include <iostream>

using namespace std;

int desconheco(int a, int b){
    if(b == 0){
        return 1;
    }
    else {
        return (a * desconheco(a, b - 1));
    }
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << ": " << desconheco(a, b);
    return 0;
}
