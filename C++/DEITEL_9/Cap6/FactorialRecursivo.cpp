// FactorialRecursivo.cpp

#include <iostream>

using namespace std;

unsigned long int factorial(unsigned long int);

int main(){
	int numbero = 0;
	cout << "Escribe un número a calcular su"
			"factorial: ";
	cin >> numbero;
	cout << numbero << "! = " << factorial(numbero);

	return 0;
}


unsigned long factorial(unsigned long num){
	if(num <= 1)
		return 1;
	else
		return num * factorial(num - 1);
}
