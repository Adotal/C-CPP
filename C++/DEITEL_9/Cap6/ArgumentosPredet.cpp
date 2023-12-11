// ArgumentosPredet.cpp

#include <iostream>
using std::cout;
using std::endl;

int cubo(int val1 = 1, int val2 = 2, int val3 = 3);

int main(){

	
	cout << "Predeterminado:  " << cubo() << endl
		 << "1er argumento 10:" << cubo(10) << endl
		 << "1er y 2do = 20:  " << cubo(20,20) << endl
		 << "Todos = 10:      " << cubo(10, 10, 10)
		 << endl;

	return 0;
}

int cubo(int val1, int val2, int val3){
	return val1 * val2 * val3;

}

