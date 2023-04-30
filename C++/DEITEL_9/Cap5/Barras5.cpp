#include<iostream>
using namespace std;

int main(){
	unsigned int valor1,valor2,valor3,valor4,valor5, i=0;
	cout << "Introduce 5 valores para dibujar sus barras: ";
	cin >> valor1 >> valor2 >> valor3 >> valor4 >> valor5;
	
	cout << valor1 << ": ";
	for(i = 0; i < valor1; ++i) cout << '*';
	cout << endl;

	cout << valor2 << ": ";
	for(i = 0; i < valor2; ++i) cout << '*';
	cout << endl;

	cout << valor3 << ": ";
	for(i = 0; i < valor3; ++i) cout << '*';
	cout << endl;

	cout << valor4 << ": ";
	for(i = 0; i < valor4; ++i) cout << '*';
	cout << endl;

	cout << valor5 << ": ";
	for(i = 0; i < valor5; ++i) cout << '*';
	cout << endl;
}
