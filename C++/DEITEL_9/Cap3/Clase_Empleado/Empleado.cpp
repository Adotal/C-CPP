// Empleado.cpp
// Prueba de clase
#include<iostream>
#include<string>
#include "Empleado.h"

using namespace std;

int main(){
	int opt;
	Empleado Empleado_1("José", "Medina", 20000),
		 Empleado_2("Carlos", "Suárez", 30000);

	cout << "Lista de empleados:\n";
	Empleado_1.fichaEmpleado();
	Empleado_2.fichaEmpleado();

	cout << "Subir 10% al sueldo a ambos empleados? (Sí: 1)(No: 2) ";
	cin >> opt;
	
	if(opt == 1){
		Empleado_1.setSalarioMensual(Empleado_1.getSalarioMensual()*1.1);
		Empleado_2.setSalarioMensual(Empleado_2.getSalarioMensual()*1.1);

		cout << endl;
		cout << "La lista con los dato actualizados:\n";
		Empleado_1.fichaEmpleado();
		Empleado_2.fichaEmpleado();

	}

	return 0;
}
