// PerfilMedico.cpp
// Intefaz
#include<iostream>
#include<string>
#include"PerfilMedico.h"
using namespace std;

int main(){
	string strval;
	int intval;

	PerfilMedico miPM("Adro","Ornelas","M", 14, 04, 2007, 21,01,2023,167,61);
	
	cout << "Por favor, escribe tu primer nombre: ";
	cin >> strval;
	miPM.setName(strval);

	cout << "Escribe tu primer apellido: ";
	cin >> strval;
	miPM.setLastName(strval);

	cout << "Escribe tu día de nacimiento: ";
	cin >> intval; 
	miPM.setBornDay(intval);

	cout << "Escribe tu mes de nacimiento: ";
	cin >> intval; 
	miPM.setBornMonth(intval);

	cout << "Escribe tu año de nacimiento: ";
	cin >> intval; 
	miPM.setBornYear(intval);

	cout << "Selecciona tu género (F,M): ";
	cin >> strval;
	miPM.setSex(strval);

       	cout << "Introduzca su estatura(centimetros):";
	cin >> intval;
	miPM.setTall(intval);

       	cout << "Introduzca su masa(kilogramos):";
	cin >> intval;
	miPM.setWeight(intval);

	cout << "\nTu ficha de perfil médico es el siguiente:\n\n";



	cout << "*************************************************\n"
		"* \t\t\t"; miPM.showDate(); cout << "\t*\n"
		"* Nombre: " << miPM.getName() << "\t\t\t\t\t*\n"
		"* Apellido: "<< miPM.getLastName() <<"\t\t\t\t*\n"
		"* Sexo: " << miPM.getSex()<< "\t\t\t\t\t*\n"
		"* Edad: "<< miPM.getAge() << "\t\t\t\t\t*\n"
		"* Altura(cm): " << miPM.getTall() << "\t\t\t\t*\n"
		"* Peso(Kg): " << miPM.getWeight() << "\t\t\t\t\t*\n"
		"* "; miPM.showBornDate(); cout <<"\t\t*\n"
		"* Frecuencia cardiaca max: " << miPM.getMaxFrec() <<" bpm\t\t*\n"
		"* Frec. cardiaca normal:   " << miPM.getNormalFrec() <<" bpm\t\t*\n";
		 miPM.getIMC();
	cout << "*\t\t\t\t\t\t*" << endl;
	
	for (int i=0; i<49; i++) cout << "*";
	cout << "\n" << endl;

	return 0;
}
