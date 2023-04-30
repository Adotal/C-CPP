#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int km=0;			// Var kilómetros

	unsigned int
	litros=0,			// Var Litros
	totalKm=0, 			// Var Total de kilómetros
	totalLitros=0;		// Var Total de litros

	double
	kmPorLitro=0,		// Var Kilómetros por litro  
	totalKmPorLitro=0;	// Var Total de Kilómetros por litro

	while(km != -1){

		cout << "Escribe los kilómetros usados (-1 para salir): ";
		cin >> km;

		if(km != -1){

			cout << "Escribe los litros: ";
			cin >> litros;

			kmPorLitro = static_cast<double> (km) / litros;
			cout << setprecision(6) << fixed;
			cout << "KPL en este reabastecimiento: " << kmPorLitro << endl;		

			totalKm += km;
			totalLitros += litros;
			totalKmPorLitro = static_cast<double> (totalKm) / totalLitros;
			cout << "Total KPL: " << totalKmPorLitro << "\n" << endl;
			
		}
	
	}
		

	return 0;
}
