// 8.7_OrdenAlf.c

#include <stdio.h>

#define MAX 100

int main(){

	char word1[MAX], word2[MAX];
	int i;

	printf("Escribe una palabras:\n");
	fgets(word1, MAX, stdin);
	printf("Escribe otra palabras:\n");
	fgets(word2, MAX, stdin);

	// Mientras sean iguales los caracteres y no se hayan acabado
	for(i = 0;
	 	word1[i] == word2[i] && word1[i] != '\n' && word2[i] != '\n';
		++i);
	
	// Se aprovecha que '\n' es menor a cada letra en ASCII
	// Se evalua un unico caso relevante


	// Quita el sato de línea innecesario:
	int j;
	for(j = 0; word1[j] != '\n'; ++j);
	word1[j] = 0;
	for(j = 0; word2[j] != '\n'; ++j);
	word2[j] = 0;

	if(word1[i] < word2[i]){
		printf("%s antes de %s.", word1, word2);
	}
	else if(word2[i] < word1[i])
		printf("%s antes de %s.", word2, word1);
	else 
		printf("Son textos iguales");

	return 0;
}
