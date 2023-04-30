#include<iostream>
using namespace std;

int main(){

	unsigned int entrada=0, factorial=1, salida;

	cout << "Número a obtener su factorial: ";
	cin >> entrada;
	salida = entrada;
	while(entrada >= 1){
		factorial *= entrada;
		--entrada;

	}

	cout << salida  <<"! = " << factorial << endl;

	return 0;
}
