// main.cpp

#include <iostream>
#include "maximo.h"
using namespace std;

int main(){

	int a, b, c;
	cout << "Valores int: ";
	cin >> a >> b >> c;
	cout << "El mayor es: " << maximo(a, b, c)
		<< endl;
	char d, e, f;
	cout << "Valores char: ";
	cin >> d >> e >> f;
	cout << "El mayor es: " << maximo(d, e, f)
		<< endl;
	double g, h, i;
	cout << "Valores double: ";
	cin >> g >> h >> i;
	cout << "El mayor es: " << maximo(g, h, i)
		<< endl;
	


	return 0;
}
