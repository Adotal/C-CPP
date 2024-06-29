// 8.5_NCaracteres.c

#include <stdio.h>

int main(){

	char sentence[100];

	printf("Please, type the sentence:\n");

	// fgets(line, sizeof, line, stdin)
	fgets(sentence, 100, stdin);	

	int contador = 0;
	while(sentence[contador] != '\n')
		++contador;

	printf("The sentence provided has %d chars.\n", contador);

	return 0;

}
