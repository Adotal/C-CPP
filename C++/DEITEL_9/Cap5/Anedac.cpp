#include<iostream>
using namespace std;

int main(){
	
	char cadena[20];

	int i = 0, slong = 0;

	cout << "Escribe una cadena: ";
	cin.get(cadena, 20);	
	fflush(stdin);

	cout << "Resultado: ";

	for(slong  = 0; cadena[slong] != '\x0'; ++slong);
	for(i = slong; i >= 0; --i) cout << cadena[i];

	return 0;
}
