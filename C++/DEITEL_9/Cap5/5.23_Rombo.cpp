// 5.23_Rombo.cpp
#include<iostream>
using std::cout;
using std::endl;

int main(){
	int i = 0, j = 0, k = 0, n = 0;

	for(i = 1; i <= 10; ++i){
		for(j = 10; j >= i; --j){
			cout << ' ';
		}
		for(k = 1; k < i*2; ++k){
			cout << '0';
		}
		cout << endl;
	}

	for(i = 9; i >= 1; --i){
		for(j = 10; j >= i; --j){
			cout << ' ';
		}
		for(k = i*2; k > 1; --k){
			cout << '0';
		}
		cout << endl;
	}
	

	return 0;
}
