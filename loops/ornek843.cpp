#include <stdio.h>

int main ()
{
	int sayi,sayi1, adet, enBuyuk=0;
		
	for (sayi=1000 ; sayi>1 ; sayi--){
		adet=0;
		for ( int i=sayi-1 ; i>0 ; i-- ){
			if (sayi%i==0)
				adet=adet+1 ;
		}
		if ( enBuyuk < adet ){
			enBuyuk = adet ;
			sayi1 = sayi ;
		}
	}
	printf("Boleni en cok olan sayi %d ( Bolen sayisi %d)", sayi1, enBuyuk);
	return 0;
}