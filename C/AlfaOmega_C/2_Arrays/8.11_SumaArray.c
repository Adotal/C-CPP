// 8.11_SumaArray.c

#include <stdio.h>

int main(){

	int n; // Size of the array n x n

	// 1 if it is upper triang, 2 if is donwer triang, 0 if nothing
	int esTriangle = 1; 
	
	int suma = 0; // Sum of elements
	int i, j; // Indexes

	printf("Escribe el tamaño del arreglo (n x n): "); 
	scanf("%d", &n);

	int array[n][n];
	
	for(i = 0; i < n; ++i)
		for(j = 0; j < n; ++j){
			printf("Introduce elemento [%d][%d]: ", i, j);
			scanf("%d", &array[i][j]);
		}

	// Print the triangle
	printf("\nEl siguiente arreglo:\n");
	for(i = 0; i < n; ++i){
		for(j = 0; j < n; ++j)
			printf("[%3d]", array[i][j]);
		printf("\n");
	}

	// Verify upper triangle and make a part of the sum 
	for(i = 1; i < n; ++i)
		for(j = 0; j < i; ++j){
			suma += array[i][j];
			if(array[i][j] != 0)
				esTriangle = 2;
		}


	//	if esTriangle = 1 at now, it is upper triangle
	//	if esTriangle = 2 at now, it is not upper triangle

	// Verfy downer triangle and make the other half sum
	for(i = 0; i < n - 1; ++i)
		for(j = i + 1; j < n; ++j){
			suma += array[i][j];
			if(esTriangle == 1)
				if(array[i][j] == 0)
					esTriangle = 0;
			if(esTriangle == 2)
				if(array[i][j] != 0)
					esTriangle == 0;
		}

	// Finalize the sum
	for(i = 0; i < n; ++i){
		suma += array[i][i];
		if(array[i][i] == 0)
			esTriangle = 0;
	}

	// Print results
	printf("La suma es %d\nLa matriz ", suma);
	switch(esTriangle){
		case 0:
			printf("No es triangular");
		break;
		case 1:
			printf("Es triangular superior");
		break;
		case 2:
			printf("Es triangular inferior");
		break;
	}
	

	return 0;
}

