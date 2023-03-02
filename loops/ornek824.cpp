#include <stdio.h>

int main ()
{
	int sayi=1000;
	int rakam1, rakam2, rakam3, rakam4;
	int c1=1, c2=1, c3=1, c4=1 ;
	int toplam;
	
	for ( sayi=1000 ; sayi<=9999 ; sayi++){
		rakam1 = (sayi-sayi%1000)/1000;
		rakam2 = (sayi%1000-sayi%100)/100;
		rakam3 = (sayi%100-sayi%10)/10;
		rakam4 = sayi%10 ;
		
		for ( int i=1 ; i<=rakam1 ; i++){
			c1 = c1 * rakam1;
		}
		for ( int j=1 ; j<=rakam2 ; j++){
			c2 = c2 * rakam2;
		}
		for ( int k=1 ; k<=rakam3 ; k++){
			c3 = c3 * rakam3;
		}
		for ( int l=1 ; l<=rakam4 ; l++){
			c4 = c4 * rakam4;
		}
		toplam = c1+c2+c3+c4 ; 
		
		if ( toplam == sayi )
		
			printf("%d", sayi);
		c1=1, c2=1, c3=1, c4=1 ;
	}
	return 0;
		
}