#include <stdio.h>

int main ()
{
	int i, j, yedek;
	int adet = 0;
	
	printf("Birinciyi giriniz : ");
	scanf("%d", &i);
	printf("Ikinciyi giriniz: ");
	scanf("%d", &j);
	printf("----------------------\n");
	
	if ( i > j ){
		yedek = i ;
		i = j ;
		j = yedek ;
	}
	while ( i <= j ){
		if ( i % 28 == 0){
			printf("%d,", i); adet = adet + 1;
		}
		i++ ;
		
	}
	printf("\nToplam %d adet ", adet);
	return 0;
}