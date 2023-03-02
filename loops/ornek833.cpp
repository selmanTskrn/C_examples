#include <stdio.h>

int main ()
{
	for ( int sayi=100 ; sayi<=999 ; sayi++){
		
		int r1, r2, r3 ;
		int fak1=1, fak2=1, fak3=1;
	
		r1=(sayi-sayi%100)/100;
		r2=(sayi%100-sayi%10)/10;
		r3=sayi%10;
		
		for ( int i=1 ; i<=r1 ; i++)
			fak1 = fak1*i;
		
		for ( int j=1 ; j<=r2 ; j++)
			fak2 = fak2*j;
		
		for ( int k=1  ; k<=r3 ; k++)
			fak3 = fak3*k;
		
		if ( sayi == (fak1+fak2+fak3))
			printf("Aradiginiz sayi = %d", sayi);
		
	}
	return 0;
}