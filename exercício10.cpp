#include<iostream>
using namespace	std;

int main(){
	double p1, p2, media;
	cout << "Digite o valor a prova 1: ";
	cin >> p1;
	cout << "Digite o valor a prova 2: ";
	cin >> p2;
	
	media = (p1 + (2 * p2))/3;
	if(media >= 5){
		cout << "Aluno aprovado";		
	}else{
		cout << "Aluno reprovado";
	}
	return 0;
}