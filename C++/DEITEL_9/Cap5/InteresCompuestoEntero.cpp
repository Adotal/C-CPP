#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
	
	// Centavos
	unsigned int montoInicial = 1000; 
	unsigned int tasaF = 100 + 5;
	unsigned int montoFinal;

	cout << "Anio" << setw(21) << "Monto en deposito" << endl;

	for(unsigned int i = 1; i <= 10; i++){
		montoFinal = montoInicial * pow(tasaF/100.0, i); 
		cout << setw(4) << i << setw(19)
			 << montoFinal << '.' << montoFinal%100 << endl;
	}
	
}
