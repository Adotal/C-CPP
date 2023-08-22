// main.cpp
#include <iostream>
#include "Metodos.h"

using namespace std;

int main(){
	Metodos miMetodos;
	cout << "Introduce el sistema: ";
	miMetodos.getSystem();
	miMetodos.Montante();

	return 0;
}
