// leer.h

// Prototipos a funciones de leer.c

#ifndef LEER_H_YA_INCLUIDO

#define LEER_H_YA_INCLUIDO

#include "global.h"

// Prototipos de funciones exportadas

int leerInt(const char*);
float leerFloat(const char*);
int leePuntos(t_punto*, const int);
void imprimePuntos(const t_punto*, const int);

#endif