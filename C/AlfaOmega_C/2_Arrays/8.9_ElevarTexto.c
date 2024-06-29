// 8.9_ElevarTexto.c

#include <stdio.h>
#include <unistd.h> // For sleep()

#define MAX 10

int main(){
	
	char array1[MAX][MAX],
		 word[MAX];


	printf("Type the word you want to 'upload':\n");
	fgets(word, MAX, stdin);

	// Fill with zeros
	for(int i = 0; i < MAX; ++i)
		for(int j = 0; j < MAX; ++j)
			array1[i][j] = ' ';

	// Set the word at the bottom of the array
	for(int i = 0; word[i] != '\n'; ++i)
		array1[MAX - 1][i] = word[i];

	
	for(int i = 0; i < MAX; ++i){

		// Print current array
		for(int j = 0; j < MAX; ++j){
			for(int k = 0; k < MAX; ++k)
				printf("%c", array1[j][k]);
			printf("\n");
		}
		printf("--------------------\n");

		// Get up the word one line
		if(i < MAX - 1)
			for(int j = 0; j < MAX; ++j){
				array1[MAX - 2 - i][j] = array1[MAX - 1 - i][j];
				// Delete last position
				array1[MAX - 1 - i][j] = 0;
			}
		sleep(1); // Wait 1 second
	}
	

	return 0;
}
