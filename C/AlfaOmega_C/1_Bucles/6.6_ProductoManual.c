#include <stdio.h>

int main(){

	int factor1, factor2, producto;

	while(1){
		printf("Escribe dos números a multiplicar: ");
		scanf("%d %d", &factor1, &factor2);
		producto = 0;
		int i = factor1;
		while(i != 0){
			if(factor1 > 0)
				if(factor2 > 0)
					producto += factor2; // (+)(+) = +
				else
					producto += factor2; // (+)(-) = -
			else
				if(factor2 < 0)
					producto -= factor2; // (-)(-) = +
				else
					producto -= factor2; // (-)(+) = -
			(i > 0) ? --i : ++i;
		}

		printf("\n %d * %d = %d\n",
				factor1, factor2, producto);
	}
	return 0;
}
