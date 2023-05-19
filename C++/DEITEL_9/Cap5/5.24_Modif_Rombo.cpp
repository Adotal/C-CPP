// 5.23_Rombo.cpp
#include<iostream>

using namespace std;

int main(){
	int i = 0, j = 0, k = 0, n = 0;

	do{
		cout << "Escribe el número de filas del rombo: ";
		cin >> n;

		for(i = 1; i <= n/2; ++i){
			for(j = 10; j >= i; --j){
				cout << ' ';
			}
			for(k = 1; k < i*2; ++k){
				cout << '0';
			}
			cout << endl;
		}

		for(i = (n/2+1); i >= 1; --i){
			for(j = 10; j >= i; --j){
				cout << ' ';
			}
			for(k = i*2; k > 1; --k){
				cout << '0';
			}
			cout << endl;
		}
	} while(n != -1);	

	return 0;
}
