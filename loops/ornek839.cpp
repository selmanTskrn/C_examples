#include <stdio.h>

int main ()
{
	int sayi, toplam ;
	
	printf("Aranilan sayilar : ");
	
	for ( sayi=9999 ; sayi>0 ; sayi-- ){
		toplam = 0;
		for ( int i = sayi-1 ; i>=1 ; i-- ){
			if ( sayi%i == 0 ){
				toplam = toplam + i ;
			}
		}
		if ( toplam == sayi){
			printf("%d, ", sayi);
			break ;
		}
			
			
	}
	return 0;
}