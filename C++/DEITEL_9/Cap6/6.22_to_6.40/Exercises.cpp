// Exercises.cpp
// Exercises from 6.22 to 6.55 

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <cmath>
#include "Exercises.h"

using namespace std;

void Exercises::printMenu(){
	cout << endl
		 << " 22.SquareDefault\n"
		 << " 23.SquareFilled\n"
		 << " 24.SepararDígitos\n"
		 << " 25.HorasSegundos\n"
		 << " 26.°C °F\n"
		 << " 27.Minimo3Double\n"
		 << " 28.EsPerfecto\n"
		 << " 29.EsPrimo\n"
		 << " 30.InvertirDígitos\n"
		 << " 31.MáximoComúnDivisor\n"
		 << " 32.PuntosDeCalidad\n"
		 << " 33.LanzarMonedas\n"
		 << " 34.AdivinarNúmero\n"
		 << " .PuntosDeCalidad\n"
		 << " .PuntosDeCalidad\n"

		 << endl;
}

void Exercises::selector(int option){
	long int val1, val2, val3;
	
	do{
		
		cout << endl
			 << "Seleccione el ejercicio (0 to exit): ";
		cin >> option;
		cout << endl;
		switch(option){
			case 0:
				break;
			case 22:
				cout << "Introduce longitud: ";
				cin >> val1;
				squareDefault(val1);
				break;
			case 23:
				cout << "Introduce longitud: ";
				cin >> val1;
				cout << "Introduce el carácter a rellenar: ";		
				char charFill;
				cin >> charFill;
				squareFilled(val1, charFill);
				break;
			case 24:
				cout << "Introduce un número a separar: ";
				cin >> val1;
				val2 = 0; // Guardar número invertido
				while(val1 >= 1){
					val2 *= 10;
					val2 += (val1 % 10);
					val1 /= 10;
				}
				while(val2 >= 1){
					cout << val2 % 10 << "  ";
					val2 /= 10;
				}
				break;

			case 25:
				bool valido;
				do{
					cout << "Escribe la hora 1 de la forma"
					 << "Horas:Minutos:Segundos: ";
					cin >> val1;
					valido = true;
					val3 = val1 % 100;
					if(val3 > 60 || val3 < 0)
						valido = false;
					val3 = val1 / 100 % 100;
					if(val3 > 60 || val3 < 0)
						valido = false;
					val3 = val1 / 10000 % 100;
					if(val3 > 12 || val3 < 0)
						valido = false;
				}while(!valido);
				do{
					cout << "Escribe la hora 2 de la forma"
					 << "Horas:Minutos:Segundos: ";
					cin >> val2;
					valido = true;
					val3 = val2 % 100;
					if(val3 > 60 || val3 < 0)
						valido = false;
					val3 = val2 / 100 % 100;
					if(val3 > 60 || val3 < 0)
						valido = false;
					val3 = val2 / 10000;
					if(val3 > 12 || val3 < 0)
						valido = false;
				}while(!valido);

				long int segundos1,
					     segundos2, segundosT;
					segundos1 = segundos2Tiempos(val1);
					segundos2 = segundos2Tiempos(val2);
					segundosT = segundos1 - segundos2;
					if(segundosT < 0)
						segundosT = -segundosT;
					cout << "La primera hora corresponde a "
						 << segundos1 << " segundos "
						 << "desde las 12:00." << endl
						 << "La segunda hora corresponde a "
						 << segundos2 << " segundos "
						 << "desde las 12:00, 'darum' entre "
						 << "ambas horas "
						 << "sucedieron " << segundosT 
						 << " segundos" << endl;
				break;

			case 26:
				cout << "Celsius a Fahrenheint"
					 << endl << " °C\t°F" << endl;

				for(int i = 0; i <= 100; ++i)
					cout << ' ' << i << '\t'
						 << fahrenheit(i) << endl;
				cout << endl << "Fahrenheint a Celsius"
					 << endl << " °F\t°C" << endl;

				for(int i = 32; i <= 212; ++i)
					cout << ' ' << i << '\t'
						 << centigrados(i) << endl;

				break;
			case 27:
				double dob1, dob2, dob3;
				cout << "Ingresa tres números "
					    "decimales para identificar el"
						"menor: ";
				cin >> dob1 >> dob2 >> dob3;
				cout << "El más pequeño es "
					 << minimo3Double(dob1, dob2, dob3)
					 << endl;
				break;
			case 28:
				cout << "De los primeros 10000 números, "
					    "aquellos perfectos son:" << endl;
				for(unsigned int i = 1; i < 10000; ++i)
					if(esPerfecto(i)){
						cout << i << " = ";
						for(int j = 1; j < i; ++j){
							if(i % j == 0)
								cout << j << " + ";
						}
						cout << endl;
							
					}
				
				break;
			case 29:
				cout << "Números primos entre 2 y 100,000" << endl;
				int ada;
				ada = 0;
				for(int i = 2; i <= 100000; ++i)
					if(esPrimo(i)){
						cout << i << endl;
						++ada;
					}
				cout << "Número de primos: " << ada << endl;
				break;
			case 30:
				unsigned int num;
				cout << "Escribe un número entero a invertir: ";
				cin >> num;
				cout << num << " invertido es "
					 << digitosInverso(num) << endl;

				break;
			case 31:
				cout << "Ingresa dos números para calcular su MCD: ";
				cin >> val1 >> val2;
				cout << "El MCD es " << mcd(val1, val2) << endl;
				break;
			case 32:
				cout << "Ingresa la calificación del estudiante: ";
				cin >> val1;
				cout << "Sus puntos de calidad equivalen a "
					 << calidad4(val1) << endl;
				break;

			case 33:
				int cara, cruz;	// 0-Cara, 1-Cruz
				cara = cruz = 0;
				
				for(int i = 0; i < 100; ++i)
					if(tirarMoneda())
						++cruz;
					else
						++cara;
				cout << "Resultados: " << endl
					 << "Cara " << cara << endl
					 << "Cruz " << cruz << endl;
				break;

			case 34:
				int numA;
				int intento;
				char denuevo = 'n';
				do{
					numA = numeroAdivinar();
					cout << "Tengo un numero entre 1 y 1000.\n"
						    "Puedes adivinar mi numero?\n"
							"Por favor escribe tu primera respuesta: ";

					cin >> intento;
					while(intento != numA){
						if(intento > numA)
							cout << "Demasiado alto. ";
						else
							cout << "Demasiado bajo. ";
						cout << "Intenta de nuevo: "; 
						cin >> intento;

					}
					// Si se llegó hasta aquí se ha logrado adivinar
					cout << "Excelente!  Adivinaste el numero!\n"
					    	"Te gustaria jugar de nuevo (s/n)?: "; 
					cin >> denuevo;
					// 's' = 115 ASCII
				} while(denuevo == 's');
				break;
		}
	} while (option != 0);
}

