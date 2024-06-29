// 8.4_MinimoMonedas.c

#include <stdio.h>

#define MAX 100

int main(){
	int monedas[MAX];
	int valorACambiar;
	int temp;
	int minCoins = 0;
	int numCoins = 0;
	int coinMayor;
	int indiceMayor;
	
	printf("Introduce el canjeo de las monedas, 0-Salir: ");

	// Llenar los canjeos de monedas:
	do {
		printf("Valor ? ");
		scanf("%d", &monedas[numCoins++]);
	} while(monedas[numCoins - 1] != 0 && numCoins < 20);

	// Establecer numero de monedas real
	--numCoins;

	printf("¿Qué valorACambiar hay que cambiar? (menor a 100) ");
	scanf("%d", &valorACambiar);
	temp = valorACambiar;
	/* Mientras no se haya completado el canjeo
	   y no se haya recorrido todas las monedas */
	int monedasFaltan = numCoins;
	while(valorACambiar > 0 && monedasFaltan > 0){
		
		// Establece mayor predeterminado
		coinMayor = monedas[0];
		// Encuentra moneda mayor
		for(int i = 0; i < numCoins; ++i)
			if(monedas[i] > coinMayor){
				coinMayor = monedas[i];
				indiceMayor = i;
			}
					
		// Canjea el máximo posible de la moneda mayor
		if(valorACambiar >= coinMayor){
			minCoins += valorACambiar / coinMayor;
			valorACambiar %= coinMayor;
		}	
		// Borra moneda mayor
		monedas[indiceMayor] = 0;
		--monedasFaltan;
	}
	
	if(valorACambiar > 0)
	printf("No hay número de monedas que puedan contar esa cantidad,\n"
		   "máximo puedes canjear %d monedas y te sobra %d valor",
		   minCoins, valorACambiar);
	else
	printf("El mínimo número de boletos a canjear para\n"
		   "obtener %d boletos es: %d", temp, minCoins);

	return 0;
}
