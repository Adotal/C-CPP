#include<stdio.h>

int main(){
	int a=0, b=1, n=0;

	printf("#n número de fibonacci: ");
	scanf("%i",&n);

	for(int i = 1; i<n; i++){
		b = b + a;
		a = b - a;
	}
	printf("n = %i\n",a);
}
