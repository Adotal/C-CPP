// 6`.10_MCD.c

#include <stdio.h>

int main(){

	int num1, num2;
	printf("Escribe dos números a obtener su MCD: ");
	scanf("%d", &num1);
	scanf("%d", &num2);

	int i = 2, mcd = 1;
	while(i <= num1 || i <= num2){
		if(num1 % i == 0 && num2 % i == 0){
			num1 /= i;
			num2 /= i;
			mcd *= i;
		} else if(num1 % i == 0) {
			num1 /= i;
						
		} else if(num2 % i == 0) {
			num2 /= i;
						
		} else {
			++i;
		}
	}

	printf("El MCD es: %d", mcd);

	return 0;
}
