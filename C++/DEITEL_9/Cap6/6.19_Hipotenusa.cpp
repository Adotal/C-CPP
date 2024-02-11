#include <iostream>
#include <cmath>
using namespace std;

double hipotenusa(double, double);

int main(){
	double lado1, lado2;
	cout << "Hipotenusa" << endl
		 << "Lado 1: ";
	cin >> lado1;
	cout << "Lado 2: ";
	cin >> lado2;
	cout << "La hipotenusa del triángulo es "
		<< hipotenusa(lado1, lado2);

	return 0;
}


double hipotenusa(double l1, double l2){
	return sqrt(l1 * l1 + l2 * l2);	
}
