#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bahaneYaz (int a);
int main()
{
	srand(time(NULL));
	
	bahaneYaz(1);
	
	bahaneYaz(6);
	
}
void bahaneYaz (int a)
{
	int var;
	do {
		
		var = (rand()%9 + (a+1))%10 + 1;
	
	}while(a==var);
	
	
	printf("\nBu isin arkasinda ");
	if (var==1)
		printf("Amerika");
	else if (var==2)
		printf("Japonya");
	else if (var==3)
		printf("Ispanya");
	else if (var==4)
		printf("Fransa");
	else if (var==5)
		printf("Rusya");
	else if (var==6)
		printf("Katar");
	else if (var==7)
		printf("Almanya");
	else if (var==8)
		printf("Ingiltere");
	else if (var==9)
		printf("Cin");
	else if (var==10)
		printf("Turkiye");
	printf(" vardir\n");
	printf("%d", var);
}
