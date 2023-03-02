#include <stdio.h>
#include <math.h>

int main ()
{
	int sayi1, sayi2, a, b;
	
	printf("OBEB bulunacak sayilari giriniz : ");
	scanf("%d%d", &sayi1, &sayi2);
	
	while (sayi1<=0 || sayi2<=0){
		printf("Yanlis !! Negatif deger girdiniz");
		printf("\nOBEB bulunacak sayilari giriniz : ");
		scanf("%d", &sayi1, &sayi2);
		
	}
	a=sayi1;
	b=sayi2;
	
	printf("OKEK (%d,%d) = ", sayi1, sayi2);
	
	
	while ( a != b ) {
		if (a < b){
			b = fabs(a-b);
		}
		else {
			a = fabs(a-b);
		}
		
	}

	printf("%d", (sayi1*sayi2)/a);
	
	return 0 ;
}