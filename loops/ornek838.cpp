#include <stdio.h>

int main ()
{
	int sayi, toplam ;
	
	printf("1 ile 1000 arasindaki mukemmel sayilar \n");
	
	for (sayi=1 ; sayi<=1000 ; sayi++ ){
		toplam = 0;
		for ( int i = sayi-1 ; i>=1 ; i-- ){
			if ( sayi%i == 0 ){
				toplam = toplam + i ;
			}
		}
		if ( toplam == sayi)
			printf("%d, ", sayi);
	}
	return 0;
}