#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	int numCuenta=0;
	double
	saldoInicial=0,
	cargosTotales=0,
	creditosTotales=0,
	limiteCredito=0,
	saldoFinal=0;

	while(numCuenta != -1){

		cout << "Introduzca el número de cuenta (-1 para salir): ";
		cin >> numCuenta;

		if(numCuenta != -1){
			cout << "Introduza el saldo incial: ";
			cin >> saldoInicial; 
			cout << "Introduza los cargos totales: ";
			cin >> cargosTotales; 
			cout << "Introduzca los créditos totales: ";
			cin >> creditosTotales;	
			cout << "Introduzca el límite de crédito: ";
			cin >> limiteCredito;

			saldoFinal = saldoInicial + cargosTotales - creditosTotales;
			cout << setprecision(2) << fixed;
			cout << "\nEl nuevo saldo es: " << saldoFinal << endl;
			cout << "\n"
					"Cuenta:            " << numCuenta << "\n"
					"Límite de crédito: " << limiteCredito << "\n"
					"Saldo:             " << saldoFinal << endl;

			if(saldoFinal > limiteCredito)
				cout << "*Se exedió el límite de su crédito*" << endl;

			cout << "\n" << endl;
		}
	}
		

	return 0;
}
