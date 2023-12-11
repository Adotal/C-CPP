// ArgumentoReferencia.cpp

#include <iostream>
using namespace std;

unsigned int cuadValor(int);
void cuadReferencia(int&);

int main(){
	int a = 2, b = 4;
	
	cout << "Parámetro por valor:" << endl
		 << "Antes  : " << a << endl
		 << "Durante: " << cuadValor(a) << endl
		 << "Después: " << a << endl;

	cout << "Parámetro por referencia:" << endl
		 << "Antes  : " << b << endl;
	cuadReferencia(b);
	cout << "Durante: " << b << endl
		 << "Después: " << b << endl;
	return 0;
}

unsigned int cuadValor(int x){
	return x*x;
}
void cuadReferencia(int &x){
	x *= x;
}
