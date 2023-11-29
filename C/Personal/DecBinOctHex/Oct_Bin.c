#include<stdio.h>
#include<string.h>
#ifdef _WIN32i
 #include<conio.h>
 #include<windows.h>
#else
 #include<stdlib.h>
#endif

int main(){
	int valor=0, power=1, position=0, provis=0, indice=0, opt=0;
	char bin[20], oct[20], tri[20];

	printf("\tBinario-Octal por agrupación\n");
	printf("1. Binario a Octal\n");
	printf("2. Octal a Binario\n");
	printf("3. Salir\n");


	while(true){
	memset(bin, 0, 20);
	memset(oct, 0, 20);
	memset(tri, 0, 20);
	printf("Selecciona una opción: ");
	scanf("%i", &opt);

	switch(opt){
	case 1:

	printf("Escribe un valor binario: ");
	scanf("%s",&bin);

	position=strlen(bin)-1;

	while(position>=0){
	power=1, valor=0;
	if(position>=2){
		for(int i=0; i<3; i++){
			switch(bin[position]){
				case 48:
					break;
				case 49:
					valor+=power;
					break;
			}
			power*=2;	
			position--;
		}
	}else{
		provis=position;
		for(int i=0; i<provis; i++) power*=2;
		for(int i=0; i<=provis; i++){
			switch(bin[i]){
				case 48:
					break;
				case 49:
					valor+=power;
					break;
			}
			power/=2;
			position--;
		}

	
	}
	switch(valor){
			case 0: //Case zero
				 oct[indice]=48;
				 break;				
			case 1: //Case one
				 oct[indice]=49;
				 break;
			case 2: //Case two
				 oct[indice]=50;
				 break;
			case 3: //Case three
				 oct[indice]=51;
				 break;
			case 4: //Case four
				 oct[indice]=52;
				 break;
			case 5: //Case five
				 oct[indice]=53;
				 break;
			case 6: //Case six
				 oct[indice]=54;
				 break;
			case 7: //Case seven
				 oct[indice]=55;
				 break;			
			}
	indice++;
	}
	for(int i=0; i<=strlen(oct); i++){
		indice--;
		tri[i]=oct[indice];
	}
	printf("{%s}", tri);
			break;

		case 2:
			printf("Escribe el valor octal: ");
			scanf("%s",&oct);
			for(int i=0; i<strlen(oct); i++) bin[i]='0';
			for(int i=0; i<3; i++){
			}
			printf("{%s} ", bin);


			break;

		case 3:
			break;
	}
	}
}
