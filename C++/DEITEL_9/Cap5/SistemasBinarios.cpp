#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int conv_binario(int decimal){
		unsigned int diez=1, bina=0, binario=decimal, power=1;

		while(power <= binario){
		   power*=2;
		   diez*=10;
		}
		power/=2;
		diez/=10;

		while(power >= 1){
			if(binario >= power){
				binario%=power;
				bina += 1 * diez;
			}
			power/=2;
			diez/=10;
		}
		return bina;	
}

int main(){

	unsigned int decimal=1;

	cout << "  " << left
		 << setw(5) << "DEC"
		 << setw(10) << "BINARIO"
		 << setw(6) << "OCTAL"
		 << setw(4) << "HEX"
		 << endl;
	 

	for(decimal=1; decimal <= 256; ++decimal){
		cout << right
			 << setw(5) << dec << decimal
			 << setw(10) << dec << conv_binario(decimal)
			 << setw(5) << oct << decimal
			 << setw(4) << hex << decimal
			 << endl;

	}


	return 0;
}
