#include <iostream>

using namespace std;

int main() {
    int m, n, c = 0;
    cin >> m >> n;
    system("cls");
    if(m < n){
        m++;
        while(m < n){
            c += m;
            m++;
        }
    } else {
        m--;
        while(m > n){
            c += m;
            m--;
        }
    }
    cout << "soma do intervalo: " << c << endl;

    return 0;
}
