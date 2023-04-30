#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double
	tarifa=0,
	salario=0;

	int horas=0;

	while(horas != -1){
		cout << "Introduzca las horas trabajadas (-1 para salir): ";
		cin >> horas;

		if(horas != -1){
			cout << "Introduzca la tarifa por horas del empleado ($ 00.00): ";
			cin >> tarifa;

			if(horas <= 40){
				salario = horas * tarifa;
			}else{
				salario = 40 * tarifa;
				salario += (tarifa * 1.5 * (horas-40));
			}

			cout << setprecision(2) << fixed;
			cout << "El salario es: $ " << salario << endl;
		
		}
		cout << endl;
	
	}

	return 0;
}
