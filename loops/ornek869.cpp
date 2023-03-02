#include <stdio.h>

int main()
{
	int sayi, i, i1, i2, direnc, enBuyuk=0, direncSayi;
	
	for (sayi=10 ; sayi<100 ; sayi++){
		i=sayi;
		direnc=0;
		while ( i>9){
			i1= (i-i%10)/10;
			i2= i%10;
			i= i1*i2;
			direnc++;
		}
		if (direnc>enBuyuk){
			enBuyuk=direnc;
			direncSayi=sayi;
		}
	}
	printf("Carpim direnci en buyuk sayi = %d (Carpim direnci = %d)", direncSayi, enBuyuk);
	return 0;
}