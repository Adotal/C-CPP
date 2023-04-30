#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#ifdef _WIN32
#include<conio.h>
#endif

int main(){
	
	int valor=0, power=1, i=0, opt=0, digit=0;
	char hex[20];

        while(true){
        printf("\t1. Decimal a Hexadecimal\n");
        printf("\t2. Hexadecimal a Decimal\n");
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

		while(power<=valor) power*=16;
		if(valor!=0) power/=16;

		printf("Hexadecimal: ");
		while(power>=1){
			digit=valor/power;
			if(digit==10){
				printf("A");
			} else if(digit==11){
				printf("B");
			} else if(digit==12){
				printf("C");
			} else if(digit==13){
				printf("D");
			} else if(digit==14){
				printf("E");
			} else if(digit==15){
				printf("F");
			} else {
				printf("%i",valor/power);
			}
			valor=valor%power;
			power/=16;
		}
		printf("\n");
		break;
			
		case 2:
		power=1, valor=0;
		memset(hex, 0, 20);
		printf("Valor hexadecimal: ");
		scanf("%s",hex);
	
		for(i=1; i<strlen(hex); i++) power*=16;
		for(i=0; i<strlen(hex); i++){
			switch(hex[i]){
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
			case 65: //Case ten
				 valor+=power*10;
				 break;
			case 66: //Case eleven
				 valor+=power*11;
				 break;
			case 67: //Case twelve
				 valor+=power*12;
				 break;
			case 68: //Case thirteen
				 valor+=power*13;
				 break;
			case 69: //Case fourteen
				 valor+=power*14;
				 break;
			case 70: //Case fifteen
				 valor+=power*15;
				 break;
				
			}
			power/=16;
		}
		printf("Decimal: %i", valor);
		printf("\n");
		break;

		case 3:
		 system("clear");
		}
	}
}
