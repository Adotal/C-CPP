#include<iostream>

#define tasa = 1.0125

using namespace std;

int main(){
	
	int year = 2022, poblacion = 8000000, i = 1, poblacion_ant;


	cout << "Población en los próximos 75 años, 1.25 % anual constante"<< endl;
	cout << "Año\t\tPoblación al final del año\tAumento en el año"<< endl;

	while(i <= 75){

		year ++;
		poblacion_ant= poblacion;
		poblacion *= 1.0125;
		cout << year << "\t\t" << poblacion << " \t\t\t" << poblacion-poblacion_ant  << endl; 

		i++;

	}

	return 0;
}
