#include <iostream>

using namespace std;

int main(){
	int idade, cont = 0;
    cout << "insira a idade do aluno: ";
    cin >> idade;
	while(idade != 0){
		if(idade <= 25){
			cont++;
		}
	}
	cout << "O total de alunos que possuem (25-) eh: " << cont << endl;
	return 0;
}
