// calcular.c

#include <math.h>

#include "global.h"
#include "calcular.h"

/*
    Funcion distancia, clacula la distancia entre dos puntos del 
    plano.
    Devuelve la distancia calculada
    Puntos como parámetros
*/

float distancia (const t_punto* p1, const t_punto* p2) {
    
    float res;

    res = sqrt(( pow(p1->x - p2->x, 2) +
            pow(p1->y - p2->y, 2) ) );

    return res;
}

/*
    Funcion lejano
    De un array de puntos, dice cual es el más lejano al origen
*/
int lejano (const t_punto* pElem, const int cuantos) {

    t_punto origen;
    origen.x = 0.0;
    origen.y = 0.0;

    int indFar = 0;     // Indice del mas lejano 
    int faraway = 0;    // Mayor distancia
    int dist = 0;

    for(int i = 0; i < cuantos; ++i){
        dist = distancia(&pElem[i], &origen);
        
        if(dist > faraway){
            faraway = dist;
            indFar = i;
        }
        
    }
    return indFar;
}
