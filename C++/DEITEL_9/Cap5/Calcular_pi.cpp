#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	double denominador=1, pi=0;
	int uno=1;

	for(unsigned int i=1; i <= 100000000; ++i) {
		cout << fixed << setprecision(10) << i << "\t";
		
		pi += uno * 4 / denominador; 

		cout << pi << endl;
		denominador += 2;
		uno *= -1;
	
	}


}
