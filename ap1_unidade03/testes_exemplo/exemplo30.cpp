/**

*/

#include <iostream>

using namespace std;

int main(){
    string s1 = "ana maria", s2, s3 = "tiago bela";
    s2.assign(s1);
    cout << s2 << endl;
    s1[1] = 't';
    cout << s1 << endl;
    cout << s3.length() << endl;
    for(int i = 0; i < s3.length(); i++){
        cout << s3.at(i);
    }
    return 0;
}
