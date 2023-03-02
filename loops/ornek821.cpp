#include <stdio.h>

int main ()
{
	int sayi = 99 ;
	int i, j, buyuk, kucuk; 
	int test = 1 ;
	int test1 = 1 ;
		
	while ( 10 <= sayi ){  // iki basamakli olmasi gerek
		
		for ( i = sayi-1 ; i > 1 && test == 1; i--){
			
			if ( sayi % i == 0  )
				test = 0 ;
		}
		if (test == 1 ){
			for ( j = sayi-3; j > 1 && test1 == 1; j--){
				
				if ( (sayi-2) % j == 0)
					test1 = 0;
			}
			if ( test1 == 1){
				printf("Aradiginiz sayilar = %d ve %d", sayi-2,sayi);
				break;
			}
			else
				test1=1;
		}
		else
			test = 1;
		sayi--;
	}
	
	return 0;
}
