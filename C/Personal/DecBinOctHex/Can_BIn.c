#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#ifdef _WIN32
#include<conio.h>
#endif

int main(){
	
	int valor=0, power=1, i=0, opt=0;
	char bin[20];

        while(true){
        printf("\t1. Decimal a Binario\n");
        printf("\t2. Binario a Decimal\n");
        printf("\t3. Clear");
        printf("\t0. Exit\n");

         valor=0, power=1, i=0, opt=1;

        printf("Select an option: ");
        scanf("%i",&opt);
        if(opt == 0) break;

	switch(opt){
		case 1:
		printf("Valor decimal: ");
		scanf("%i",&valor);

		while(power<=valor) power*=2;
		if(valor!=0) power/=2;

		printf("Binario: ");
		while(power>=1){
			printf("%i",valor/power);
			valor=valor%power;
			power/=2;
		}
		printf("\n");
		break;
			
		case 2:
		power=1, valor=0;
		memset(bin, 0, 20);
		printf("Valor binario: ");
		scanf("%s",bin);
	
			for(i=1; i<strlen(bin); i++) power*=2;
		for(i=0; i<strlen(bin); i++){
			switch(bin[i]){
			case 48: //Case zero
				 break;				
			case 49: //Case one
				 valor+=power;
				 break;
			}
			power/=2;
		}
		printf("Decimal: %i", valor);
		printf("\n");
		break;

		case 3:
		 system("clear");
		}
	}
}
