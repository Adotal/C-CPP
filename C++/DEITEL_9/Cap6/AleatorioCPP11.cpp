// AleatorioCPP11.cpp
#include<iostream>
#include<iomanip>
#include<random>
#include<ctime>
using namespace std;

int main(){
	/*  usa el motor de generación de números
		aleatorios predeterminado para producir
    	valores int seudoaleatorios del 1 al 6,
		distribuidos de manera uniforme
	*/

	// Crea un objeto objeto default_random_engine llamado motor
	default_random_engine motor(static_cast<unsigned int>(time(0)));
	// Crea un objeto uniform_int_distribution llamado intRandom
	uniform_int_distribution<unsigned int> intRandom(1, 6);

	int contador[6] = {0,0,0,0,0,0}; 
	int random1=0;

	for(unsigned int i = 1; i <= 60000000000; ++i){
		random1 = intRandom(motor);

		cout << setw(3) << random1;

		contador[--random1] += 1; 

		if(i % 100 == 0)cout << endl;
		
	}

	for(unsigned int i = 0; i < 6; ++i){
		cout << i+1 << " apareció " << contador[i] << " veces" << endl;
	}

	return 0;
}
