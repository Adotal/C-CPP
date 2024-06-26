// 8.12_DiagonalesArray.c

/* Given an array[][]
   find and print the diagonals
   from top-left to bottom-right.
*/

#include <stdio.h>

#define MAX 10

int main(){

	int n = 0;
	int array[MAX][MAX];
	int i, j, k;

	// Get the array size:
	do{
		printf("Tamaño de la matriz (n x n): ");
		scanf("%d", &n);
	} while(n > MAX);

	// Fill the array:
	for(i = 0; i < n; ++i)
		for(j = 0; j < n; ++j){
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &array[i][j]);
		}

	// Print diagonals
	/*
		Example with 3x3 array:
		index i:
		[<-][<-][<-]
		[v ][  ][  ]
		[v ][  ][  ]
		from each i iteration will go trought
		the diagonal \

	*/

	i = n - 1;
	while(i > 0){ 
		k = 0;
		for(j = i; j < n; ++j, ++k)
			printf("%3d ", array[k][j]);
		printf("\n");
		--i;
	}
	while(i < n){
		k = 0;
		for(j = i; j <  n; ++j, ++k)
			printf("%3d ", array[j][k]);
		printf("\n");
		++i;
	}


	return 0;
}
