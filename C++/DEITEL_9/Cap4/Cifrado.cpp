#include<iostream>

using namespace std;

int main(){

	int dato=0, n1=0, n2=0, n3=0, n4=0;

	cout << "Dato a cifrar (4 cifras): ";
	cin >> dato;

	// Separación en digitos independientes:
	n1 = dato / 1000;
	n2 = (dato%1000) / 100;
	n3 = (dato%100) / 10;
	n4 = (dato%10); 

	// Sumar 7 a cada uno:
	n1 += 7;
	n2 += 7;
	n3 += 7;
	n4 += 7;

	// Resido de dividir entre 10:
	n1 %= 10;
	n2 %= 10;
	n3 %= 10;
	n4 %= 10;

	// Intercambio: 1-3, 2-4
	dato = n1;
	n1 = n3;
	n3 = dato;
	dato = n2;
	n2 = n4;
	n4 = dato;


	cout << "El dato cifrado es: " << n1 << n2 << n3 << n4 << endl;

	cout << "Dato a descifrar (4 cifras): ";
	cin >> dato;
	
	// Separación en digitos independientes:
	n1 = dato / 1000;
	n2 = (dato%1000) / 100;
	n3 = (dato%100) / 10;
	n4 = (dato%10); 

	// Intercambio 3-1, 4-2
	dato = n1;
	n1 = n3;
	n3 = dato;
	dato = n2;
	n2 = n4;
	n4 = dato;

	// Acción contraria a % 10
	if(n1 <= 6) n1 += 10;
	if(n2 <= 6) n2 += 10;
	if(n3 <= 6) n3 += 10;
	if(n4 <= 6) n4 += 10;

	// Restar 7
	n1 -= 7;
	n2 -= 7;
	n3 -= 7;
	n4 -= 7;

	cout << "El dato descifrado es: " << n1 << n2 << n3 << n4 << endl;

	return 0;
}
