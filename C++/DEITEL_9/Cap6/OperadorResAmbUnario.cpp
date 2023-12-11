//OperadorResAmbUnario.cpp

#include <iostream>

using namespace std;

double unidad = 1.5;

int main(){
	int unidad = 77;

	std::cout << "unidad global: " << ::unidad << std::endl;

	std::cout << "unidad local:  " << unidad << std::endl;

	return 0;
}
