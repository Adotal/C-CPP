// Examen.cpp

#include <iostream>
#include "Examen.h"
using namespace std;

// Implementación de clase

// Constructor
Examen::Examen()
	: calif(0)
	{}

// Implementación de funciones
void Examen::correctAns(){
	++calif;
}

void Examen::cuestionario(){
	int answer = 0;

	cout << "\n1.¿Cuál de los siguientes gases es"
			"\n  uno de los principales responsables"
			"\n  del cambio climático?"
			"\n    1) Helio"
			"\n    2) Oxígeno"
			"\n    3) Metano"
			"\n    4) Argón"
			"\nEscribe el número de la opción correcta: ";
	cin >> answer;
	if(3 == answer) correctAns();

	cout << "\n2.¿Cómo se producen principalmente"
			"\n  los gases de efecto invernadero?"
			"\n    1) Comer saludablemente"
			"\n    2) Realizar actividad física"
			"\n    3) Quema de combustibles fósiles"
			"\n    4) Uso excesivo e las redes sociales"
			"\nEscribe el número de la opción correcta: ";
	cin >> answer;
	if(3 == answer) correctAns();

	cout << "\n3.¿Cuáles son consecuencias en"
			"\n  el planeta por el cambio climático?"
			"\n    1) Inestabilidad emocional"
			"\n    2) Escasez de agua e incendios graves"
			"\n    3) Desabasto de carne"
			"\n    4) Congelación de los polos"
			"\nEscribe el número de la opción correcta: ";
	cin >> answer;
	if(2 == answer) correctAns();

	cout << "\n4.¿A qué temperatura global se debería"
			"\n  el aumento para evitar impactos graves"
			"\n  del cambio climático según la ONU"
			"\n    1) 1.5 °C"
			"\n    2) 37 °C"
			"\n    3) 2.8 °C"
			"\n    4) 15 °C"
			"\nEscribe el número de la opción correcta: ";
	cin >> answer;
	if(1 == answer) correctAns();

	cout << "\n5.¿Cuál es el tiempo adecuado para"
			"\n  emprender acciones contra el aumento"
			"\n  del calentamiento global"
			"\n    1) A finales del siglo"
			"\n    2) Mañana"
			"\n    3) En 20 años"
			"\n    4) Ahora mismo"
			"\nEscribe el número de la opción correcta: ";
	cin >> answer;
	if(4 == answer) correctAns();
}

int Examen::getResult() const{
	return calif;
}

void Examen::printResult() const{
	cout << endl;
	switch(getResult()){
		case 5:
			cout << "\nExcelente";
		break;
		case 4:
			cout << "\nMuy bien";
		break;
		case 3:
		case 2:
		case 1:
			cout << "\nEs tiempo de aprender más"
				    "\nsobre el calentamiento global"
					"\nPuedes leer más en:"
					"\nhttps://www.un.org/es/climat"
					"echange/what-is-climate-change";
		break;
	}
	cout << "\nEl número de respuestas correctas es: "
		 << getResult() << endl;
}
