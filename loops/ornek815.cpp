#include <stdio.h>

int main ()
{
	int sayi=1 ;
	int sayac ;
	int test = 1 ;
	
	printf("1 ile 20 arasindaki asal sayilar");
	printf("\n---------------------------------\n");
	
	while ( sayi <= 20 ){
		
		for ( sayac = sayi-1 ; sayac > 1 && test == 1; sayac--){
			if ( sayi % sayac == 0 )
				test = 0 ;
		}
		if (test == 1 )
			printf("%d, ", sayi);
		else
			test = 1;
		
		sayi++;   
		
	}
	
	return 0;
}