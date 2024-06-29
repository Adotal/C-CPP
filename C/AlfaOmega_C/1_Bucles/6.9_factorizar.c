// 6.9_factorizar.c

#include <stdio.h>

int main(){

	int num;
	bool negativo;

	printf("Escribe un número a factorizar: ");
	scanf("%d", &num);

	negativo = num < 0; 
	if(num < 0)
		num = -num;

	int i = 2;
	while(i <= num)
		if(num % i == 0){
			printf("%d\n", i);
			num /= i;
		}
		else
			++i;

	if(negativo)
		printf("%d\n", -1);
	else 
		printf("%d\n", 1);
		
	
	return 0;
}
