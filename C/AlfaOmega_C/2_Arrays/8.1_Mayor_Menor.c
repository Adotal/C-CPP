// 8.1_Mayor_Menor.c

#include <stdio.h>

#define MAX 100

int main(){
	int arreglo[MAX];
	int nelements;
	int mayor, menor;

	do {
		printf("Cuántos elementos vas a guardar? ");
		scanf("%d", &nelements);
	} while(nelements < 0 || nelements > MAX);

	// Llenar array
	for(int i = 0; i < nelements; ++i){
		printf("Posición %d: ", i);
		scanf("%d", &arreglo[i]);
	}

	menor = mayor = 0;
	for(int i = 1; i < nelements; ++i){
		if(arreglo[i] > arreglo[mayor])
			mayor = i;

		if(arreglo[i] < arreglo[menor])
			menor = i;
	}

	printf("El menor es %d, posición %d\n", 
			arreglo[menor], menor);
	printf("El mayor es %d, posición %d\n", 
			arreglo[mayor], mayor);
	return 0;
}
