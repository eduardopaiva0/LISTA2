#include<iostream>
using namespace	std;

int main(){
	double peso, altura, IMC;
	char sexo;
	cout << "Digite o seu sexo[digite M para masculino e F para feminino]: ";
	cin >> sexo;
	cout << "Digite seu peso: ";
	cin >> peso;
	cout << "Digite a sua altura: ";
	cin >> altura;
	
	IMC = peso/(altura * altura);
	if(sexo == 'F' || sexo == 'f'){
		if(IMC >= 24){
		cout << "Acima do peso";
	}else if(IMC < 19){
		cout << "Abaixo do peso";
	}else{
		cout << "Peso ideal";
	}
	}else if(sexo == 'M' || sexo == 'm'){
		if(IMC >= 25){
		cout << "Acima do peso";
	}else if(IMC < 20){
		cout << "Abaixo do peso";
	}else{
		cout << "Peso ideal";
	}
	}else{
		cout << "Sexo invalido";
	}
	return 0;
}