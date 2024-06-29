// 8.6_StintToInt.c

#include <stdio.h>

#define MAX 50

int main(){

	char numberStr[MAX];
	int  numberInt = 0;
	int  potencia, i;
	printf("Please, type a number as a string:");
	fgets(numberStr, MAX, stdin);

	// Cuenta número de elemetos
	i = 0;
	while(numberStr[i] != '\n')
		++i;
	
	// Decrementa para eliminar el desfase
	--i;

	// Llena int con multiplicando por potencias de diez
	potencia = 1;
	while(i >= 0){
		// Se resta el valor ASCII de cero.
		// Eje: '4' - '0' = 52 - 48 = 4
		numberInt += (numberStr[i] - '0') * potencia;
		potencia *= 10;
		--i;
	}
	
	printf("The word %s is the number %d.", numberStr, numberInt);

	return 0;
}
