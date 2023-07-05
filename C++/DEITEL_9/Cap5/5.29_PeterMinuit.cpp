// 5.29_PeterMinuit.cpp
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){

	double montoInicial = 24;
	double tasa = 0.05;
	double montoFinal = 0;
	int years = 0;
	unsigned int i=0, j = 0;

	cout << "La leyenda establece que, en 1626, Peter Minuit\n"
			"compró la isla de Manhattan por $24.00 en un\n"
			"trueque. Veamos el desarrollo de su inversión:" << endl;
	cout << "Por favor, proporcione el año actual: ";
	cin >> years;

	years -= 1626;
	

	// Print top of the box
	cout << "    " << left;
	for(i = 0; i < 6; ++i){
		cout << setw(1) <<tasa*100 << setw(17) << '%';
		tasa += 0.01;
	}
	cout << endl << left << setw(5) << "Años";
	for(i = 0; i < 6; ++i){	
		 cout << setw(16) << " Monto";
	}
	cout << endl << fixed << setprecision(0);

	// Fill the box 
	tasa = 0.05;
	for(i = 1 ; i <= years; ++i){
		cout << setw(4) << i;
		for(j = 0, tasa = 0.05; j < 6; ++j, tasa += 0.01){
			montoFinal = montoInicial * pow((1 + tasa), i);
			//montoInicial *= (1 + tasa);

			cout << "$ " << setw(13 + j) << montoFinal;
		}
		cout << endl;
	}
}
