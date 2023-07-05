// Definiciones de las funciones miembro de LibroCalificaciones
// implementaciones de las funciones contenidas en LibroCalificaciones.h

#include<iostream>
#include<iomanip>
#include "LibroCalificaciones.h" // Definición de la clase
using namespace std;

//Constructor
LibroCalificaciones::LibroCalificaciones(string nombre)
	: califMax(0)
{
	establecerNombreCurso(nombre);
}

void LibroCalificaciones::establecerNombreCurso(string nombre){
	if(nombre.size() <= 25){
		nombreCurso = nombre;
	} else{
		nombreCurso = nombre.substr(0, 25);
		cerr << "\nEl nombre \"" << nombre
			 << "\" excede la longitud de carácteres(25)."
			    "\nSe limitó el nombre del curso a los"
				"\nprimeros 25 carácteres."
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

void LibroCalificaciones::recibirCalificaciones(){
	int calif1, calif2, calif3;
	cout << "Introduzca tres calificaciones enteras: ";
	cin >> calif1 >> calif2 >> calif3;

	califMax = maximo(calif1, calif2, calif3);
}

int LibroCalificaciones::maximo(int a, int b, int c) const {
	int max = a;
	if(b > max) max = b;
	if(c > max) max = c;
	return max;
}

void LibroCalificaciones::mostrarReporte() const {
	cout << "Calificación maxima introducida: "
		 << califMax;
}

