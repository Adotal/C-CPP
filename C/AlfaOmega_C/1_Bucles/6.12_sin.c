//6.12_sin.c

#include <stdio.h>

int main(){

	double xrad;
	int    reps;
	printf("Calcular sin(x)\n");
	printf("Proporcione x rad y n de repeticiones: ");
	scanf("%lf", &xrad);
	scanf("%d", &reps);

	double seno = 0;
	double fact = 1;
	double power = xrad;
	bool   negativo = false;
	for(int i = 1; i <= reps; ++i){
		if(i % 2){	// Si no es par

			if(negativo){
				seno -= power / fact;
				negativo = false;
			} else{
				seno += power / fact;
				negativo = true;
			}
		}	
		power *= xrad;
		fact *= i+1;
	}

	printf("sen(%lf) = %lf\n", xrad, seno);


	return 0;
}
