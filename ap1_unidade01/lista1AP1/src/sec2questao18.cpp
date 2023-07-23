/*
Faca um programa que verifique se uma letra digitada eh vogal ou consoante.
*/
#include <iostream>

using namespace std;

int main(){
    char l;
    cout << "Insira uma letra: ";
    cin >> l;
    if ((l == 'a') || (l == 'A') || (l == 'e') || (l == 'E') || (l == 'i') || (l == 'I') || (l == 'o') || (l == 'O') ||
        (l == 'u') || (l == 'U')){
        cout << l << " eh uma vogal! " << endl;
    } else {
        cout << l << " eh uma consoante! " << endl;

    }

    return 0;
}
