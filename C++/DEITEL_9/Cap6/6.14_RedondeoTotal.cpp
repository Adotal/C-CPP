// 6.14_RedondeoTotal.cpp

#include <iostream>
#include <cmath>

using namespace std;

int printMenu();

void roundSelec(int);

int main(){
	int select; // 1 for enter, 2 for dec, 3 for cent 4 mil
	do{
		select = printMenu();
		if(select < 1 || select > 4)
			cout << "Opción inválida" << endl;
		else
			roundSelec(select);
	}while(select != -1);
	
}

int  printMenu(){
	int select;
	cout << "\nA que escala desea redondear:\n"
		    "1. Entero\n2. Décimas\n 3. Centésimas\n"
			"4. Milésimas\nSelección (Exit -1): ";
	cin >> select;
	return select;
}

void roundSelec(int selec){
	double numb, rounded;
	cout << "Escribe el número a redondear (Exit -1): ";
	cin >> numb;
	
	switch(selec){
		case 1:
		rounded = floor(numb + 0.5);
			break;
		case 2:
		rounded = floor(numb*10 + 0.5)/10;
			break;
		case 3:
		rounded = floor(numb*100 + 0.5)/100;
			break;
		case 4:
		rounded = floor(numb*1000 + 0.5)/1000;
			break;
		default:
			break;
	}

	cout << "\n" << numb << " redondeado es "
		 << rounded << endl;
		
}
