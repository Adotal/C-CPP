#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	unsigned int contEstudianes{0};
	double e=0;
    unsigned int factorial=1, precision=0, power=1;

	cout << "Potencia (e ^ x): ";
	cin >> power;

	cout << "Precisión: ";
	cin >> precision;

	cout << setprecision(precision) << fixed;

	e += 1;
	while(precision >= 1){

		factorial = 1;

		unsigned int fact = precision;
		while(fact > 1){
			factorial *= fact;
			fact--;
		}

		unsigned int potencia = precision;
		int base=1;

		while(potencia >=1){
			base *= power;
			potencia--;
		}

		e += base / static_cast<double>(factorial);
		precision--;
	}


	cout << "El número e ^ "<< power <<" aproximadamente igual a: " << e << endl;

	return 0;
}

