#include<iostream>
using namespace std;

int main(){

	int line = 1, column = 1;

	while(line <= 8){

		column = 1;

		while(column <= 8){
			cout << "*";
			cout << ' ';
			++column;
		}

		cout << endl;
		++line;

		if((line % 2) == 0) cout << ' ';

	}

	return 0;
}
