#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#ifdef _WIN32
 #include<conio.h>
#endif

int main(){

	int valor=0, power=1, i=0, opt=1;
	char bin[20]="";
	
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
		memset(bin, 0, 20);
		printf("Valor decimal: ");
		scanf("%i",&valor);

		while(power<=valor) power*=2;

		if(valor!=0) power/=2;
	
		while(power>=1){

			if(valor>=power){
				bin[i]=49;
				valor-=power;
				power/=2;
			} else{
				bin[i]=48;
				power/=2;
		
			}
			i++;
		}
		printf("\n%s\n", bin);
		break;

	case 2:
		printf("Valor binario: ");
		scanf("%s",&bin);
	
		for(i=1; i<strlen(bin); i++) power*=2;

		for(i=0; i<strlen(bin); i++){
			if(bin[i]==49){
				valor+=power;
				power/=2;
			}else{
				power/=2;
			}
		}
		printf("%i\n",valor);
		break;

	case 3:
		system("clear");
		break;
		}
	}
}
