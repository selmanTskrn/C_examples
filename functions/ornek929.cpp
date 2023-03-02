#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ertelemeMesaji(int a);

int main()
{
	srand(time(NULL));
	
	ertelemeMesaji( 1 );
	
	ertelemeMesaji( 6 );
	return 0;
}
void ertelemeMesaji(int a)
{
	int var;
	
	do{
		
		var = rand()%7 + 1;
	
	}while ( a==var );
	
	printf("\n");
	
	if (var==1)
		printf("Pazar");
	else if (var==2)
		printf("Pazartesi");
	else if (var==3)
		printf("Sali");
	else if (var==4)
		printf("Carsamba");
	else if (var==5)
		printf("Persembe");
	else if (var==6)
		printf("Cuma");
	else 
		printf("Cumartesi");
	printf(" gunu teslimat yapilacaktir\n");
}