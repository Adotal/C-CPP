// 8.3_FusionOrdenada.c

#include <stdio.h>

#define MAX 50

int main(){

	int array1[MAX/2];
	int array2[MAX/2];
	int array3[MAX];
	int nelements1;
	int nelements2;
	bool ordenados = true;
	
	printf("Introduce el primer arreglo:\n");
	do {
		printf("¿No. de elementos? ");
		scanf("%d", &nelements1);
	} while(nelements1 < 0 || nelements1 > MAX/2);
	// Llenar array1
	for(int i = 0; i < nelements1; ++i){
		printf("Posición %d: ", i);
		scanf("%d", &array1[i]);
	}
	printf("Introduce el segundo arreglo:\n");
	do {
		printf("¿No. de elementos? ");
		scanf("%d", &nelements2);
	} while(nelements2 < 0 || nelements2 > MAX/2);
	// Llenar array2
	for(int i = 0; i < nelements2; ++i){
		printf("Posición %d: ", i);
		scanf("%d", &array2[i]);
	}

	int indice1 = 0,
		indice2 = 0;

	for(int i = 0; i < nelements1 + nelements2; ++i){
		if(array1[indice1] <= array2[indice2] && indice1 < nelements1)
			// Que sea menor y que no se halla recorrido todo el arrelo
			array3[i] = array1[indice1++];	
		else
			array3[i] = array2[indice2++];
	}

	printf("------------------------------------------\n");
	for(int i = 0; i < nelements1 + nelements2; ++i)
		printf("%d, ", array3[i]);
	return 0;
}
