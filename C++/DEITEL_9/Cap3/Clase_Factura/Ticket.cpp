// Interfaz de Factura
#include<iostream>
#include<string>
#include"Factura.h"
using namespace std;

int main(){
	int opt=0, val=0;
	string var;
	Factura miFactura("1234567", "Anteojos", 5, 500);

	cout << endl;
	cout << "Artículo\tDescripción\tNo.Artículos\tPrecio\n\n";
	cout << miFactura.getnumPieza()
	     <<	"\t\t" << miFactura.getdescPieza()
	     << "\t" << miFactura.getnumArticulos()
	     << "\t\t$ " << miFactura.getprecio()
	     << "\n\n\t\t\t\tTOTAL:\t\t$ " << miFactura.obtenerMonto() << endl;

	cout << "\nDesea crear un producto ? (Sí: 1)(No: 0) ";
	cin >> opt;
	if(opt==1){
		Factura miFact1("","",0,0);
		cout << "Número del producto (serie): ";
		cin >> var;
		miFact1.setnumPieza(var);

		cout << "Descripción del producto: ";
		cin >> var;
		miFact1.setdescPieza(var);

		cout << "Número de propductos seleccionados: ";
		cin >> val;
		miFact1.setnumArticulos(val);

		cout << "Precio del producto: ";
		cin >> val;
		miFact1.setprecio(val);
		cout << endl;


		cout << "Artículo\tDescripción\tNo.Artículos\tPrecio\n\n";
		cout << miFact1.getnumPieza()
		     <<	"\t\t" << miFact1.getdescPieza()
		     << "\t\t" << miFact1.getnumArticulos()
		     << "\t\t$ " << miFact1.getprecio()
		     << "\n\n\t\t\t\tTOTAL:\t\t$ " << miFact1.obtenerMonto() << endl;
	}
	
	return 0;
}
