// Definiciones de las funciones miembro de LibroCalificaciones
// implementaciones de las funciones contenidas en LibroCalificaciones.h

#include<iostream>
#include "LibroCalificaciones.h" // Definición de la clase
using namespace std;

//Constructor
LibroCalificaciones::LibroCalificaciones(string nombre, string instructor) {
	establecerNombreCurso(nombre);
	setNameInstructor(instructor);
}

void LibroCalificaciones::establecerNombreCurso(string nombre){
	if(nombre.size() <= 25){
		nombreCurso = nombre;
	} else if(nombre.size() > 25){
		nombreCurso = nombre.substr(0, 25);
		cerr << "El nombre \"" << nombre << "\" excede la longitud de carácteres(25).\n"
		        "se limitó el nombre del curso a los primeros 25 carácteres\n" << endl;
	}
}

string LibroCalificaciones::obtenerNombreCurso() const {
	return nombreCurso;
}

void LibroCalificaciones::setNameInstructor(string instructor){
	nameInstructor = instructor;
}

string LibroCalificaciones::getNameInstructor() const {
	return nameInstructor;
}


void LibroCalificaciones::mostrarMensaje() const {
	cout << "Bienvenido al libro de calificaciones para el curso \""
	     << obtenerNombreCurso() << "\" asignado al docente:\n"
	     << getNameInstructor() << ".\n" << endl;
}

