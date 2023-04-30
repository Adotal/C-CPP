// Encontrar por fuerza bruta todas
// las ternas pitagóricas menores a 500

#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int lado1 = 1,
		lado2 = 1,
		hipot = 1;

	cout << "Dado un triángulo rectángulo como el siguiente, donde\n"
			"los catetos son los lados A y B, y la hipotenusa el  \n"
			"lado C, encontrar todas las ternas pitagóricas con   \n"
			"longitudes inferiores a 500 unidades por fuerza bruta.\n"
		 << endl;

	cout << '*' << endl;
	for(int i = 0; i <= 10; ++i){
		cout << '*';
		for(int j = 0; j < i; ++j) cout << ' ';
		cout << '*' << endl;
	}
	for(int i  =0; i < 13; ++i) cout << '*';
	cout << endl << endl;

	cout << "¿Comenzar proceso? [Y/N] ";
	if(cin.get() == 'Y'){
			for(; hipot <= 500; ++hipot){
			for(lado1 = 1; lado1 <= 500; ++lado1){
				for(lado2 = 1; lado2 <= 500; ++lado2){
					if( pow(lado1, 2.0) + pow(lado2, 2.0) == pow(hipot, 2.0)){
						cout << "Terna pitagórica: \n"
							 <<	"A = " << lado1 << "\n"
							 <<	"B = " << lado2 << "\n"
							 <<	"C = " << hipot << endl;
					}
				}
			}

		}
	}


	return 0;
}
