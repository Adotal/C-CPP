// 6.8_Exponentes.c

#include <stdio.h>

int main(){

	double x, y, result = 1;
	bool exponent_positive;

	printf("Escribe una base y un exponente X^Y: ");
	scanf("%lf", &x);
	scanf("%lf", &y);

	exponent_positive = (y >= 0);
	if(y < 0)
		y = -y;

	for(int i = 0; i < y; ++i)
		result *= x;
	
	if(!exponent_positive)
		result = 1.0 / result;
	
	printf("\nEl resultado es: %.2lf\n", result);	

	return 0;
}
