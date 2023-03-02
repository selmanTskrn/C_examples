#include <stdio.h>

int main()
{
	int sayi, i, i1, i2, zincir, adet=0;
	printf("Cikarma zinciri 6 olan iki basamakli sayilar\n");
	
	
	for (sayi=10 ; sayi<100 ; sayi++){
		zincir=1;
		i=sayi;
		while (i>10){
	
			i1=(i-i%10)/10;
			i2=i%10;
		
			if ( i > 10*i2+i1 ){
				i = i - (10*i2+i1) ;
				zincir++;
			}
			else {
				i = (10*i2+i1) - i ;
				zincir++;
			}
		}
		if(zincir==6){
			printf("%d, ", sayi);
			adet++;
		}
	}
	printf("\nToplam %d adet", adet);
	return 0;
}