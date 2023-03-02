#include <stdio.h>

int main()
{
	int i, i1, i2, zincir=1;
	
	printf("Sayiyi giriniz : ");
	scanf("%d", &i);
	
	while ( i<10 || i>99){
		printf("HATA!! 2 basamakli sayiyi giriniz : ");
		scanf("%d", &i);
	}
		
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
	printf("Cikarma zinciri uzunlugu = %d", zincir);
	return 0;
}