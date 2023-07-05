// Calif.cpp

#include "LibroCalificaciones.h"

using namespace std;

int main(){
	LibroCalificaciones miLibCal1("Curso One: Programación");

	miLibCal1.mostrarMensaje();
	miLibCal1.recibirCalificaciones();	
	miLibCal1.mostrarReporte();	

	return 0;
}
