#include<iostream>
using namespace	std;

int main(){
	double p1, p2, media;
	cout << "Digite o valor a prova 1: ";
	cin >> p1;
	media = 5;
	p2 = ((media * 3)-p1)/2;
	if(p1 >= 15){
		cout << "O aluno ja esta aprovado";
	}else{
		cout << "O valor minimo para ser aprovado eh: " << p2;
	}
	return 0;
}