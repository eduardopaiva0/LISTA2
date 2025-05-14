#include<iostream>
using namespace	std;

int main(){
	double num1, num2, num3;
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "Digite o segundo numero : ";
	cin >> num2;
	cout << "Digite o terceiro numero : ";
	cin >> num3;
	
	if(num1 > num2){
		if(num1 > num3){
			cout << "O maior numero eh o primeiro: " << num1;
		}else{
			cout << "O maior numero eh o terceiro: " << num3;
		}
	}else if(num2 > num3){
		cout << "O maior numero eh o segundo: " << num2;
	}else{
		cout << "O maior numero eh o terceiro: " << num3;
	}
}