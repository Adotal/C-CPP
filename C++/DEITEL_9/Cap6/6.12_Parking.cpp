// 6.12_Parking.cpp

#include <iostream>
using namespace std;

double cargoParking(double);

int main(){

	double hours1 = 0,
		   hours2 = 0,
		   hours3 = 0,
		   cargoTotal = 0;

	cout << "Horas del cliente 1: ";
	cin >> hours1;
	cout << "Horas del cliente 2: ";
	cin >> hours2;
	cout << "Horas del cliente 3: ";
	cin >> hours3;

	cout << "\n Automóvil\tHoras\tCargo\n"
			" 1\t\t" << hours1 << "\t"
		<< cargoParking(hours1)<< "\n"
		<< 	" 2\t\t" << hours2 << "\t"
		<< cargoParking(hours2)<< "\n"
		<< 	" 3\t\t" << hours3 << "\t"
		<< cargoParking(hours3)<< "\n"
		<<  " TOTAL\t\t" << hours1 + hours2 + hours3
		<<  "\t" << cargoParking(hours1) + cargoParking(hours2) + cargoParking(hours3);



	return 0;
}

double cargoParking(double hours){
	if(hours != 24){
		if(hours <= 3)
			return 2;
		else
			return 2 + (hours - 3) * 0.5;
	} else{
		return 10;
	}
}
