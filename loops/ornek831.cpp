#include <stdio.h>

int main ()
{
	int sayi, enBuyuk, ikiEnBuyuk;
	
	printf("1. sayi=  ");
	scanf("%d", &sayi);
	enBuyuk=sayi;
	ikiEnBuyuk=sayi;
	
	for ( int i = 2 ; i < 11 ; i++){
	
		printf("%d. sayi=  ", i);
		scanf("%d", &sayi);
		
		if ( sayi >enBuyuk){
			ikiEnBuyuk=enBuyuk;
			enBuyuk=sayi;
		}
		else if ( sayi>ikiEnBuyuk )
			ikiEnBuyuk=sayi;
	}
	
	printf("En buyuk deger = %d", enBuyuk);
	printf("\nIkinci en buyuk deger = %d", ikiEnBuyuk);
	return 0;
}