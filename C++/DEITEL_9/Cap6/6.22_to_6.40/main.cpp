#include <iostream>
#include "Exercises.h"
#include <cstdlib>
using namespace std;

int main(){
	int option;
	Exercises miExc;
	system("reset");
	miExc.printMenu();
	miExc.selector(option);

	return 0;
}
