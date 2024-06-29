// 8.10_DeslizarTexto.c

#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define MAX 20

int main(){

	char pantalla[MAX + 1];
	char word[MAX];
	int i, j, inScreen;
	int wordLeng;

	// Get word
	printf("Escribe una frase a deslizar:\n");
	fgets(word, MAX, stdin);
	wordLeng = strlen(word) - 1;

	// Set pantalla to only spaces
	for(j = 0; j < MAX; ++j)
		pantalla[j] = ' ';

	// To appear the word in screen
	inScreen = MAX;

	// Print pantalla[]
	printf("%s\n", pantalla);

	// Add the word at the right place
	j = 0;
	while(MAX - inScreen < wordLeng){
		
		// Wait 1 second
		sleep(1);

		// Slide pantalla[]
		for(i = inScreen; i < MAX; ++i)
			pantalla[i-1] = pantalla[i]; 
		--inScreen;

		// Set the last char
		pantalla[MAX - 1] = word[j++];

		// Print pantalla[]
		printf("%s\n", pantalla);	

	}
	// Slide during all the screen	
	while(inScreen > 0){
		
		// Wait 1 second
		sleep(1);

		// Slide pantalla[]
		for(i = inScreen;
			i < inScreen + wordLeng + 1; // Ads one for the last char
			++i)
			pantalla[i-1] = pantalla[i]; 
		--inScreen;

		// Set the last char
		pantalla[MAX - 1] = ' ';

		// Print pantalla[]
		printf("%s\n", pantalla);	

	}
	// Moves out the screen at the left place
	j = wordLeng;
	while(j > 0){
		
		// Wait 1 second
		sleep(1);

		// Slide pantalla[]
		for(i = inScreen + 1; i < inScreen + wordLeng + 1 ; ++i)
			pantalla[i-1] = pantalla[i]; 
		--j;
		// Print pantalla[]
		printf("%s\n", pantalla);	

	}

	return 0;
}
