/* Buscar un elemento en un conjunto de datos indizados */

#include<iostream>
using namespace std;

/* La función necesita un array, el indice inicial,
 * el indice final y el objetivo
 *
 * Búsqueda recursiva:
 *
/*
int binarySearchRecursive(int array[], int left, int right, int objective){
	if(right >= left){
		int mid = left + (right - left) / 2;
		if(array[mid] == objective){
			return mid;
		}
		if(array[mid] > objective) {
			return binarySearchRecursive(array, left, mid-1, objective);
		} else {
			return binarySearchRecursive(array, mid+1, right, objective);
			
		}
	}

	return -1;
}
*/

/* Búsqueda iterativa
 * */
int binarySearchRecursive(int array[], int left, int right, int objective){
	while(left <= right){
		int mid = left + (right - left) / 2;
		if(array[mid] == objective) return mid;
		if(array[mid] < objective) left = mid +1;
		else right = mid-1;
	}
	return -1;
}

int main(){
	int array[] = {1, 5, 10 ,43, 101, 202};
	int objective = 101;
	int sizearray = 6;	// sizeof(array) / sizeof(array)
	int result = binarySearchRecursive(array, 0, sizearray -1, objective);
	
	if(result == -1){
		cout << "El elemento no ha sido encontrado" << endl;;
	
	}else {
		cout << "El elemento encontrado en posición: "<< result << endl; 
	}

	return 0;
}
