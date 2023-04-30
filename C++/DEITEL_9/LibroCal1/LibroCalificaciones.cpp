// Definiciones de las funciones miembro de LibroCalificaciones
// implementaciones de las funciones contenidas en LibroCalificaciones.h

#include<iostream>
#include<iomanip>
#include "LibroCalificaciones.h" // Definición de la clase
using namespace std;

//Constructor
LibroCalificaciones::LibroCalificaciones(string nombre)
	:aCount(0), bCount(0), cCount(0), dCount(0), eCount(0), fCount(0)
{
	establecerNombreCurso(nombre);
}

void LibroCalificaciones::establecerNombreCurso(string nombre){
	if(nombre.size() <= 25){
		nombreCurso = nombre;
	} else{
		nombreCurso = nombre.substr(0, 25);
		cerr << "El nombre \"" << nombre
		     << "\" excede la longitud de carácteres(25).\n"	
		        "se limitó el nombre del curso a los primeros 25 carácteres\n"
		     << endl;
	}
}

string LibroCalificaciones::obtenerNombreCurso() const {
	return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const {
	cout << "Bienvenido al libro de calificaciones para: \n"
	     << obtenerNombreCurso() << "!" << endl;
}

void LibroCalificaciones::determinarPromedio() const {

	int total = 0;
	unsigned int contador = 0;
	int cal = 0;

	cout << contador <<". Escriba una calificación o -1 para salir: ";
	cin >> cal;


	while(cal != -1){
		total += cal;
		contador ++;
		cout << contador <<". Escriba una calificación o -1 para salir: ";
		cin >> cal;
	}

	if(contador != 0){
		double promedio = static_cast<double> (total) / contador;
	
		cout << "\nEl total de las calificaciones es " << total;
		cout << setprecision(2) << fixed;
		cout <<	"\nEl promedio de las clase es " << promedio << endl;
	} else {
		cerr << "No se introducieron valores.";
	}
}

void LibroCalificaciones::recibirCalificaciones(){
	int calif;
	cout << "Escriba las califcaciones en letras (A,B,C,D,E,F).\n"
			"Salir: Linux (Ctrl + d) Windows (Ctrl + z)." << endl;
	
	while( (calif = cin.get()) != EOF){

		switch(calif){
			case 'A':
			case 'a':
				++aCount;
				break;
			case 'B':
			case 'b':
				++bCount;
				break;

			case 'C':
			case 'c':
				++cCount;
				break;

			case 'D':
			case 'd':
				++dCount;
				break;
			case 'E':
			case 'e':
				++eCount;
				break;
			case 'F':
			case 'f':
				++fCount;
				break;

			case '\n':
			case '\t':
			case ' ':
				break;

			default:
				cout << "Se introdujo un valor no admintido.\n"
						"Escriba una nueva calificación." << endl;
				break;
		}
	
	}
}

void LibroCalificaciones::mostrarReporte() const {
	cout << "\n\nNúmero de estudiantes que recibieron una calificación:"
		 <<	"\nA: " << aCount
		 <<	"\nB: " << bCount
		 <<	"\nC: " << cCount
		 <<	"\nD: " << dCount
		 <<	"\nE: " << eCount
		 <<	"\nF: " << fCount
		 << endl;
}

