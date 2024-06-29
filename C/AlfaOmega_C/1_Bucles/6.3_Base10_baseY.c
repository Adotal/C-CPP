// Base10_BaseY.c

#include <stdio.h>

int main(){
	int base10, baseY, result = 0;
	int powerY = 1, power10 = 1;

	printf("Escribe un número base 10: ");
	fflush(stdout);
	scanf("%d", &base10);

	do{
		printf("Escribe la base a convertirlo: ");
		scanf("%d", &baseY);
	}while(baseY < 2 || baseY > 10);
	// exit(0)

	while(base10 > 0){
		result += base10 % baseY * power10;
		power10 *= 10;
		base10 /= baseY;
	}	

	printf("El resultado es: %d", result);
	
}
