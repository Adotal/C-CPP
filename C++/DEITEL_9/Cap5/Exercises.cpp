#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	
	double promedio=0;
	int count=0;
	unsigned int i=0;
	
	for(cin >> i; i != 9999; ){
		promedio+=i;
		count++;
		cin >> i;
	}

	promedio/=static_cast<double>(count);
	cout << count<<"El promedio es: " << promedio << endl;



}