void Exercises::squareDefault(int lado){
	for(int i = 0; i < lado; ++i){
		for(int j = 0; j < lado; ++j)
			cout << '*';		
		cout << endl;
	}
}

void Exercises::squareFilled(int lado, char caracterRelleno){
	for(int i = 0; i < lado; ++i){
		for(int j = 0; j < lado; ++j)
			cout << caracterRelleno;		
		cout << endl;
	}
}


int Exercises::segundos2Tiempos(int tiempo){
	int segundos = 0;
	// Die Zeit
	// tiempo = XX/XX/XX = STUNDEN/MINUTEN/SEKUNDEN
	segundos += (tiempo / 10000) * 60 * 60; // Hours
	segundos += ((tiempo / 100) % 100)* 60; // Minutes
	segundos += tiempo % 100; // Seconds
	return segundos;
}

int Exercises::centigrados(int fahren){
	return (fahren -32) / 1.8;
}

int Exercises::fahrenheit(int celsius){
	return (celsius * 1.8) + 32;
}

double Exercises::minimo3Double(double num1, double num2, double num3){
	if (num1 < num2)
		if(num1 < num3)
			return num1;
		else
			return num3;
	else
		if(num2 < num3)
			return num2;
		else
			return num3;
}

bool Exercises::esPerfecto(unsigned int number){
	unsigned int sumaDivisores = 1;
	for(int i = 2; i < number; ++i)
		if(number % i == 0)
			sumaDivisores += i;
	return (number == sumaDivisores);
	
}

bool Exercises::esPrimo(unsigned int num){
	for(int i = 2; i <= sqrt(num); ++i)
		if(num % i == 0)
			return false;
	return true;
}

unsigned int Exercises::digitosInverso(unsigned int numb){
	unsigned int numbInvr = 0;
	while(numb > 0){
		numbInvr *= 10;
		numbInvr += numb % 10;
		numb /= 10;
	}
	return numbInvr;

}

int Exercises::mcd(int num1, int num2){
	int maxcomd = 1;
	int divisor = 2;
	while (num1 > 1 || num2 > 1){
		if (num1 % divisor == 0 && num2 % divisor == 0){
			num1 /= divisor;
			num2 /= divisor;
			maxcomd *= divisor;
		} else if (num1 % divisor == 0){
			num1 /= divisor;
		} else if (num2 % divisor == 0){
			num2 /= divisor;
		} else { 
			++divisor;
		}
	}
	return maxcomd;
}

int Exercises::calidad4(int calif){
	if(calif >= 90)
		return 4;
	else if(calif >= 80)
		return 3;
	else if(calif >= 70)
		return 2;
	else if(calif >= 60)
		return 1;
	else
		return 0;
}

// Set the random-number generator
default_random_engine motor(static_cast<unsigned int>(time(0)));

int Exercises::tirarMoneda(){
//	return rand() % 2;

	uniform_int_distribution<unsigned int> intMoneda(0, 1);
	return intMoneda(motor);
}

int Exercises::numeroAdivinar(){
	// Producir número aleatorio entre 1 y 1000

	uniform_int_distribution<unsigned int> intRandomGame(1, 1000);
	return intRandomGame(motor);
}




