#include <stdio.h>

int main ()
{
	int i, j;
	int adet = 0;
	
	printf("Baslangic yilini giriniz : ");
	scanf("%d", &i);
	printf("Bitis yilini giriniz : ");
	scanf("%d", &j);
	printf("----------------------\n");
	
	while ( i <= j ){
		if ( i % 4 == 0 ){
			printf("%d,", i); adet = adet + 1;
		}
		i++ ;
		
	}
	printf("\nToplam %d adet", adet);
	return 0;
}