// leer.c
// Lee un entero y devuelve el entero leido

#include <stdio.h>
#include "global.h"
#include "leer.h"

// Le un string y devuelve entero
int leeInt (const char* mensaje) {
	
	char texto[MAX];
	int res;

	printf("%s", mensaje);
	fgets(texto, MAX, stdin);
	// Convierto a entero
	sscanf(texto, "%d", &res);

	return res;
}

// Le un string y devuelve float
float leeFloat (const char* mensaje) {

	char texto[MAX];
	float res;

	printf("%s", mensaje);
	fgets(texto, MAX, stdin);
	// Convierto a entero
	sscanf(texto, "%f", &res);

	return res;
}

/*
   Lee una serie de puntos y los guarda en un array
   Devuelve el núemero de puntos leidos (int)
*/

int leePuntos(t_punto* pElem, const int max) {

	int cuantos;

	// Lee cuantos puntos
	do {
		cuantos = leeInt("Cuantos puntos? ");
	} while(cuantos <= 0 || cuantos > max);

	for(int i = 0; i < cuantos; ++i) {

		printf("Punto %d: ", i);
		pElem[i].x = leeFloat(" x ");
		pElem[i].y = leeFloat(" y ");
	}

	return cuantos;
}

void imprimePuntos(const t_punto* lista, int cuantos) {

	for(int i = 0; i < cuantos; ++i) {

		printf("\nPunto %d: (%f,%f)", i,
		lista[i].x,
		lista[i].y);

	}

}