#include <iostream>

using namespace std;

int enteroPotencia(int, unsigned int);

int main(){
	int base;
	unsigned int expo;
	cout << "Base^exponente" << endl
		 << "Base: ";
	cin >> base;
	cout << "Exponente: ";
	cin >> expo;
	cout << endl << base << '^' << expo << " = " << 
		 enteroPotencia(base, expo) << endl;
	return 0;
}

int enteroPotencia(int base, unsigned int exponente){
	int potencia = 1;
	for(int i = 0; i < exponente; ++i)
		potencia *= base;
	return potencia;
}
