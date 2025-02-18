// Exercises.cpp
// Exercises from 6.22 to 6.55 

#include <iostream>
#include <cstdlib>
#include <string>
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
		 << " 34_35.AdivinarNúmero\n"
		 << " 36.ExponenteRecursivo\n"
		 << " 37.SerieFibonacci(Iterativa)\n"
		 << " 38.TorresHanoi(Recursiva)\n"
		 << " 39.TorresHanoi(Iterativa)\n"
		 << " 40.RecursividadVisual\n"
		 << " 41.MCDRecursivo\n"
		 << " 42.Distancia2Puntos\n"
		 << " 45.ProductoRecursivo\n"
		 << " 46.FuncionesMatemáticas\n"
		 << " 47.Craps\n"
		 << " .PuntosDeCalidad\n"
		 << " .PuntosDeCalidad\n"
		 << " .PuntosDeCalidad\n"
		 << endl;
}

void Exercises::selector(int option){
	long int val1, val2, val3, val4;
	
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
			case 35:
				int numA;
				int intento;
				int intentos;
				char denuevo;
				do{
					denuevo = 'n';
					numA = numeroAdivinar();
					cout << "Tengo un numero entre 1 y 1000.\n"
						    "Puedes adivinar mi numero?\n"
							"Por favor escribe tu primera respuesta: ";

					cin >> intento;
					intentos = 1;
					while(intento != numA){
						if(intento > numA)
							cout << "Demasiado alto. ";
						else
							cout << "Demasiado bajo. ";
						cout << "Intenta de nuevo: "; 
						cin >> intento;
						intentos++;
					}
					cout << "Excelente!  Adivinaste el numero!\n";
					if(intentos < 10)
						cout << "O ya sabía usted el secreto o tuvo suerte!\n";
					else if(intentos == 10)
						cout << "Ajá! Sabía usted el secreto!\n";
					else 
						cout << "Debería haberlo hecho mejor!\n";

					cout <<	"Te gustaria jugar de nuevo (s/n)?: "; 
					cin >> denuevo;
				} while(denuevo == 's');

				break;
			case 36:
				double base;
				int exponente;
				cout << "Por favor introduzca la base: ";
				cin >> base;
				cout << "Por favor introduzca el exponente: ";
				cin >> exponente;
				cout << "El resultado es: " << base << "^"
					 << exponente << " = "
					 << potencia(base, exponente);
				break;
			case 37:
				cout << "Escribe la cantidad de términos de la serie: ";
				cin >> val1;
				fibonacci(val1);

				break;
			case 38:{
				int discos, 
					origen = 1,
					temporal = 2,
					fina = 3;
				cout << "Número de discos:";
				cin >> discos;
				cout << endl;
				torresHanoi(discos, origen, temporal, fina);

					}
				break;
			case 39:
			// LAS TORRES SIEMPRE SON 2^N -1 MOVIMIENTOS
				cout << "Número de discos:";
				cin >> val1;
				torresHanoiIterativa(val1);
				break;
			case 40:
				int tab;
				tab = 0;
				cout << "Factorial de 5 =" << endl 
					 << factorialRecursivoVisual(5, &tab) << endl;
				break;

			case 41:
				cout << "INTRODUCE VALOR 1 DE MCD: ";
				cin >> val1;
				cout << "INTRODUCE VALOR 2 DE MCD: ";
				cin >> val2;
				cout << "MCD: " << mcdRec(val1, val2) << endl;
				break;
			case 42:
				double x1, y1, x2, y2;
				cout << "Punto (x1, y1): ";
				cin >> x1 >> y1;
				cout << "Punto (x2, y2): ";
				cin >> x2 >> y2;

				cout << "La distancia es: " << distancia2Puntos(x1, y1, x2, y2)
					 << endl;

				break;
			case 45:
				cout << "Introduce dos valoes a multiplicar recursivamente: "
					 << endl;
				cin >> val1 >> val2;
				cout << productoRecursivo(val1, val2) << endl; 
				break;
			case 46:
				funcionesMat();
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


double Exercises::potencia(double base, int exponente){
	if(exponente > 1)
		// x^y = x * x^(y-1)
		return base * potencia(base, exponente - 1);
	else if(exponente == 0)
		// x⁰ = 1;
		return 1;
	else
		// x¹ = x
		return base;
}

void Exercises::fibonacci(int nterminos){
	int a = 0, b = 1;
	while(nterminos > 0){
		cout << a;
		if(nterminos > 1)
			cout << ", ";
		--nterminos;
		b += a;
		a = b - a;
	}
}


void Exercises::torresHanoi(int n, int orig, int temp, int fin){
	if(n > 0){
		torresHanoi(n-1, orig, fin, temp);
		cout << " " << orig << " -> " << fin << endl;
		torresHanoi(n-1, temp, orig, fin);
	}

}

void Exercises::torresHanoiIterativa(int n){

	int stack[n][2];
	int i = 1;
	int tran;
	stack[0][0] = n--;
	stack[0][1] = 123;


	while(1){		
		if(n > 0) {	// RECORRE A LA IZQ

			// TEMP Y FINAL SE INTERCAMBIAN
			stack[i][0] = n--;
			tran = stack[i][1] = stack[i-1][1];
		
			stack[i][1] /= 100;
			stack[i][1] *= 100;

			stack[i][1] += (tran % 10) * 10;
			stack[i][1] += (tran / 10 % 10);
			++i;

		} else {

			// Descarta último 
			--i;
			cout << " " << stack[i][1] / 100 << " -> "
				 << stack[i][1] % 10 << endl;

			--i;
			if(i < 0)	// Final de la solución
				break;
			// Descarta padre	
			cout << " " << stack[i][1] / 100 << " -> "
				 << stack[i][1] % 10 << endl;
			// Se posiciona en hijo derecho
			n = --stack[i][0];
			
			// ORIG Y TEMP SE INTERCAMBIAN
			tran = stack[i][1];
			stack[i][1] = (stack[i][1] / 10) % 10;
			stack[i][1] *= 100;
			stack[i][1] += (tran / 100) * 10;
			stack[i][1] += tran % 10;
			++i;
			n--;
		}
	}

}

int Exercises::factorialRecursivoVisual(unsigned int n, int* tab){

	for(int i = 0; i < *tab; ++i) cout << '\t';

	if(n == 0){
		cout << "1" << endl;
		return 1;
	}	else{
		cout << n << " * (" << n << " - 1)!" << endl;
		*tab = *tab + 1;
		return n * factorialRecursivoVisual(n - 1, tab);
	}
}


int Exercises::mcdRec(int x, int y){

	if(0 == y)
		return x;
	else
		return mcdRec(y, x % y);
}


double Exercises::distancia2Puntos(double x1, double y1, double x2, double y2){
	return sqrt(pow(x2-x1, 2) + pow(y2 - y1, 2));
}

int Exercises::productoRecursivo(int a, int b){
	if(b > 0)
		return a + productoRecursivo(a, b - 1);
	if(b < 0)
		return -a + productoRecursivo(a, b + 1);
	// If it is not bigger or smaller than 0, it is 0
	return 0;
}

void Exercises::funcionesMat(){
	
	cout << " exp( x )   función exponencial ex \n"
		 << "  exp( 1.0 ) es "  << exp(1.0) << endl
		 << "  exp( 2.0 ) es " << exp(2.0) << endl
		 << " fabs( x )  valor absoluto de x \n "
		 << "  fabs( 5.1 ) es " << fabs(5.1 ) << endl
		 << "  fabs( 0.0 ) es " << fabs(0.0) << endl
		 << "  fabs( -8.76 ) es " << fabs(-8.76) << endl
		 << " floor( x ) redondea x al entero más grande, no mayor a x\n"
		 << "  floor( 9.2 ) es " << floor(9.2) << endl
		 << "  floor( -9.8 ) es " << floor(-9.2) << endl
		 << " fmod( x, y ) residuo de x/y como número de punto flotante\n"
		 << "  fmod( 2.6, 1.2 ) es " << fmod(2.6, 1.2) << endl
		 << " log( x ) logaritmo natural de x (base e)\n"
		 << "  log( 2.718282 ) es " << log(2.718282) << endl
		 << "  log( 7.389056 ) es " << log(7.389056) << endl
		 << " log10( x ) logaritmo de x (base 10) \n"
		 << "  log10( 10.0 ) es " << log10(10.0) << endl
		 << "  log10( 100.0 ) es " << log10(100.9) << endl
		 << " pow( x, y ) x elevado a la potencia y (xy) \n"
		 << "  pow( 2, 7 ) es " << pow(2, 7) << endl
		 << "  pow( 9, .5 ) es " << pow(9, .5) << endl
		 << " sin( x ) seno trigonométrico de x(x en radianes) \n"
		 << "  sin( 0.0 ) es " << sin(0) << endl
		 << " sqrt( x ) raíz cuadrada de x (en donde x es un valor no negativo)\n"
		 << "  sqrt( 9.0 ) es " << sqrt(9.0) << endl
		 << " tan( x ) tangente trigonométrica de x(x en radianes)\n"
		 << "  tan(0.2) es " << tan(0.2) << endl << endl;

}
