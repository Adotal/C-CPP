// OrderVector.cpp
#include<iostream>

using namespace std;

int main(){
	int i=0, j=0, trn=0, length=0, menor=0;

	cout << "No. de elementos del vector: ";
	cin >> length;

	int vector1[length];
	
	for(i = 0; i < length; ++i){
		cout << "Elemento "<<i<<": ";
		cin >> vector1[i];
	}
	for(i = 0; i < length; ++i){
		menor = i;
		for(j = i; j < length; ++j){
			if(vector1[j] < vector1[menor]) menor = j;
		}
		trn = vector1[i];
		vector1[i] = vector1[menor];
		vector1[menor] = trn;
	}
	
	cout << endl << "El vector ordenado: " << endl;
	for(i = 0; i < length; ++i)
		cout << '['<<vector1[i]<<']';

	return 0;
}
