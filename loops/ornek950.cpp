#include <stdio.h>

int main ()
{
	int sayi1, sayi2, sayi3, zincir=0;
	
	printf("1. sayiyi giriniz : ");
	scanf("%d", &sayi1);
	printf("2. sayiyi giriniz : ");
	scanf("%d", &sayi2);
	printf("%d ve %d sayilarinin OBEBI : ", sayi1, sayi2);
	
	sayi3 = sayi1 % sayi2 ;
	
	while (sayi3 != 0 ){
		sayi1 = sayi2;
		sayi2 = sayi3;
		sayi3 = sayi1%sayi2;
		zincir++;
	}
	
	printf("%d", sayi2);
	printf("obeb zinciri %d", zincir);
	
	return 0 ;
}