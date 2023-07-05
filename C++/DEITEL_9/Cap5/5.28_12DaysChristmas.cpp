// 5.28_12DaysChristmas.cpp 
#include <iostream>

using namespace std;

int main(){

	cout << "The Twelve days of Christmas" << endl;
	for(unsigned int i = 1; i <= 12; ++i){

		cout << "On the ";
		switch(i){
			case 1:	cout << "first";
			break;
			case 2:	cout << "second";
			break;
			case 3:	cout << "third";
			break;
			case 4:	cout << "fourth";
			break;
			case 5:	cout << "fifth";
			break;
			case 6:	cout << "sixth";
			break;
			case 7:	cout << "seventh";
			break;
			case 8:	cout << "eigth";
			break;
			case 9:	cout << "ninth";
			break;
			case 10:cout << "tenth";
			break;
			case 11:cout << "eleventh";
			break;
			case 12:cout << "twelfth";
			break;
		}
		cout << " day of Christmas" << endl
			 << "my true love sent to me:" << endl;

		if(1 == i){
			cout << "A Partridge in a Pear Tree"
				 << endl;
		} else {
			for(unsigned int j = i; j > 0; --j){
				switch(j){
					case 1:
						cout << "and a Partridge in a Pear Tree"
							 << endl;
					break;
					case 2:
						cout << "Two Turtle Doves"
							 << endl;
					break;
					case 3:
						cout << "Three French Hens"
							 << endl;
					break;
					case 4:
						cout << "Four Calling Birds"
							 << endl;
					break;
					case 5:
						cout << "Five Golden Rings"
							 << endl;
					break;
					case 6:
						cout << "Six Geese a Laying"
							 << endl;
					break;
					case 7:
						cout << "Seven Swans a Swimming";
						cout << endl;
					break;
					case 8:
						cout << "Eight Maids a Milking"
							 << endl;
					break;
					case 9:
						cout << "Nine Ladies Dancing"
							 << endl;
					break;
					case 10:
						cout << "Ten Lords a Leaping"
							 << endl;
					break;
					case 11:
						cout << "Eleven Pipers Piping"
							 << endl;
					break;
					case 12:
						cout << "12 Drummers Drumming"
							 << endl;
					break;
				}
			}
		}
		cout << endl;
	}
}
