// 8.8_OcurrenciasString.c

#include <stdio.h>

#define MAX 100

int main(){

	char text1[MAX], toSearch[MAX / 2];
	int i, j;

	printf("Type a text:\n");
	fgets(text1, MAX, stdin);
	printf("Text to search:\n");
	fgets(toSearch, MAX / 2, stdin);

	// For each char of text1[]
	for(i = 0; text1[i] != '\n'; ++i){
		// Compares with toSearch[]
		for(j = 0;
			toSearch[j] == text1[i+j] && text1[i+j] != '\n';
			++j);
		// Only if it has pass throug all toSearch[], there is the word
		if(toSearch[j] == '\n')
			printf("In %d place, it has %s", i, toSearch);
	}


	return 0;
}
