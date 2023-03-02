#include <stdio.h>

int main ()
{
	int sayi, enKucuk, ikiEnKucuk;
	
	printf("1. sayi=  ");
	scanf("%d", &sayi);
	enKucuk=sayi;
	ikiEnKucuk=sayi;
	
	for ( int i = 2 ; i < 11 ; i++){
	
		printf("%d. sayi=  ", i);
		scanf("%d", &sayi);
		
		if ( sayi <enKucuk){
			ikiEnKucuk=enKucuk;
			enKucuk=sayi;
		}
		else if ( sayi < ikiEnKucuk )
			ikiEnKucuk=sayi;
	}
	
	printf("En kucuk deger = %d", enKucuk);
	printf("\nIkinci en kucuk deger = %d", ikiEnKucuk);
	return 0;	
}