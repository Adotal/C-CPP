#include <iostream>
using namespace std;

// Method prototipe
bool multiplo(int, int);
void ciclo(int*, int*);

// Main
int main(){
	int numb1, numb2;
	ciclo(&numb1, &numb2);
	return 0;
}

void ciclo(int* n1, int* n2){
	cout << "Introduce un número: ";
	cin >> *n1;
	cout << "Introduce el probable múltiplo de: ";
	cin >> *n2;
	cout << endl << *n2
		 << (multiplo(*n1, *n2) ? " sí":" no")
		 << " es múltiplo de " << *n1 << endl
		 << "Continuar? [Si: 1][No: 0] ";
	bool option;
	cin >> option;
	if(option)
		ciclo(n1, n2);
}

bool multiplo(int n1, int n2){
	// If n2 % n1 != 0, n1 is not a factor of n2;
	return (n2 % n1) ? false:true;
}
