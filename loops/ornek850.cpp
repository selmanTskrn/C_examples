#include <stdio.h>
#include <math.h>

int main ()
{
	int sayi1, sayi2;
	
	printf("OBEB bulunacak sayilari giriniz : ");
	scanf("%d%d", &sayi1, &sayi2);
	
	while (sayi1<=0 || sayi2<=0){
		printf("Yanlis !! Negatif deger girdiniz");
		printf("\nOBEB bulunacak sayilari giriniz : ");
		scanf("%d", &sayi1, &sayi2);
		
	}
	
	printf("OKEK (%d,%d) = ", sayi1, sayi2);
	
	
	
	while ( sayi1 != sayi2 ) {
		if (sayi1 < sayi2){
			sayi2 = fabs(sayi1-sayi2);
		}
		else {
			sayi1 = fabs(sayi1-sayi2);
		}
		
	}

	printf("%d", sayi1);
	
	return 0 ;
}