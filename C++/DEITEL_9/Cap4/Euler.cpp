#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	double e=0;
    unsigned int factorial=1, precision=0;

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

		e += 1 / static_cast<double>(factorial);
		precision--;
	}


	cout << "El número e aproximadamente igual a: " << e << endl;

	return 0;
}
