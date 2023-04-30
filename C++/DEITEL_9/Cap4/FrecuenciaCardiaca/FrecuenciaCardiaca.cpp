// FrecuenciaCardiaca.cpp
// Inicialización de clase y main()
#include<iostream>
#include"FrecuenciaCardiaca.h"
#include<string>

using namespace std;

int main(){
	int intvar;
	string strvar;
	FrecuenciaCardiaca miFrecC("Adro", "Ornelas",14,04,2007, 20, 01,2023);

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

	cout << "\t\t\t\t\t\t"; miFrecC.showDate(); cout << endl;
	cout <<	"Nombre\"Completo\":\t " << miFrecC.getName() << " "
	       	<< miFrecC.getLastName() << "\t\t";
       		miFrecC.showBornDate();
	cout << "\nEdad:\t\t\t " << miFrecC.getAge() << "\n"
		"Frecuencia Cardiaca Max: " << miFrecC.getMaxFrec() << " bpm\n"
		"Frec. Cardiaca Normal:   " << miFrecC.getNormalFrec() << " bpm\n"
		<< endl;

	return 0;
}
