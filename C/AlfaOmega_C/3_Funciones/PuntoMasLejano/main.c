// main.c

/*
    Programa que lee una serie de puntos y decide cual
    es el más lejano al origen

    El programa lo componen los siguientes ficheros:
    main.c
    global.h
    leer.c
    leer.h
    calcular.c
    calcular.h

*/

#include <stdio.h>

#include "global.h"
#include "leer.h"
#include "calcular.h"

int main (void) {

    t_punto lista [MAX];
    int cuantos;
    int most_far;
    float distance;
    t_punto origen = {0.0, 0.0};

    cuantos = leePuntos(lista, MAX);

    imprimePuntos(lista, cuantos);

    most_far = lejano(lista, cuantos);

    distance = distancia(&origen, &lista[most_far]);
    
    printf("\nEl más lejano es el punto %d (x = %f; y = %f) \n"
            "Dista %f del origen\n",
            most_far, lista[most_far].x, lista[most_far].y, distance);

    return 0;

}

