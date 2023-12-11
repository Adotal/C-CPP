// SobrecargaFunciones.cpp

#include <iostream>
using namespace std;

double cuadrado(double x){
	return x*x;
}
int cuadrado(int x){
	return x*x;
}

int main(){

	cout << "Cuadrado de 7:   " << cuadrado(7) << endl
		 << "Cuadrado de 7.7: " << cuadrado(7.7)
		 << endl;
	return 0; 
}

