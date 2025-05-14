#include<iostream>
using namespace	std;

int main(){
	double altura, peso, IMC;
	cout << "Digite o peso: ";
	cin >> peso;
	cout << "Digite a altura: ";
	cin >> altura;
	
	IMC = peso/(altura * altura);
	
	if(IMC >= 25){
		cout << "Acima do peso";
	}else if(IMC < 20){
		cout << "Abaixo do peso";
	}else{
		cout << "Peso ideal";
	}
	return 0;
}