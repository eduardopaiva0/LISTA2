#include<iostream>
using namespace	std;

int main(){
	double num1, num2;
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "Digite o segundo numero diferente do primeiro: ";
	cin >> num2;
	
	if(num1 > num2){
		cout << "O maior numero eh o: " << num1;
	}else if(num2 > num1){
		cout << "O maior numero eh o: " << num2;
	}else{
		cout << "Os dois numeros tem valores iguais";
	}
	return 0;
}