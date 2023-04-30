#include<iostream>
#include<iomanip>

using std::cout;
using std::endl;
using std::setw;
using std::left;
int main(){
	unsigned int factorial = 1;
	
	cout << left
	     <<	setw(5) << "!1"
		 << setw(5) << "!2"
		 << setw(5) << "!3"
		 << setw(5) << "!4"
		 << setw(5) << "!5"
		 << endl << " ";

	for(unsigned int i = 1; i <= 5 ; ++i){
		factorial *= i;
		cout << setw(5) << factorial;

	}

}
