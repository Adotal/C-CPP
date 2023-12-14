// FibonacciRecursivo.cpp

#include <iostream>

using std::cout;
using std::cin;

unsigned long int fibonacci(unsigned long int);

int main(){
	int n;
	cout << "Ingrese el enésimo valor de la"
			"sucesión de fibonacci: ";
	cin >> n;
	cout << "N°: " << fibonacci(n);
	return 0;
}

unsigned long int fibonacci(unsigned long int n){
	if(0 == n || 1 == n)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);

}
