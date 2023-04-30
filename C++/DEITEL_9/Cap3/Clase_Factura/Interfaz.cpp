// Interfaz de Factura
#include<iostream>
#include<string>
#include"Factura.h"
using namespace std;

int main(){
	Factura miFactura("214", "Anteojos", 2, 500);

	cout << "Artículo:\t\t " << miFactura.getnumPieza() <<".\n" << endl;
	cout << "Descripción:\t\t " << miFactura.getdescPieza() << ".\n" << endl;
	cout << "Num. Artículos:\t\t " << miFactura.getnumArticulos() <<".\n" << endl;
	cout << "Precio:\t\t\t " << miFactura.getprecio() << ".\n" << endl;
	cout << ".\n" << endl;
	cout << "Total:\t\t\t" << miFactura.obtenerMonto() <<".\n" << endl;

	return 0;
}
