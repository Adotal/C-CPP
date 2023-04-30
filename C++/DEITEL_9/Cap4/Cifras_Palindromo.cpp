#include<iostream>
using namespace std;

int main(){

	int	cifras = 0, digitos=0, contador = 10000;

	cout << "Escribe un número de cinco cifras: ";
	cin >> cifras;

	digitos = cifras;

	while(contador >= 1){
		cout << (digitos/contador) << "\t";
		digitos %= contador;

		contador /= 10;
	}

	cout << "\n" << endl;

	if ((cifras / 10000) != (cifras % 10)){
		cout << "No es palíndromo." << endl;

	} else if ((cifras % 10000)/1000 != (cifras % 100)/10){
		cout << "No es palíndromo." << endl;
	
	} else {
		cout << "El número " << cifras << " sí es palíndromo." << endl;
	
	}


}
