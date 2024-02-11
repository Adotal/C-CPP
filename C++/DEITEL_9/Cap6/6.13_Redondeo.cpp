// 6.13_Redondeo.cpp

#include <iostream>
#include <cmath>

using namespace std;

void bucle();

int main(){
	bucle();
}

void bucle(){
	double numb = 0, rounded = 0;
	do{
		cout << "Escribe el número a redondear (Exit -1): ";
		cin >> numb;
		rounded = floor(numb + 0.5);
		cout << "\n" << numb << " redondeado es "
			 << rounded << endl;
			

	} while (numb != -1 );
}

