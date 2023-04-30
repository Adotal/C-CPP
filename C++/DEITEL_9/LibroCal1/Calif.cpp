// Separación de la interfaz y su implementación

#include<iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main(){
	LibroCalificaciones miLibCal1("Curso One: Programación");
	LibroCalificaciones miLibCal2("Curso Two: SP");

	cout << "miLibCal1 creado para:\n" << miLibCal1.obtenerNombreCurso()
	     <<	"\n\n" << endl;
	cout << "miLibCal2 creado para:\n" << miLibCal2.obtenerNombreCurso()
	     <<	"\n\n" << endl;
	
	//miLibCal1.determinarPromedio();
	miLibCal1.recibirCalificaciones();	
	miLibCal1.mostrarReporte();	

	return 0;
}
