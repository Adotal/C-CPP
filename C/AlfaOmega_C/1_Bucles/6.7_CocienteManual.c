#include <stdio.h>

int main(){

	int dividendo, divisor, cociente, i, resto;
	while(1){
		printf("Escribe dos números a dividir: ");
		scanf("%d %d", &dividendo, &divisor);
		if(divisor == 0)
			break;
		i = (dividendo > 0 ? dividendo:-dividendo); 
		cociente = 0;
		resto = 0;
		while(i > 0){
			if(dividendo > 0)
				if(divisor > 0)
					++cociente; // (+)(+) = +
				else
					--cociente; // (+)(-) = -
			else
				if(divisor < 0)
					++cociente; // (-)(-) = +
				else
					--cociente; // (-)(+) = -
			i -= (divisor > 0 ? divisor:-divisor);  
			if(i < 0)
				++resto;
		}
		// Quitar resto:
		if(resto)
			if(dividendo > 0)
				if(divisor > 0)
					--cociente; // (+)(+) = +
				else
					++cociente; // (+)(-) = -
			else
				if(divisor < 0)
					--cociente; // (-)(-) = +
				else
					++cociente; // (-)(+) = -

		printf("\n %d / %d = %d\n resto = %d\n",
				dividendo, divisor, cociente, resto);
	}
	return 0;
}
