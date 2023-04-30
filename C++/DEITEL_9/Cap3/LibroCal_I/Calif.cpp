// Separación de la interfaz y su implementación

#include<iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main(){
	LibroCalificaciones miLibCal1("Programación", "Adro Ornelas");
	LibroCalificaciones miLibCal2("SP", "Adael Iskander");

	miLibCal1.mostrarMensaje();
	miLibCal2.mostrarMensaje();
}
