// Pila.cpp
#include<iostream>

using namespace std;

int powsq(int);	// Prototipo de función

int main(){
	int a = 10;

	cout << " a = " << a << endl;
	cout << " a²= " << powsq(a) << endl;
}

int powsq(int x){
	return x*x;
}

