#include<iostream>
using namespace std;

int main(){
	
	unsigned int binario = 0, decimal = 0, power = 1;
	
	cout << "Escribe un número binario: ";
	cin >> binario;

	while(binario >= 1){

		decimal += (binario%10) * power;
		binario /= 10;
		power *= 2;
	
	}
	cout << "El número decimal es: " << decimal << endl;

	return 0;
}
