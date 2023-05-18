#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
	int a = 1, b = 2, c = 3, x = 10, y = 20;
	char option = 0;
	do{
		cout << "\n\nSome logic expressions are equivalent, logically:\n"
				"!(a && b) is equals to (!a || !b)\n"
				"(!a && !b) equals to !(a || b)\n"
				"To check it whe have:\n"
				"a) !( x < 5 ) && !( y >= 7 )\n"
				"b) !( a == b ) || !( c != 5 )\n"
				"c) !(( x <= 8 ) && ( y > 4 ))\n"
				"d) !(( a > 4 ) || ( c <= 6 ))\n"
				"s) Exit\n"
				"To all cases:\n"
				"a = 1, b = 2, c = 3, x = 10, y = 20\n"
				"Please choose one case[a-d]: ";
		cin >> option;

		switch(option){
			case 's':
			break;

			case 'a':
				cout << "\n!( x < 5 ) && !( y >= 7 )\n"
						"R: " << (!( x < 5 ) && !( y >= 7 ) ? "true":"false")
					 <<	"\nequals to\n"
						"!(( x < 5 ) || (y >= 7 ))\n"
						"R: " << (!(( x < 5 ) || (y >= 7 )) ? "true":"false");
			break;

			case 'b':
				cout << "\n!( a == b ) || !( c != 5 )\n"
						"R: " << (!( a == b ) || !( c != 5 ) ? "true":"false")
					 <<	"\nequals to\n"
						"!(( a == b ) && ( c != 5 ))\n"
						"R: " << (!(( a == b ) && ( c != 5 )) ? "true":"false");
			break;

			case 'c':
				cout << "\n!(( x <= 8 ) && ( y > 4 ))\n"
						"R: " << (!(( x <= 8 ) && ( y > 4 )) ? "true":"false")
					 <<	"\nequals to\n"
						"!( x <= 8 ) || !( y > 4 )\n"
						"R: " << (!( x <= 8 ) || !( y > 4 ) ? "true":"false");
			break;

			case 'd':
				cout << "\n!(( a > 4 ) || ( c <= 6 ))\n"
						"R: " << (!(( a > 4) || ( c <= 6 )) ? "true":"false")
					 <<	"\nequals to\n"
						"!( a > 4 ) && !( c <= 6 )\n"
						"R: " << (!( a > 4 ) && !( c <= 6 ) ? "true":"false");
			break;

			default:
			break;
		}
	} while (option != 's');
}
