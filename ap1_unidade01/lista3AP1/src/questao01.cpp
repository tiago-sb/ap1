#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    system("cls");
    if(m < n){
        m++;
        while(m < n){
            cout << m << endl;
            m++;
        }
    }
    else {
        m--;
        while(m > n){
            cout << m << endl;
            m--;
        }
    }

    return 0;
}
