// FrecuenciaCardiaca.cpp
// Inicialización de clase y main()
#include<iostream>
#include"FrecuenciaCardiaca.h"
#include<string>

using namespace std;

int main(){
	int intvar;
	string strvar;
	FrecuenciaCardiaca miFrecC("12345", "Ornelas",14,04,2007, 20, 01,2023);
	// A partir de 6 carácteres el tabulador descuadra
	cout << "Por favor, escribe tu primer nombre: ";
	cin >> strvar;
	miFrecC.setName(strvar);

	cout << "Escribe tu primer apellido: ";
	cin >> strvar;
	miFrecC.setLastName(strvar);

	cout << "Escribe tu día de nacimiento: ";
	cin >> intvar; 
	miFrecC.setBornDay(intvar);

	cout << "Escribe tu mes de nacimiento: ";
	cin >> intvar; 
	miFrecC.setBornMonth(intvar);

	cout << "Escribe tu año de nacimiento: ";
	cin >> intvar; 
	miFrecC.setBornYear(intvar);

	cout << "\nTu ficha de frecuencia cárdiaca es la siguiente:\n\n";



	cout << "*************************************************\n"
		"* \t\t\t"; miFrecC.showDate(); cout << "\t*\n"
		"* Nombre: " << miFrecC.getName() << "\t\t\t\t\t*\n"
		"* Apellido: "<< miFrecC.getLastName() <<"\t\t\t\t*\n"
		"* Edad: "<< miFrecC.getAge() << "\t\t\t\t\t*\n"
		"* "; miFrecC.showBornDate(); cout <<"\t\t*\n"
		"* Frecuencia cardiaca max: " << miFrecC.getMaxFrec() <<" bpm\t\t*\n"
		"* Frec. cardiaca normal:   " << miFrecC.getNormalFrec() <<" bpm\t\t*\n";
	cout << "*\t\t\t\t\t\t*" << endl;
	
	for (int i=0; i<49; i++) cout << "*";
	cout << endl;
	
	//for (int i=0; i<20; i++) cout << "*\n";
	return 0;
}
