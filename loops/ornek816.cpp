#include <stdio.h>

int main ()
{
	int kenar ; 
	int sayac ;
	
	printf("Bir kenarin uzunlugunu giriniz : ");
	scanf("%d", &kenar);
	
	for ( sayac = 1; sayac <= kenar ; sayac++){
		for ( int i = 1; i <= sayac; i++)
			printf("*");
		printf("\n");
	}
	return 0;
}