#include<iostream>
using namespace	std;

int main(){
	double c1,c2,hip;
	cout << "Digite o valor do primeiro cateto: ";
	cin >> c1;
	cout << "Digite o valor do segundo cateto: ";
	cin >> c2;
	cout << "Digite o valor da hipotenusa: ";
	cin >> hip;
	if(((c1 * c1) + (c2 * c2)) == (hip * hip)){
		cout << "Os valores dos lados eh possivel formar um triangulo retangulo";
	}else{
		cout << "Nao eh possivel formar um triangulo retangulo";
	}
	return 0;
}