/*
2. Considere a função a seguir e responda: O que esta função faz?

int F (int a){
	if (a <= 0)
		return 0;
	else
		return (a + F (a – 1));

}
*/

#include <iostream>
#include <locale>

using namespace std;

int F(int a){
	if(a <= 0){
		return 0;
	}
	else{
		return (a + F(a - 1));
	}
}
void linha(){
    cout << "------------------------------------------------------------------------\n";
}
int main(){
	setlocale(LC_ALL,"portuguese");
	int a;
	cout << "Insira um número: ";
	cin >> a;
	linha();
	cout << "resultado: " << F(a) << endl;
	linha();
	cout << "| Em resumo, a função 'F' faz o somatório de todos os números anteriores ao número digitado, | " << endl;
	cout << "| seguindo a fórmula: n = n + (n - 1) + (n - 2) + ... + 0                                    | " << endl;
	linha();
	cout << " resultado = " << a << " + (" << a << " - " << 1 << ") + ... + " << 0 << " ==> " << F(a) << endl;
    linha();
	return 0;
}

