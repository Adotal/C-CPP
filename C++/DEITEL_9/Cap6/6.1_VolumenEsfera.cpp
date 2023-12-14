// 6.1_VolumenEsfera.cpp

#include <iostream>
#include <cmath>

#define PI 3.14159265358979323846
using std::cout;
using std::cin;

inline double volumenEsfera(double);

int main(){
	double radio;
	cout << "El radio de la esfera a calcular área: ";
	cin >> radio;

	cout << "El radio es: " << volumenEsfera(radio);
	
	return 0;
}

inline double volumenEsfera(double rad){
	return (4.0 / 3.0 * PI * pow(rad, 3));
}
