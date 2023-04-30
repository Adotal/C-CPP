#include<iostream>
using namespace std;

int main(){

	unsigned int lado=0,temp=0,area=0;

	cout << "Longitud de cada lado: ";
	cin >> lado;

	temp = lado;
	while(temp > 0){
		cout << "*";
		--temp;
	}
	cout << endl;

	if(lado !=1){
		temp = lado;
		while((temp-2) > 0){
			cout << "*";
			area = lado - 2;
			while(area > 0){
				cout << " ";
				--area;
			}
			cout << "*\n";
			--temp;
		}

		temp = lado;
		while(temp > 0){
			cout << "*";
			--temp;
		}
		cout << "\n" << endl;
	}
	return 0;
}
