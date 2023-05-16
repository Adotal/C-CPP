#include<iostream>

using namespace std;

int main(){
	char option=0;
	int sueldo = 0,		// Guarda sueldo semanal o por producto
		tiempo = 0;		// Guarda tiempo de trabajo: semanas, horas.
	double paga = 0;		// Guarda sueldo final

	do{
		cout << "\nCalcular salario semanal Empresa Corp.\n\n"
				"[1] Gerente\n"
				"[2] Trabajador por hora \n"
				"[3] Trabajador por comisión\n"
				"[4] Trabajador por piezas\n"
				"[S] Salir" << endl
			 << "Seleciona una opción: ";
		cin >> option;

		switch(option){
			case '1':
				cout << "Introduce el sueldo semanal del trabajador: ";
				cin >> sueldo;
				
				cout << "Semanas de trabajo efectivas: ";
				cin >> tiempo;

				paga = sueldo * tiempo;

				cout << "El gerente recibirá: $ " << paga << endl;

				break;

			case '2':
				cout << "Introduce el sueldo por hora del trabajador: ";
				cin >> sueldo;

				cout << "Horas de trbajo efectivas: ";
				cin >> tiempo;

				if(tiempo <= 40){
					paga = sueldo * tiempo;
				} else {
					paga = sueldo * 40;
					paga += sueldo * 1.5 * (tiempo-40);
				}

				cout << "El trabajador por hora recibirá: $ " << paga << endl;

				break;

			case '3':
				cout << "Introduce la cantidad vendia por el trabajador:";
				cin >> sueldo;
				paga = 250;
				paga += sueldo * 0.057;
				cout << "El trabajador por hora recibirá: $ " << paga << endl;
				
				break;

			case '4':
				cout << "Introduce la cantidad de piezas producidas por el trbajador: ";
				cin >> sueldo;

				cout << "Introduce el beneficio del trabajador por pieza: ";
				cin >> tiempo;

				paga = sueldo * tiempo;

				cout << "El trabajador por hora recibirá: $ " << paga << endl;
				break;

			case 'S':
			case 's':
				break;
		}
		
		cout << endl;

	} while(option != 'S' && option != 's');



	return 0;
}
