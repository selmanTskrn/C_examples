#include <stdio.h>

int main ()
{
	int i, j;
	int adet = 0;
	
	printf("Baslangic ve bitis degerlerini yaziniz : ");
	scanf("%d%d", &i, &j);
	printf("Sayilar sunlardir :");
	
	while ( i <= j ){
		if ( i % 2 == 0){
			adet = adet + 1;
			printf("%d,", i);
		}
		i++ ;
	}
	printf(" ( Toplam %d adet )", adet);
	return 0;
}