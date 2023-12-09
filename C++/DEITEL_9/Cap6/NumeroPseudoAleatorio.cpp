// Rand1.cpp

// Tirar un dado 6 millones de veces

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int random[6] = {0,0,0,0,0,0};
	int numb=0;


	// Siembra generador de aleatorios
	srand(static_cast<unsigned int>(time(0)));
	

	for(unsigned int i = 1; i <= 60; ++i){
		numb = 1 + rand() % 6;
		++random[numb-1];	

		cout << numb << "  ";

		if(i % 10 == 0) cout << endl;
	}

	cout << "Resultados:" << endl;
	for(unsigned int i = 0; i < 5; ++i){
		cout << i + 1 << " repetido "
			 << random[i] << " veces " << endl;
	}
	cout << RAND_MAX;

	return 0;
}
