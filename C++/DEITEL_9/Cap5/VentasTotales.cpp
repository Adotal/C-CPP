#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	double
	producto1 = 2.98,
	producto2 = 4.5,
	producto3 = 9.98,
	producto4 = 4.49,
	producto5 = 6.87,
	total = 0;
	unsigned int select=0, cantidad=0;

	cout << fixed << setprecision(2);
	cout << "producto 1 ----- 2.98\n"
			"producto 2 ----- 4.5\n"
			"producto 3 ----- 9.98\n"
			"producto 4 ----- 4.49\n"
			"producto 5 ----- 6.87\n";
	cout << "Número del producto (-1 para terminar): ";
	cin >> select;

	while(select != -1){
		cout << "Cantidad de artículos: ";
		cin >> cantidad;

		switch(select){
			case 1:
				total += producto1 * cantidad;
				break;
			case 2:
				total += producto2 * cantidad;
				break;
			case 3:
				total += producto3 * cantidad;
				break;
			case 4:
				total += producto4 * cantidad;
				break;
			case 5:
				total += producto5 * cantidad;
				break;
			default:
				cout << "El producto seleccionado no existe" << endl;
		
		}

		cout << "Número de producto (-1 para terminar): ";
		cin >> select;
	}

	cout << "Venta total: $ " << total << endl;


	return 0;
}
