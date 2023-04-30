#include<iostream>
using namespace std;

int main(){
	
	const double pi = 3.14159;
	double radio = 0;

	cout << "Introduce el radio del círculo: ";
	cin >> radio;

	cout << "Diámetro:       " << (2 * radio) << "\n"
			"Circunferencia: " << (2 * pi * radio) << "\n"
			"Área:           " << (pi * radio * radio) << "\n"
		 << endl;


	return 0;
}
