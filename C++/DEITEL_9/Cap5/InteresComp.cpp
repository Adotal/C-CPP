#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){

	double montoInicial = 1000;
	double tasaF = 1 + 0.05;
	double montoFinal;

	cout << "Anio" << setw(21) << "Monto en deposito" << endl;
	cout << fixed << setprecision(2);

	for(int i = 1; i <= 10; i++){

		montoFinal = montoInicial * pow(tasaF, i);
		cout << right << setw(4) << i << setw(21) << montoFinal << endl;
	
	}

	
}
