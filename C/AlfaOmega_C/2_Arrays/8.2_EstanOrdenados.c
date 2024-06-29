// 8.2_EstanOrdenados.c

#include <stdio.h>

#define MAX 50

int main(){

	int array[MAX];
	int nelements;
	bool ordenados = true;

	do {
		printf("¿Cuántos? ");
		scanf("%d", &nelements);
	} while(nelements < 0 || nelements > MAX);

	// Llenar array
	for(int i = 0; i < nelements; ++i){
		printf("Posición %d: ", i);
		scanf("%d", &array[i]);
	}
	for(int i = 0; i < nelements-1; ++i)
		if(array[i] > array[i+1]){
			ordenados = false;
			i = nelements;
		}

	if(ordenados)
		printf("SÍ están ordenados");
	else
		printf("NO están ordenados");


	return 0;
}
