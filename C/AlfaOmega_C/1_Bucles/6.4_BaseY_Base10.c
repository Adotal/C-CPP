// BaseY_Base10.c

#include <stdio.h>
#include <cstdlib>

int main(){

	int numY, num10 = 0, base, powerY = 1;

	printf("Escribe el número y la base en que se encuentra:");
	fflush(stdout);
	scanf("%d %d", &numY, &base);

	if(base < 2 || base > 10){
		printf("Base no admitida");
		exit(0);
	}

	while(numY > 0){
		num10 += numY % 10 * powerY;
		powerY *= base;
		numY /= 10;
	}

	printf("El resultado es: %d", num10);



	return 0;
}
