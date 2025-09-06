// sumaArg.c

// El siguiente programa recibe argumentos enteros y devuelve suma

#include <stdio.h>
#include <stdlib.h>

int main(int nArgs, char* lArgs[]) {

	int valor, suma;

	if(nArgs == 1) {
		printf("Utilización: %s <arg1> <arg2> ...\n", lArgs[0]);
		printf("Suma de argumentos\n");
		exit(1);
	}

	suma = 0;

	for(int i = 0; i < nArgs; ++i) {

		// Recibe argumentos como enteros
		sscanf(lArgs[i], "%d", &valor);
		// Acumulo
		suma += valor;
	} 

	printf("El resultado = %d \n", suma);

	return 0;

}
