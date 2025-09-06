// variosArg.c

// Funcion con varios argumentos

#include <stdio.h>
#include <stdarg.h>

/*
  Funcion mayor()
  Devuelve el mayor de la lista de argumentos
*/

int mayor (const int a, ...) {
	
	// Para sacar la parte variable a parametros`
	va_list p;

	int n, may;

	// Inicializo p
	va_start(p, a);

	// El mayor es el primero para iniciar
	may = a;

	// Saco argumentos como enteros en n
	while( (n = va_arg(p, int)) ){
		if(n > may)
			may = n;	// Nuevo mayor
	}
	// Ya no hay argumentos
	va_end(p);

	// Devuelvo mayor
	return (may);
}

int main(void) {

	int may = 0;

	may = mayor(1, 2, 3);

	printf("%d \n", may);

	may = mayor(1, 5, 3, 2, 4);

	printf("%d \n", may);

	may = mayor(1, 5, 3, 2, 4, 9, 0);

	printf("%d \n", may);

	return 0;
}
