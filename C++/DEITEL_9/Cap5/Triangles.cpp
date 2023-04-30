#include<iostream>

using std::cout;
using std::endl;

int main(){

	unsigned int i = 0, j = 0;

	for( i = 1; i <= 10; ++i ){
		for( j = 1; j <= i; ++j ) cout << '*';
		cout << endl;
	}


	for( i = 1; i <= 10; ++i ){
		for( j = i; j <= 10; ++j ) cout << '*';
		cout << endl;
	}	

	cout << endl;
	for( i = 1; i <= 10; ++i ){
		for( j = 1; j < i; ++j ) cout << ' ';
		for( j = i; j <= 10; ++j ) cout << '*';
		cout << endl;
	}

	cout << endl;

	for( i = 1; i <= 10; ++i ){
		for( j = i; j < 10; ++j ) cout << ' ';
		for( j = 1; j <= i; ++j ) cout << '*';
		cout << endl;
	}

	for( i = 1; i <= 10; ++i ){
		for( j = 1; j <= i; ++j ) cout << '*';
		for( j = i; j < 10; ++j ) cout << ' ';

		cout << '\t';

		for( j = i; j <= 10; ++j ) cout << '*';
		for( j = 1; j < i; ++j ) cout << ' ';

		cout << '\t';

		for( j = 1; j < i; ++j ) cout << ' ';
		for( j = i; j <= 10; ++j) cout << '*';

		cout << '\t';

		for( j = i; j < 10; ++j ) cout << ' ';
		for( j = 1; j <= i; ++j) cout << '*';

		cout << '\n';
	}

	return 0;
}
