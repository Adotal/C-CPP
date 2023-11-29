#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#ifdef _WIN32
#include<conio.h>
#endif

int main(){
	
	int valor=0, power=1, i=0, opt=0;
	char oct[20];

        while(true){
        printf("\t1. Decimal a Octal\n");
        printf("\t2. Octal a Decimal\n");
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

		while(power<=valor) power*=8;
		if(valor!=0) power/=8;

		printf("Octal: ");
		while(power>=1){
			printf("%i",valor/power);
			valor=valor%power;
			power/=8;
		}
		printf("\n");
		break;
			
		case 2:
		power=1, valor=0;
		memset(oct, 0, 20);
		printf("Valor octal: ");
		scanf("%s",oct);
	
			for(i=1; i<strlen(oct); i++) power*=8;
				for(i=0; i<strlen(oct); i++){
			switch(oct[i]){
			case 48: //Case zero
				 valor+=power*0;
				 break;				
			case 49: //Case one
				 valor+=power*1;
				 break;
			case 50: //Case two
				 valor+=power*2;
				 break;
			case 51: //Case three
				 valor+=power*3;
				 break;
			case 52: //Case four
				 valor+=power*4;
				 break;
			case 53: //Case five
				 valor+=power*5;
				 break;
			case 54: //Case six
				 valor+=power*6;
				 break;
			case 55: //Case seven
				 valor+=power*7;
				 break;
			case 56: //Case eight
				 valor+=power*8;
				 break;
			case 57: //Case nine
				 valor+=power*9;
				 break;
				
			}
			power/=8;
		}
		printf("Decimal: %i", valor);
		printf("\n");
		break;

		case 3:
		 system("clear");
		}
	}
}
