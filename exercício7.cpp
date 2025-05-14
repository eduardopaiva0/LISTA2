#include<iostream>
using namespace	std;

int main(){
	double l1,l2,l3;
	cout << "Digite o valor do primeiro lado: ";
	cin >> l1;
	cout << "Digite o valor do segundo lado: ";
	cin >> l2;
	cout << "Digite o valor do terceiro lado: ";
	cin >> l3;
	
	if(((l1 + l2) > l3) && ((l1 + l3) > l2) && ((l2 + l3) > l1)){
		cout << "Eh possivel formar o triangulo" << endl;
		if((l1 != l2) && (l1 != l3) &&(l2 != l3)){
		cout << "O triangulo eh escaleno";
	   	}else if((l1 == l2) && (l1 == l3) &&(l2 == l3)){
			cout << "O triangulo eh equilatero";
		}else {
			cout << "O triangulo eh isosceles";
		}
	}else{	
		cout << "Nao eh possivel formar o triangulo";
	}
	return 0;
}