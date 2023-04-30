#include<iostream>
using namespace std;

int main(){
	
	int
	contador = 1;

	cout << "N\t10*N\t100*N\t1000*N\t\n" << endl;

	while(contador <= 5){

		cout << contador << "\t"
		     << contador*10 << "\t"
			 << contador*100 << "\t"
			 << contador*1000 << "\t\n";

		++contador;
	}


	return 0;
}

