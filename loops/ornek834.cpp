#include <stdio.h>

int main ()
{
	printf("Sayilar : ");
	
	for ( int sayi=1000 ; sayi<=9999 ; sayi++ ){
		
		int toplam, s12, s34;
		
		s12 = ( sayi-sayi%100)/100 ;
		s34 = sayi%100 ;
		toplam = (s12+s34)*(s12+s34) ;
		
		if ( sayi == toplam )
			printf("%d, ", sayi);
	}
	return 0;
}