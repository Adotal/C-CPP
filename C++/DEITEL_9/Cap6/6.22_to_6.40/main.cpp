#include <iostream>
#include "Exercises.h"
#include <cstdlib>
using namespace std;
#include <ctime>
int main(){
	int option;
	srand(time(0));
	Exercises miExc;
	system("reset");
	miExc.printMenu();
	miExc.selector(option);

	return 0;
}
