#include <stdio.h>

int main()
{
	int i, j, seri_adedi, buyuk_seri=0, buyuk_sayi;
	
	for ( i=10 ; i<=50 ; i++){
		j=i;
		seri_adedi=1;
		
		while ( j!=1 ){
			if ( j%2==0 ){
				j = j / 2 ;
			}
			else
				j = 3*j + 1;		
			
			seri_adedi++;
		}
		if (seri_adedi>buyuk_seri){
			buyuk_seri=seri_adedi;
			buyuk_sayi=i;
		}
			
		
	}
	printf("Aranan sayi : %d", buyuk_sayi);
	printf("\nCollatz serisi %d adet sayidan olusur", buyuk_seri);
	return 0;
}