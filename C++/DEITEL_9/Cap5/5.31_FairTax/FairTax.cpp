// FairTax.cpp

#include <iostream>
#include "FairTax.h"

using namespace std;

// Class implementation
FairTax::FairTax()
	:tax(0)
	{}

// Functions implementation

void FairTax::presenta() const{
	cout << "\n	FAIR TAX"
			"\nNuestra sugerencia es eliminar los"
			"\nimpuestos sobre los ingresos y otros"
			"\nimpuestos más a favor de un 23% de"
			"\nimpuestos sobre el consumo en todos los"
			"\nproductos y servicios que usted compre."
			"\n\nSi le interesa caluclar su impuesto"
			"\nmediante la propuesta, introduza sus"
			"\ngasttos:" << endl;
}

double FairTax::getTax() const{
	return tax;
}

void FairTax::plusTax(double tax1){
	tax += tax1;
}

void FairTax::recopilar(){
	double tax1=0;
	cout << "\nIntroduzca sus gastos de:"
			"\nComida"
			"\nRopa"
			"\nTransporte"
			"\nEducación"
			"\nServicios médicos"
			"\nVacaciones"
			"\nSalir: Introducir 0 (cero)"
		 << endl << ": ";
	cin >> tax1;
	while(tax1){	// While tax1 != 0
		plusTax(tax1);
		cout << ": ";
		cin >> tax1;
	}
}

void FairTax::calcular(){
	tax *= 0.23;
}

void FairTax::printTax() const{
	cout << "\nEl impuesto a pagar por todos los gastos es:"
			"\n $ " << getTax() << endl;
}


