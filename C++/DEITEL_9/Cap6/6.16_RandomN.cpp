#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

int main(){
	srand(static_cast<unsigned int>(time(0)));	
	int rep;
	cout << "Número de repeticiones: ";
	std::cin >> rep;

	for(int i = 0; i < rep; ++i){
		cout << "Números aleatorios según rango" << endl
			 << "a) 1 <= n <= 2: \t"
			 << (rand() % 2 + 1) << endl
			 << "b) 1 <= n <= 100: \t"
			 << (rand() % 100 + 1) << endl
			 << "c) 0 <= n <= 9: \t"
			 << (rand() % 10) << endl
			 << "d) 1000 <= n <= 1112: \t"
			 << (rand() % 113 + 1000) << endl
			 << "e) -1 <= n <= 1: \t"
			 << (rand() % 3 - 1) << endl
			 << "f) -3 <= n <= 11: \t"
			 << (rand() % 15 - 3) << endl;
	}
	return 0;
}
