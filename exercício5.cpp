#include<iostream>
using namespace	std;

int main(){
	double base, altura, area;
	cout << "Digite a base do retangulo: ";
	cin >> base;
	cout << "Digite a altura do retangulo: ";
	cin >> altura;
	
	area = base * altura;
	
	if(area > 100){
		cout << "A area do retangulo eh: " << area << endl;
		cout << "Terreno grande";
	}else{
		cout << "A area do retangulo eh: " << area << endl;
		cout << "Terreno pequeno";
	}
	return 0;
}