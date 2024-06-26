// 6.11_EulerExponencial.c

#include <stdio.h>

int main(){

	double e = 1;
	double potencia= 1, factorial = 1;
	int x, n;
	printf("Calcular e^x\n"
		   "Provee x y # de repeticiones: ");
	scanf("%d", &x);
	scanf("%d", &n);

	potencia = x;
	for(int i = 2; i <= n; ++i){
		e += potencia / factorial;
		potencia *= x;
		factorial *= i;
	}
	
	printf("Resultado: %lf \n", e);
	return 0;
}
