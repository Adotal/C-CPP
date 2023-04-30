// Definiciones de las funciones miembro de LibroCalificaciones
// implementaciones de las funciones contenidas en LibroCalificaciones.h

#include<iostream>
#include<iomanip>
#include "LibroCalificaciones.h" // Definición de la clase
using namespace std;

//Constructor
LibroCalificaciones::LibroCalificaciones(string nombre) {
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
