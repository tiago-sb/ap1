/*
2. Considere a fun��o a seguir e responda: O que esta fun��o faz?

int F (int a){
	if (a <= 0)
		return 0;
	else
		return (a + F (a � 1));

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
	cout << "Insira um n�mero: ";
	cin >> a;
	linha();
	cout << "resultado: " << F(a) << endl;
	linha();
	cout << "| Em resumo, a fun��o 'F' faz o somat�rio de todos os n�meros anteriores ao n�mero digitado, | " << endl;
	cout << "| seguindo a f�rmula: n = n + (n - 1) + (n - 2) + ... + 0                                    | " << endl;
	linha();
	cout << " resultado = " << a << " + (" << a << " - " << 1 << ") + ... + " << 0 << " ==> " << F(a) << endl;
    linha();
	return 0;
}

