#include <stdio.h>

enum ESTADO {PALABRA, SEPARADOR};

int main(){

	enum ESTADO status = SEPARADOR;
	int num_chars = 0,
		num_lines = 0,
		num_words = 0,
		num_maxcols = 0, cols = 0;
	char actual;
	
	while(scanf("%c", &actual) != EOF){
		++num_chars;
		++cols;
		switch(actual){
			case '\n':
				++num_lines;
				if(cols > num_maxcols)
					num_maxcols = cols;
				cols = 0;
			case '\t':
			case ' ':
				status = SEPARADOR;
				break;
			default:
				if(SEPARADOR == status)
					++num_words;
				status = PALABRA;
			
		}
	}

	printf("\nChars: %d \n"
		   "Lines: %d \n"
		   "Words: %d \n"
		   "Cols:  %d \n",
		   num_chars, num_lines, num_words, num_maxcols);

	return 0;
}
