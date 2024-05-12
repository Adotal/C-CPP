#include <iostream>

using namespace std;

bool esPar(int);

int main(){
	int numeros[10];

	cout << "Proporciona 10 números a determinar si es par:"
		 << endl;
	for(int i = 0; i < 10; ++i){
		cout << "Number " << i+1 << ": ";
		cin >> numeros[i];
	}
	for(int i = 0; i < 10; ++i)
		cout << "- " << numeros[i]
			 << (esPar(numeros[i]) ? "":" no")
			 << " es par" << endl;
	return 0;

}

bool esPar(int num){
	return !(num % 2);
}
