#include<iostream>
using namespace std;

int main(){
	
	int contador = 0, mayor = 0, segundo_mayor=0, num = 0;

	cout << "Escribe un número: ";
    cin >> num;	

	mayor = num;
	segundo_mayor = num;

	while(contador < 9){

		cout << "Escribe un número: ";
		cin >> num;
	
		if(num > mayor){
			segundo_mayor = mayor;
			mayor = num;
		} else if (num > segundo_mayor){
			segundo_mayor = num;
		}
		

		++contador;
	}

	cout << "El mayor es: " << mayor << "\n"
			"El segundo mayor es: " << segundo_mayor << endl;

	return 0;
}
