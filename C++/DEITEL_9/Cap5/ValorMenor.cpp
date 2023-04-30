#include<iostream>

using namespace std;

int main(){
	int i=0;
	int menor, valor;

	cout << "Número de repeticiones: ";
	cin >> i;
	
	if(i <= 0) return 0;

	cin >> menor;
	--i;
	for(i; i > 0; i--){
		cin >> valor;
		if(valor < menor)
			menor = valor;	
	}

	cout << "El menor es: " << menor;
	return 0;
}
