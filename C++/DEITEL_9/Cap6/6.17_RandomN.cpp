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
			 << "a) 2, 4, 6, 8, 10: \t"
			 << (rand() % 5 + 1) * 2 << endl
			 << "b) 3, 5, 7, 9, 11: \t"
			 << (rand() % 5 + 1) * 2 + 1 << endl
			 << "c) 6, 10, 14, 18, 22: \t"
			 << (rand() % 5 + 1) * 4 + 2 << endl;
	}
	return 0;
}
