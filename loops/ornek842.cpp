#include <stdio.h>

int main ()
{
	int sayi,toplam;
	
	printf("Aranilan sayi : ");
	for ( sayi=9999 ; sayi>999 ; sayi-- ){
		
		toplam = 0;
		
		for ( int i=sayi-1 ; i>0 ; i-- ){
			if (sayi%i==0)
				toplam = toplam + i ;
		}
		if ( toplam > sayi && sayi%2 != 0){
			printf("%d", sayi);
			break;
		}
	}
	return 0;
}